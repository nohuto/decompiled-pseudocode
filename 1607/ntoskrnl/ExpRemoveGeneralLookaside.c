/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x1400A6DAC
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400A6CD8 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1400A6D40 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x140149EC4 (ExDeleteNPagedLookasideList.c)
 *     ExDrainPoolLookasideList @ 0x140532278 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  KIRQL v4; // al
  PVOID *v5; // rbx
  __int64 v6; // r9
  PVOID **v7; // r8
  PVOID result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = (PVOID *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(PVOID ***)(a2 + 72);
  if ( *(_QWORD *)(v6 + 8) != a2 + 64 || *v7 != v5 )
    __fastfail(3u);
  *v7 = (PVOID *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock(SpinLock, v4);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v5 = MmBadPointer;
  return result;
}
