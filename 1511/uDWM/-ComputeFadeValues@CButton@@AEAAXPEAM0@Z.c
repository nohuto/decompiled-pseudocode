/*
 * XREFs of ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180010724
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180010788 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001ED00 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::ComputeFadeValues(CButton *this, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm3_4

  v3 = *((float *)this + 106);
  v4 = *(double *)(*((_QWORD *)this + 52) + 48LL);
  v5 = (float)((float)(v3 - *((float *)this + 101)) * (float)(v4 * 2.0)) + *((float *)this + 101);
  *a3 = (float)(v3 - v4) * *((float *)this + 102);
  *a2 = v5;
  if ( v5 > v3 )
    *a2 = v3;
}
