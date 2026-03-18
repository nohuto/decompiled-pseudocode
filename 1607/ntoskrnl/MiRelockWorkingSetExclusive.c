/*
 * XREFs of MiRelockWorkingSetExclusive @ 0x1401F2AEC
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140016210 (MiTrimWorkingSet.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140133238 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E0860 (MiReleaseCommitForResetPageCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2A6C (MiPreUnlockWorkingSetExclusive.c)
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
