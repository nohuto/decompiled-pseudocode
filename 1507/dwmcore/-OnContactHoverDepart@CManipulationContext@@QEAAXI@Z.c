/*
 * XREFs of ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801307A8
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012AFD4 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012B110 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180130E10 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactHoverDepart(CManipulationContext *this, unsigned int a2)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 56,
    &v4);
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
}
