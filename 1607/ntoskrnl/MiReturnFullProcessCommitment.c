/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1404A8A18
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
 *     MiReturnPageTablePageCommitment @ 0x1404330E0 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  int *ProcessPartition; // rax
  unsigned __int64 v5; // rdx

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit((__int64)ProcessPartition, v5);
  return MiReturnFullProcessCharges(a1, a2);
}
