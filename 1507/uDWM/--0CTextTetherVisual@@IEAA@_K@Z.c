/*
 * XREFs of ??0CTextTetherVisual@@IEAA@_K@Z @ 0x180082DE8
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x18007D73C (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180047784 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTextTetherVisual *__fastcall CTextTetherVisual::CTextTetherVisual(CTextTetherVisual *this)
{
  __int64 v1; // rcx
  CTextTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 288) = 1051260355;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_BYTE *)(v1 + 292) = 0;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_WORD *)(v1 + 456) = 0;
  result = (CTextTetherVisual *)v1;
  *(_QWORD *)v1 = &CTextTetherVisual::`vftable';
  *(_DWORD *)(v1 + 304) = 100;
  return result;
}
