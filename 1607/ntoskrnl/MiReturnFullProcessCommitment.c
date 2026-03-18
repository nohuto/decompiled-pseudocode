/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1404BCCE8
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2F58 (MiSplitReducedCommitClonePage.c)
 *     MiReturnPageTablePageCommitment @ 0x140434210 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x140662878 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  int *ProcessPartition; // rax
  unsigned __int64 v5; // rdx

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit((__int64)ProcessPartition, v5);
  return MiReturnFullProcessCharges(a1, a2);
}
