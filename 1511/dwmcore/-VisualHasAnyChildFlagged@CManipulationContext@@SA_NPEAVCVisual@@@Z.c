/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180002238
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1800021C8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BA740 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  char *v1; // r11
  unsigned int i; // r10d
  unsigned __int64 Count; // rax
  char v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // r10d

  v1 = (char *)a1 + 56;
  for ( i = 0; ; i = v7 + 1 )
  {
    Count = CPtrArray<CVisual>::GetCount(v1, i);
    if ( v5 >= Count )
      break;
    v6 = CPtrArrayBase::operator[]();
    if ( v6 && (*(_BYTE *)(v6 + 74) & 2) != 0 )
      return 1;
  }
  return v4;
}
