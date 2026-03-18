/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800362EC
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18003706C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E2968 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1801042EC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 90) & 8) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v6);
    if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v6, a2, a3);
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v6);
  }
}
