/*
 * XREFs of ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180088F28
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800858B4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180048870 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::CTouchDragVisual(CTouchDragVisual *this)
{
  __int64 v1; // rcx

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 280) = 200;
  *(_DWORD *)(v1 + 284) = 1088421888;
  *(_QWORD *)v1 = &CTouchDragVisual::`vftable';
  *(_DWORD *)(v1 + 288) = 939239554;
  *(_DWORD *)(v1 + 292) = 1500;
  *(_DWORD *)(v1 + 296) = 1058642330;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_DWORD *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_DWORD *)(v1 + 360) = 0;
  *(_DWORD *)(v1 + 440) = -1;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_WORD *)(v1 + 424) = 0;
  *(_DWORD *)(v1 + 428) = 0;
  *(_QWORD *)(v1 + 432) = 0LL;
  return (CTouchDragVisual *)v1;
}
