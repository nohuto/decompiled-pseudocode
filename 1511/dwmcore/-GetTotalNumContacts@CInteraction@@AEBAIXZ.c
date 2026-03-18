/*
 * XREFs of ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC
 * Callers:
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180001438 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180001A7C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18000227C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180143608 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18014384C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180144354 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetTotalNumContacts(CInteraction *this)
{
  __int64 result; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rdx

  LODWORD(result) = 0;
  v2 = (_DWORD *)((char *)this + 200);
  v3 = 5LL;
  do
  {
    result = (unsigned int)(*v2++ + result);
    --v3;
  }
  while ( v3 );
  return result;
}
