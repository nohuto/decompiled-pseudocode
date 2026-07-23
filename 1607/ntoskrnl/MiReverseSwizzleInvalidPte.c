/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x1401F2760
 * Callers:
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiDeleteFileOnlyPfns @ 0x14065ABC4 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140326A40 )
  {
    if ( (a1 & 0x10) != 0 )
      return a1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      return ~qword_140326A40 & a1;
  }
  return a1;
}
