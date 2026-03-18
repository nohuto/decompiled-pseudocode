/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 74) & 2) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v6);
    if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate((__int64)v6, a2, a3);
    Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v6);
  }
}
