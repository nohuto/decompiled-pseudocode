/*
 * XREFs of ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18012FFF0
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180130470 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180131C80 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18010CD4C (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x180130264 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1)
{
  __int64 v1; // rbx
  struct CVisual *VisualEffectiveParent; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v4 = 0LL;
  VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(a1);
  if ( VisualEffectiveParent )
  {
    do
    {
      if ( *Microsoft::WRL::ComPtr<CInteraction>::operator=(&v4, *((_QWORD *)VisualEffectiveParent + 52)) )
        break;
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent);
    }
    while ( VisualEffectiveParent );
    v1 = v4;
  }
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v4);
  return (struct CInteraction *)v1;
}
