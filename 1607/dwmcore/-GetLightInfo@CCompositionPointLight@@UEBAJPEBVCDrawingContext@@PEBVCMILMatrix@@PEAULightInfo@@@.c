/*
 * XREFs of ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180150374 (-TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@.c)
 */

__int64 __fastcall CCompositionPointLight::GetLightInfo(
        CCompositionPointLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  CCompositionLight *v8; // rcx

  *(_DWORD *)a4 = 2;
  *(_OWORD *)((char *)a4 + 4) = *(_OWORD *)((char *)this + 188);
  v6 = CCompositionLight::CalcLocalToDeviceMatrix(
         this,
         a2,
         a3,
         *((struct CVisual **)this + 26),
         (struct LightInfo *)((char *)a4 + 80));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Eu);
  }
  else
  {
    *(_QWORD *)((char *)a4 + 36) = *((_QWORD *)this + 27);
    v8 = (CCompositionLight *)*((unsigned int *)this + 56);
    *((_DWORD *)a4 + 11) = (_DWORD)v8;
    CCompositionLight::TransformAttenuation(
      v8,
      (CCompositionPointLight *)((char *)this + 176),
      (struct LightInfo *)((char *)a4 + 60));
  }
  return v7;
}
