/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x1400E93A0
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400E9298 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1400E92C4 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1400E9330 (ExDeleteLookasideListEx.c)
 *     ExDrainPoolLookasideList @ 0x1404F3964 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
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
