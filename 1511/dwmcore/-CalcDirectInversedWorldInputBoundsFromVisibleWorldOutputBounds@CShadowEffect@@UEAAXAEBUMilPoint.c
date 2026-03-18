/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CShadowEffect@@UEAAXAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x1801338E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

_OWORD *__fastcall CShadowEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _OWORD *a7)
{
  bool IsEmpty; // al
  _OWORD *v8; // r8
  _OWORD *v9; // r9
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  _OWORD *result; // rax
  float v16[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v16 = *a3;
  IsEmpty = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v16);
  v11 = v16[0];
  v12 = v16[1];
  v13 = v16[2];
  v14 = v16[3];
  if ( !IsEmpty )
  {
    v11 = v16[0] - v10;
    v12 = v16[1] - v10;
    v13 = v16[2] + v10;
    v14 = v16[3] + v10;
  }
  *(_OWORD *)a6 = *v9;
  if ( v11 > *(float *)a6 )
    *(float *)a6 = v11;
  if ( v12 > *(float *)(a6 + 4) )
    *(float *)(a6 + 4) = v12;
  if ( *(float *)(a6 + 8) > v13 )
    *(float *)(a6 + 8) = v13;
  if ( *(float *)(a6 + 12) > v14 )
    *(float *)(a6 + 12) = v14;
  if ( *(float *)(a6 + 8) <= *(float *)a6 || *(float *)(a6 + 12) <= *(float *)(a6 + 4) )
  {
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_QWORD *)a6 = 0LL;
  }
  result = a7;
  *a7 = *v8;
  return result;
}
