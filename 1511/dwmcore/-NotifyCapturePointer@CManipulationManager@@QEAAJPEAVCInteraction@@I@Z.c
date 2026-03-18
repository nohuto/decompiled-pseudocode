/*
 * XREFs of ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18013FA00
 * Callers:
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1800F9340 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18013F708 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18013F7F0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     Template_ppq @ 0x180140128 (Template_ppq.c)
 */

__int64 __fastcall CManipulationManager::NotifyCapturePointer(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3)
{
  unsigned int Visual; // eax
  int v6; // edx
  int v7; // ecx
  char v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Visual = (unsigned int)CInteraction::GetVisual(a2);
    Template_ppq(v7, v6, v7, Visual, v8);
  }
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(_DWORD *)v10 = 5;
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)(v10 + 8));
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)(v10 + 16), (__int64)a2);
    *(_DWORD *)(v10 + 24) = a3;
    v14 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v13, v12, v10);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x12Bu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x124u);
  }
  return v11;
}
