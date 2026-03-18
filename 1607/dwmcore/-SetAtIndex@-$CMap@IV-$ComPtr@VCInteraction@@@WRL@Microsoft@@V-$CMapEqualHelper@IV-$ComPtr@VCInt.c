/*
 * XREFs of ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180172414
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180171BA0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180008148 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180008D34 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*(_QWORD *)(a1 + 8) + 8LL * a2);
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
    (_QWORD *)a1,
    a2,
    a3,
    a4);
  return 1LL;
}
