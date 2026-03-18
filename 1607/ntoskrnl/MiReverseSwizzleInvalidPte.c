/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x1401F2934
 * Callers:
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BDED4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetPteLink @ 0x1401F2680 (MiGetPteLink.c)
 *     MiGetPteTimeStamp @ 0x1401F269C (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x1401F26B0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2708 (MiIsPrototypePteVadLookup.c)
 *     MiMakeTransitionPteValid @ 0x1401F27C4 (MiMakeTransitionPteValid.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F2A14 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2A38 (MiUpdateTransitionPteFrame.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiDeleteFileOnlyPfns @ 0x14065AAE0 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140326A00 )
  {
    if ( (a1 & 0x10) != 0 )
      return a1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      return ~qword_140326A00 & a1;
  }
  return a1;
}
