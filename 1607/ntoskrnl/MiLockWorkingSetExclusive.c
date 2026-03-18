/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14002EA00
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiDeleteProcessShadow @ 0x1401EF1E4 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  __int64 SharedVm; // rbx
  KIRQL result; // al

  SharedVm = MiGetSharedVm(a1);
  result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  return result;
}
