/*
 * XREFs of ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x180081E18
 * Callers:
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180081EF0 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180148460 (-DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSt.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DC4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CSwRenderTargetGetBounds::AddBounds(__int64 a1, float *a2)
{
  char result; // al
  float *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  __m128i v11; // [rsp+20h] [rbp-20h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a2);
  if ( result )
  {
    if ( !*(_DWORD *)v4 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 4));
      v7 = *v3;
      v11 = v6;
      v11.m128i_i32[0] = v6.m128i_i32[0];
      if ( v7 > *(float *)v6.m128i_i32 )
      {
        *(float *)v6.m128i_i32 = v7;
        *(float *)v11.m128i_i32 = v7;
      }
      v8 = *(float *)&v11.m128i_i32[1];
      if ( v3[1] > *(float *)&v11.m128i_i32[1] )
      {
        v8 = v3[1];
        *(float *)&v11.m128i_i32[1] = v8;
      }
      v9 = *(float *)&v11.m128i_i32[2];
      if ( *(float *)&v11.m128i_i32[2] > v3[2] )
      {
        v9 = v3[2];
        *(float *)&v11.m128i_i32[2] = v9;
      }
      v10 = *(float *)&v11.m128i_i32[3];
      if ( *(float *)&v11.m128i_i32[3] > v3[3] )
      {
        v10 = v3[3];
        *(float *)&v11.m128i_i32[3] = v10;
      }
      if ( v9 <= *(float *)v6.m128i_i32 || v10 <= v8 )
        v11 = 0uLL;
      v3 = (float *)&v11;
    }
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(v5 + 52), v3);
  }
  return result;
}
