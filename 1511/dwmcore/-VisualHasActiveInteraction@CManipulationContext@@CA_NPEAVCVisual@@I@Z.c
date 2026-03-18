/*
 * XREFs of ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18000227C
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1800021C8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 * Callees:
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 */

char __fastcall CManipulationContext::VisualHasActiveInteraction(struct CVisual *a1)
{
  CInteraction *v1; // rcx
  char v2; // r8
  unsigned int TotalNumContacts; // eax
  unsigned int v5; // r9d

  v1 = (CInteraction *)*((_QWORD *)a1 + 50);
  v2 = 0;
  if ( v1 )
  {
    TotalNumContacts = CInteraction::GetTotalNumContacts(v1);
    if ( TotalNumContacts > v5 )
      return 1;
  }
  return v2;
}
