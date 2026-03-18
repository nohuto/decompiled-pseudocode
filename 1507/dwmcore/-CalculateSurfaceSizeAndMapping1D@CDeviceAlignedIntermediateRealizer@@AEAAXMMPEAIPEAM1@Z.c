/*
 * XREFs of ?CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z @ 0x18012213C
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801221C4 (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
        CDeviceAlignedIntermediateRealizer *this,
        float a2,
        double a3,
        unsigned int *a4,
        float *a5,
        float *a6)
{
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128 v8; // xmm1
  signed __int32 v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v6 = 0LL;
  v7 = 0LL;
  v7.m128_f32[0] = a2;
  v8.m128_f32[0] = (float)(int)a2;
  v9 = (int)v7.m128_f32[0] + _mm_cmplt_ss(v7, v8).m128_u32[0];
  v6.m128_f32[0] = (float)(int)*(float *)&a3;
  v10 = 1;
  v11 = (int)*(float *)&a3 - _mm_cmplt_ss(v6, *(__m128 *)&a3).m128_u32[0] - v9;
  if ( v11 > 1 )
    v10 = v11;
  *a4 = v10;
  *a5 = 1.0;
  *(_DWORD *)a6 = COERCE_UNSIGNED_INT((float)v9) ^ _xmm;
}
