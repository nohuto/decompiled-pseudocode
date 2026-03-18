/*
 * XREFs of ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18013F708
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18013FA00 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CManipulationManager::InteractionUpdate *__fastcall CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        CManipulationManager::InteractionUpdate *this)
{
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)this + 1);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulationManager::InteractionUpdate *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
