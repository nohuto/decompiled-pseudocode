/*
 * XREFs of ??0CCompositionLight@@QEAA@PEAVCComposition@@@Z @ 0x18014FF70
 * Callers:
 *     ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x1801503E0 (--0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180150564 (--0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x180150950 (--0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180150E34 (--0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionLight *__fastcall CCompositionLight::CCompositionLight(CCompositionLight *this, struct CComposition *a2)
{
  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *(_QWORD *)this = &CCompositionLight::`vftable';
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 17) = (char *)this + 168;
  *((_QWORD *)this + 18) = (char *)this + 168;
  *((_DWORD *)this + 38) = 1;
  *((_DWORD *)this + 39) = 1;
  return this;
}
