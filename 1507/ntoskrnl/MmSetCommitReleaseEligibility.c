/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1402107D4
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // edi
  unsigned int v8; // edi
  signed __int32 v9; // eax
  _BYTE v11[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v5 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    while ( 1 )
    {
      v9 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    if ( a2 )
      *(_BYTE *)(a1 + 1491) = *(_BYTE *)(a1 + 1491) & 0x3F | 0x40;
    else
      *(_BYTE *)(a1 + 1491) &= 0x3Fu;
    v7 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1272, CurrentIrql);
  if ( v2 )
    KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  return v7;
}
