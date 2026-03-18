/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14001B460
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     CmpDelayedDerefKeys @ 0x1403F50DC (CmpDelayedDerefKeys.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     CmpFreePostBlock @ 0x14049A918 (CmpFreePostBlock.c)
 *     CmpRunDownCmRM @ 0x14049B138 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     ObpDeleteDirectoryObject @ 0x1404BBC5C (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1404F555C (PfpServiceMainThreadBoostPrep.c)
 * Callees:
 *     <none>
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
}
