/*
 * XREFs of MiReturnFullProcessCommitment @ 0x14041AE3C
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 *     MiReturnPageTablePageCommitment @ 0x1404B7F80 (MiReturnPageTablePageCommitment.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int16 *ProcessPartition; // rax
  __int64 v5; // rdx

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit((__int64)ProcessPartition, v5);
  return MiReturnFullProcessCharges(a1, a2);
}
