/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x14008A920
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebp
  signed __int32 v5; // eax
  __int64 result; // rax
  unsigned __int8 v7; // bp
  unsigned int v8; // esi
  signed __int32 v9; // eax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+32h] [rbp-26h]
  int v14; // [rsp+34h] [rbp-24h]
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v1);
    while ( 1 )
    {
      v5 = *v1;
      if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v1, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = v7 )
  {
    v11 = 2;
    v15[1] = v15;
    v15[0] = v15;
    v10 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v10;
    v12 = 263;
    v13 = 6;
    v14 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1, retaddr);
    else
      *v1 = 0;
    __writecr8(CurrentIrql);
    KeWaitForGate(&v12, 18LL);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset(v1, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire(v1);
      while ( 1 )
      {
        v9 = *v1;
        if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v1, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1, retaddr);
  else
    *v1 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
