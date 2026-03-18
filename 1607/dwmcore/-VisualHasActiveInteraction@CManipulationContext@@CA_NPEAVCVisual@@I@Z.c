/*
 * XREFs of ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180008E18
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180008D54 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 * Callees:
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

char __fastcall CManipulationContext::VisualHasActiveInteraction(struct CVisual *a1, unsigned int a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v4; // r11
  char v5; // r10
  CInteraction *v7; // rax

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = 0;
  if ( InteractionInternal )
  {
    v7 = CVisual::GetInteractionInternal(v4);
    if ( CInteraction::GetTotalNumContacts(v7) > a2 )
      return 1;
  }
  return v5;
}
