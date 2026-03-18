/*
 * XREFs of ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180031940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x180024E6C (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetBrushRealizationInternal(
        CSolidColorLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int Opacity; // eax
  struct CMILBrush *v6; // rdi
  unsigned int v7; // esi
  void (*v8)(void); // rax
  __m128 v10; // [rsp+30h] [rbp-18h]
  float v11; // [rsp+50h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(*((double *)this + 16), *((_QWORD *)this + 17), &v11);
  v6 = 0LL;
  v7 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0x33u);
  }
  else
  {
    v10 = (__m128)_mm_loadu_si128((const __m128i *)this + 10);
    v8 = *(void (**)(void))(*((_QWORD *)this + 25) + 48LL);
    v10.m128_f32[3] = _mm_shuffle_ps(v10, v10, 255).m128_f32[0] * v11;
    *((__m128 *)this + 15) = v10;
    v8();
    if ( this != (CSolidColorLegacyMilBrush *)-176LL )
      v6 = (CSolidColorLegacyMilBrush *)((char *)this + 200);
    *a3 = v6;
  }
  return v7;
}
