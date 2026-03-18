/*
 * XREFs of ?GetBrushRealizationInternal@CSolidColorBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180083D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOpacity@CBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z @ 0x180056648 (-GetOpacity@CBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSolidColorBrush::GetBrushRealizationInternal(
        CSolidColorBrush *this,
        const struct BrushContext *a2,
        struct CMILBrush **a3)
{
  int Opacity; // eax
  struct CMILBrush *v6; // rbp
  unsigned int v7; // r14d
  void (__fastcall *v8)(char *); // rbx
  __m128i v10; // [rsp+30h] [rbp-28h]
  float v11; // [rsp+60h] [rbp+8h] BYREF

  Opacity = CBrush::GetOpacity(*((double *)this + 7), *((_QWORD *)this + 8), &v11);
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
    if ( this != (CSolidColorBrush *)-104LL )
      v6 = (CSolidColorBrush *)((char *)this + 128);
    *a3 = v6;
  }
  return v7;
}
