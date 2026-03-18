/*
 * XREFs of ??0TargetingInfo@@QEAA@AEBU0@@Z @ 0x180003634
 * Callers:
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x180005050 (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 *     ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180005440 (-GetCurrentTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180143780 (-GetCurrentFallbackTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::TargetingInfo(TargetingInfo *this, const struct TargetingInfo *a2)
{
  _QWORD *v3; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (_QWORD *)((char *)this + 8);
  *v3 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
