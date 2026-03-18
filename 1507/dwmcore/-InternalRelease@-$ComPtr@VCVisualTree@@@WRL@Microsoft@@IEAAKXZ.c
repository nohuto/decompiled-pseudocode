/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2F4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x18012FDBC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(CMILRefCountBase **a1)
{
  CMILRefCountBase *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBase::Release(v1);
  }
  return result;
}
