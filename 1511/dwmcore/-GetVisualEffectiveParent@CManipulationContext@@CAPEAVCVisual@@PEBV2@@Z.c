/*
 * XREFs of ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x1800020C4
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180001A7C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18000205C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801439FC (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParent(const struct CVisual *a1)
{
  struct CVisual *result; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  char v4; // dl
  char v5; // r8
  bool v6; // zf
  __int64 v7; // rcx

  result = (struct CVisual *)*((_QWORD *)a1 + 8);
  v2 = *((_QWORD *)a1 + 50);
  if ( result )
    v3 = *((_QWORD *)result + 50);
  else
    v3 = 0LL;
  v4 = 1;
  if ( !v2 || (v6 = (*(_BYTE *)(v2 + 156) & 2) == 0, v5 = 1, v6) )
    v5 = 0;
  if ( !v3 || (*(_BYTE *)(v3 + 156) & 2) == 0 )
    v4 = 0;
  if ( v5 )
    result = 0LL;
  if ( v4 )
  {
    do
    {
      if ( !result )
        break;
      result = (struct CVisual *)*((_QWORD *)result + 8);
      v7 = result ? *((_QWORD *)result + 50) : 0LL;
    }
    while ( v7 && (*(_BYTE *)(v7 + 156) & 2) != 0 );
  }
  return result;
}
