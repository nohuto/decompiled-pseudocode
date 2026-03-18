/*
 * XREFs of ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180058A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z @ 0x18005D948 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetBrushRealizationInternal(
        CSolidColorLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int Opacity; // eax
  struct CMILBrush *v6; // rbp
  unsigned int v7; // r14d
  void (__fastcall *v8)(char *); // rbx
  __m128i v10; // [rsp+30h] [rbp-28h]
  float v11; // [rsp+60h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(this, *((_QWORD *)this + 8), &v11);
  v6 = 0LL;
  v7 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0x33u);
  }
  else
  {
    v10 = _mm_loadu_si128((const __m128i *)((char *)this + 88));
    v8 = *(void (__fastcall **)(char *))(*((_QWORD *)this + 16) + 48LL);
    *(float *)&v10.m128i_i32[3] = *((float *)this + 25) * v11;
    *(__m128i *)((char *)this + 168) = v10;
    v8((char *)this + 128);
    if ( this != (CSolidColorLegacyMilBrush *)-104LL )
      v6 = (CSolidColorLegacyMilBrush *)((char *)this + 128);
    *a3 = v6;
  }
  return v7;
}
