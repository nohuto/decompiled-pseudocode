/*
 * XREFs of ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180003660
 * Callers:
 *     ?RemoveAll@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXXZ @ 0x180005088 (-RemoveAll@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x180005120 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1800051D4 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::`scalar deleting destructor'(TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 8);
  return this;
}
