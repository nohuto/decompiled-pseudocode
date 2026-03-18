/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x14012308C
 * Callers:
 *     ExDeleteNPagedLookasideList @ 0x140122FA0 (ExDeleteNPagedLookasideList.c)
 *     ExDeletePagedLookasideList @ 0x140122FE8 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x140123030 (ExDeleteLookasideListEx.c)
 *     ExDrainPoolLookasideList @ 0x140567C44 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(volatile signed __int32 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bp
  PVOID *v5; // rdi
  __int64 v6; // rcx
  PVOID **v7; // rax
  PVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1);
  }
  else if ( _interlockedbittestandset64(a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1);
  }
  v5 = (PVOID *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(PVOID ***)(a2 + 72);
  if ( *(_QWORD *)(v6 + 8) != a2 + 64 || *v7 != v5 )
    __fastfail(3u);
  *v7 = (PVOID *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(a1, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  __writecr8(CurrentIrql);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v5 = MmBadPointer;
  return result;
}
