/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1400EF678
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     CmpDelayedDerefKeys @ 0x14042A334 (CmpDelayedDerefKeys.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpRunDownCmRM @ 0x1404EEE04 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     ObpDeleteDirectoryObject @ 0x14055476C (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140569A28 (PfpServiceMainThreadBoostPrep.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 * Callees:
 *     <none>
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
}
