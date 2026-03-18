/*
 * XREFs of ??0TargetingInfo@@QEAA@AEBU0@@Z @ 0x180008808
 * Callers:
 *     ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180007EC0 (-GetCurrentTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x180008018 (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 *     ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180170EA0 (-GetCurrentFallbackTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
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
