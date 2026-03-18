/*
 * XREFs of ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x18010E520
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18016ACE8 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
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
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v10);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v10);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x162u);
  }
  else
  {
    v8 = CManipulationManager::NotifyCapturePointer(v6, (struct CInteraction *)this, *((_DWORD *)a3 + 2));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x164u);
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v10);
  return v7;
}
