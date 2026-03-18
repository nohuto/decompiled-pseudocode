/*
 * XREFs of ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x180130264
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x18012FA78 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x18012FDBC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18012FFF0 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180130620 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParent(const struct CVisual *a1)
{
  struct CVisual *result; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  char v4; // dl
  bool v5; // zf
  char v6; // r8
  __int64 v7; // rcx

  result = (struct CVisual *)*((_QWORD *)a1 + 10);
  v2 = *((_QWORD *)a1 + 52);
  if ( result )
    v3 = *((_QWORD *)result + 52);
  else
    v3 = 0LL;
  v4 = 1;
  if ( !v2 || (v5 = (*(_BYTE *)(v2 + 156) & 2) == 0, v6 = 1, v5) )
    v6 = 0;
  if ( !v3 || (*(_BYTE *)(v3 + 156) & 2) == 0 )
    v4 = 0;
  if ( v6 )
    result = 0LL;
  if ( v4 )
  {
    do
    {
      if ( !result )
        break;
      result = (struct CVisual *)*((_QWORD *)result + 10);
      v7 = result ? *((_QWORD *)result + 52) : 0LL;
    }
    while ( v7 && (*(_BYTE *)(v7 + 156) & 2) != 0 );
  }
  return result;
}
