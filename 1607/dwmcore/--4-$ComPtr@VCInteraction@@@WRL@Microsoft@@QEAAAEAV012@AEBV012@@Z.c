/*
 * XREFs of ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0
 * Callers:
 *     ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180007E80 (-SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z.c)
 *     ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180007EA0 (-SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x1800A6A60 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A6B00 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A73BC (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteraction>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v5);
  }
  return a1;
}
