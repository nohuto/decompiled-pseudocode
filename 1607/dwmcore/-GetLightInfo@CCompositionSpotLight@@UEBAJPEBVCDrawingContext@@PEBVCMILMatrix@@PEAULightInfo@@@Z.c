/*
 * XREFs of ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     cosf_0 @ 0x1800BF5EA (cosf_0.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180150374 (-TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@.c)
 */

__int64 __fastcall CCompositionSpotLight::GetLightInfo(
        CCompositionSpotLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  CCompositionLight *v8; // rcx
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm1_4

  *(_DWORD *)a4 = 3;
  *(_OWORD *)((char *)a4 + 4) = *(_OWORD *)((char *)this + 232);
  *(_OWORD *)((char *)a4 + 20) = *(_OWORD *)((char *)this + 248);
  v6 = CCompositionLight::CalcLocalToDeviceMatrix(
         this,
         a2,
         a3,
         *((struct CVisual **)this + 24),
         (struct LightInfo *)((char *)a4 + 80));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Fu);
  }
  else
  {
    *(_QWORD *)((char *)a4 + 36) = *((_QWORD *)this + 25);
    *((_DWORD *)a4 + 11) = *((_DWORD *)this + 52);
    *((_QWORD *)a4 + 6) = *(_QWORD *)((char *)this + 212);
    v8 = (CCompositionLight *)*((unsigned int *)this + 55);
    *((_DWORD *)a4 + 14) = (_DWORD)v8;
    CCompositionLight::TransformAttenuation(
      v8,
      (CCompositionSpotLight *)((char *)this + 176),
      (struct LightInfo *)((char *)a4 + 60));
    v9 = *((float *)this + 56);
    v10 = 0.0;
    if ( v9 >= 0.0 )
      v11 = fminf(1.5707964, v9);
    else
      v11 = 0.0;
    *((float *)a4 + 18) = cosf_0(v11);
    v12 = *((float *)this + 57);
    if ( v12 >= 0.0 )
      v10 = fminf(1.5707964, v12);
    *((float *)a4 + 19) = cosf_0(v10);
  }
  return v7;
}
