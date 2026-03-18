/*
 * XREFs of ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1800F9340
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18013FA00 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 */

__int64 __fastcall CInteraction::ProcessCapturePointer(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_CAPTUREPOINTER *a3)
{
  int ManipulationManager; // eax
  CManipulationManager *v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  struct CManipulationManager *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v10);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v10);
  v7 = ManipulationManager;
  if ( ManipulationManager >= 0 )
  {
    v8 = CManipulationManager::NotifyCapturePointer(v6, (struct CInteraction *)this, *((_DWORD *)a3 + 2));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x115u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x113u);
  }
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v10);
  return v7;
}
