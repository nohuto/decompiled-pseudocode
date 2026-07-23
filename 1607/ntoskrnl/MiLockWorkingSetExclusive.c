/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14002E580
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
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
