/*
 * XREFs of MiRelockWorkingSetExclusive @ 0x1401F2918
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1401337A8 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 */

KIRQL __fastcall MiRelockWorkingSetExclusive(ULONG_PTR a1, char a2)
{
  LONG *SharedVm; // rax
  int v5; // esi
  LONG *v6; // rbx
  KIRQL result; // al
  int v8; // [rsp+40h] [rbp+18h] BYREF

  MiPreUnlockWorkingSetExclusive(a1, a2);
  SharedVm = MiGetSharedVm(a1);
  v5 = 0;
  v6 = SharedVm;
  if ( (*SharedVm & 0x40000000) != 0 )
  {
    SharedVm[1] = 1;
    ExReleaseSpinLockExclusive(SharedVm, a2);
    v8 = 0;
    while ( v6[1] )
    {
      KeYieldProcessorEx(&v8);
      if ( (v8 & 0x3F) == 0 )
      {
        v5 = 1;
        break;
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusive(SharedVm, a2);
  }
  result = ExAcquireSpinLockExclusive(v6);
  if ( !v5 )
    v6[1] = 0;
  return result;
}
