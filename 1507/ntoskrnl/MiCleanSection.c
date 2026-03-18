/*
 * XREFs of MiCleanSection @ 0x140158DAC
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1401195C8 (MiAttemptSectionDelete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiRemoveWakeListEntry @ 0x14021228C (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *v7; // rdi
  int v8; // r15d
  unsigned int v9; // esi
  signed __int32 v10; // edx
  int v11; // eax
  __int64 inserted; // rdi
  _DWORD v13[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int16 v17; // [rsp+60h] [rbp-20h]
  char v18; // [rsp+62h] [rbp-1Eh]
  int v19; // [rsp+64h] [rbp-1Ch]
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  CurrentIrql = a2;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v16 = 0;
    v19 = 0;
    v7 = (volatile signed __int32 *)(a1 + 72);
    v20[1] = v20;
    v20[0] = v20;
    v14 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v14;
    v15 = 4;
    v17 = 263;
    v18 = 6;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *v7 = 0;
    __writecr8(CurrentIrql);
    v8 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 120), 0LL, 0LL, 0x80000000, v13);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
    }
    else
    {
      v9 = 0;
      if ( _interlockedbittestandset(v7, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
      while ( 1 )
      {
        v10 = *v7;
        if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v10 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
    }
    MiRemoveWakeListEntry(a1, &v14);
    if ( !v16 )
      break;
    if ( *(_QWORD *)(a1 + 40) != 1LL || *(_QWORD *)(a1 + 24) )
    {
      v11 = 1;
      goto LABEL_24;
    }
  }
  if ( v8 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = CurrentIrql;
    MiDestroySection(a1, a2);
    return 1LL;
  }
  v11 = 2;
LABEL_24:
  --*(_QWORD *)(a1 + 40);
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v11 == 2 )
    inserted = MiInsertUnusedSegment(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  __writecr8(CurrentIrql);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return 0LL;
}
