/*
 * XREFs of ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079DFC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::ClipAgainstMargins(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 result; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  __m128 v10; // [rsp+0h] [rbp-20h]
  __m128i v11; // [rsp+0h] [rbp-20h]
  __m128 v12; // [rsp+0h] [rbp-20h]
  __m128 v13; // [rsp+0h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 1128);
  if ( v2 > 0 )
  {
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 156));
    v7 = *(float *)v11.m128i_i32 + (float)v2;
    if ( v7 > *(float *)a2 )
      *(float *)a2 = v7;
    if ( *(float *)&v11.m128i_i32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v11.m128i_i32[1];
    if ( *(float *)(a2 + 8) > *(float *)&v11.m128i_i32[2] )
      *(_DWORD *)(a2 + 8) = v11.m128i_i32[2];
    if ( *(float *)(a2 + 12) > *(float *)&v11.m128i_i32[3] )
      *(_DWORD *)(a2 + 12) = v11.m128i_i32[3];
    if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 > 0 )
  {
    v12 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 156));
    v8 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - (float)v3;
    if ( v12.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v12.m128_i32[0];
    if ( v12.m128_f32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v12.m128_i32[1];
    if ( *(float *)(a2 + 8) > v8 )
      *(float *)(a2 + 8) = v8;
    if ( *(float *)(a2 + 12) > v12.m128_f32[3] )
      *(_DWORD *)(a2 + 12) = v12.m128_i32[3];
    if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  v4 = *(_DWORD *)(a1 + 1136);
  if ( v4 > 0 )
  {
    v10 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 156));
    v6 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] + (float)v4;
    if ( v10.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v10.m128_i32[0];
    if ( v6 > *(float *)(a2 + 4) )
      *(float *)(a2 + 4) = v6;
    if ( *(float *)(a2 + 8) > v10.m128_f32[2] )
      *(_DWORD *)(a2 + 8) = v10.m128_i32[2];
    if ( *(float *)(a2 + 12) > v10.m128_f32[3] )
      *(_DWORD *)(a2 + 12) = v10.m128_i32[3];
    if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  result = *(unsigned int *)(a1 + 1140);
  if ( (int)result > 0 )
  {
    v13 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 156));
    v9 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0] - (float)(int)result;
    if ( v13.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v13.m128_i32[0];
    if ( v13.m128_f32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v13.m128_i32[1];
    if ( *(float *)(a2 + 8) > v13.m128_f32[2] )
      *(_DWORD *)(a2 + 8) = v13.m128_i32[2];
    if ( *(float *)(a2 + 12) > v9 )
      *(float *)(a2 + 12) = v9;
    if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  return result;
}
