/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x180047784
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046DA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18007CF4C (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCContactStation.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z @ 0x18007D07C (--$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007D198 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisua.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18007D2C8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x18007D3EC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenPressHoldVisual@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007D524 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18007D924 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVis.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x180082DE8 (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180085544 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800863D0 (--0CTetherVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 */

CTouchVisual *__fastcall CTouchVisual::CTouchVisual(CTouchVisual *this)
{
  __int64 v1; // rcx
  CTouchVisual *result; // rax
  __int64 v3; // rdx

  CVisual::CVisual(this);
  *(_BYTE *)(v1 + 264) = 0;
  *(_QWORD *)v1 = &CTouchVisual::`vftable';
  result = (CTouchVisual *)v1;
  *(_QWORD *)(v1 + 272) = v3;
  return result;
}
