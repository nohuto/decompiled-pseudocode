/*
 * XREFs of MiPopulateWorkingSetFreeList @ 0x14002B510
 * Callers:
 *     MiInitializeWorkingSetList @ 0x1404683F8 (MiInitializeWorkingSetList.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPopulateWorkingSetFreeList(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // esi
  signed __int32 v8; // eax
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // r9
  _QWORD *v11; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
    while ( 1 )
    {
      v8 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  for ( **(_QWORD **)(a1 + 184) = 0xFFFFFFFFFLL; a3 >= a2; --a3 )
  {
    v9 = *(_QWORD *)(a1 + 184);
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 != 0xFFFFFFFFFLL )
    {
      if ( v10 < *(_QWORD *)(v9 + 8) || v10 > *(_QWORD *)(v9 + 32) )
        KeBugCheckEx(0x1Au, 0x5004uLL, v9, v10, *(_QWORD *)(v9 + 32));
      v11 = (_QWORD *)(*(_QWORD *)(v9 + 496) + v10 * *(unsigned int *)(v9 + 64));
      *v11 ^= (*(_DWORD *)v11 ^ (2 * (_DWORD)a3)) & 0xFFFFFFE;
    }
    *(_QWORD *)(a3 * *(unsigned int *)(v9 + 64) + *(_QWORD *)(v9 + 496)) = (v10 << 28) | 0xFFFFFFE;
    *(_QWORD *)v9 = a3;
  }
  return MiUnlockWorkingSetExclusive(a1, CurrentIrql);
}
