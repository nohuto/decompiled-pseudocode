/*
 * XREFs of ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180008D34
 * Callers:
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1800079B8 (--1CManipulationContext@@UEAA@XZ.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x180008908 (-RemoveRange@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIn.c)
 *     ?RemoveAll@?$CMap@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18014B088 (-RemoveAll@-$CMap@PEAVCManipulation@@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180172414 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(__int64 a1)
{
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(a1);
  return a1;
}
