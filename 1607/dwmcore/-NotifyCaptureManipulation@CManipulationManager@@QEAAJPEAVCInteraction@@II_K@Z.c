/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18016ABB4
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x18010E480 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18016A9A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18016AAB0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     Template_ppqqx @ 0x18016B790 (Template_ppqqx.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned int Visual; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  void *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Visual = (unsigned int)CInteraction::GetVisual(a2);
    Template_ppqqx(v10, v9, v11, Visual, a3, a4, a5);
  }
  v12 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  40LL);
  v13 = (__int64)v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x28uLL);
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    *(_DWORD *)v13 = 6;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)(v13 + 8));
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)(v13 + 16), (__int64)a2);
    *(_DWORD *)(v13 + 24) = a3;
    *(_DWORD *)(v13 + 28) = a4;
    *(_QWORD *)(v13 + 32) = a5;
    v17 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x171u);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v13);
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x168u);
  }
  return v14;
}
