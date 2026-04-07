/*
 * XREFs of ??0CTextTetherVisual@@IEAA@_K@Z @ 0x180088744
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x1800857DC (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180048870 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTextTetherVisual *__fastcall CTextTetherVisual::CTextTetherVisual(CTextTetherVisual *this)
{
  __int64 v1; // rcx
  CTextTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 288) = 1051260355;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_WORD *)(v1 + 408) = 0;
  result = (CTextTetherVisual *)v1;
  *(_QWORD *)v1 = &CTextTetherVisual::`vftable';
  *(_DWORD *)(v1 + 300) = 100;
  return result;
}
