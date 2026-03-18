/*
 * XREFs of ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x180171150
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180008E5C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 */

bool __fastcall CManipulationContext::IsDefaultForBuildingChain(struct CInteraction *a1)
{
  bool v1; // zf
  __int64 v2; // r8
  unsigned __int8 v3; // al
  char v4; // al

  v1 = (unsigned int)CInteraction::GetTotalNumContacts(a1) == 0;
  v3 = *(_BYTE *)(v2 + 256);
  if ( v1 )
    v4 = v3 >> 1;
  else
    v4 = v3 >> 2;
  return v4 & 1;
}
