/*
 * XREFs of ??0CTetherVisual@@IEAA@_K@Z @ 0x1800897B0
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180085704 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180048870 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTetherVisual *__fastcall CTetherVisual::CTetherVisual(CTetherVisual *this)
{
  CTetherVisual *v1; // rcx
  CTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this);
  *((_QWORD *)v1 + 49) = 1034147594LL;
  *((_QWORD *)v1 + 41) = 0LL;
  *((_QWORD *)v1 + 44) = 0LL;
  *((_QWORD *)v1 + 45) = 0LL;
  *((_QWORD *)v1 + 46) = 0LL;
  *((_QWORD *)v1 + 47) = 0LL;
  *((_QWORD *)v1 + 48) = 0LL;
  result = v1;
  *(_QWORD *)v1 = &CTetherVisual::`vftable';
  return result;
}
