/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180008DCC
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180008D54 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BD3C8 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
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

  v1 = (char *)a1 + 136;
  for ( i = 0; ; i = v7 + 1 )
  {
    Count = CPtrArray<CVisual>::GetCount(v1, i);
    if ( v5 >= Count )
      break;
    v6 = CPtrArrayBase::operator[]();
    if ( v6 && (*(_BYTE *)(v6 + 154) & 2) != 0 )
      return 1;
  }
  return v4;
}
