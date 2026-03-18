/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180029590 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18002D008 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18002D088 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B91C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18004FC24 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5)
{
  __int64 v6; // rcx
  int v7; // r15d
  __int64 i; // rcx
  unsigned int v10; // edi
  unsigned __int32 v11; // r14d
  unsigned __int32 v12; // edi
  __int64 *v13; // rbx
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  int v18; // eax
  unsigned int v20; // r8d
  __m128i *v21; // r14
  __m128i *v23; // [rsp+38h] [rbp-28h] BYREF
  float v24; // [rsp+40h] [rbp-20h]
  float v25; // [rsp+44h] [rbp-1Ch]
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a1 + 272);
  v7 = 0;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
  {
    for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xF000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v23 = *(__m128i **)(i + 4);
    if ( v23 )
    {
      if ( v23[4].m128i_i32[2] )
      {
        v10 = 0;
        CMergedRectBase<4>::Optimize(v23, 1);
        if ( (unsigned int)(v23[4].m128i_i32[2] - 2) <= 1 )
        {
          v20 = 0;
          v21 = v23 + 4;
          do
          {
            if ( v21->m128i_i8[0] )
            {
              if ( v20 != v10 )
                CMergedRectBase<4>::SwapExisting((__int64)v23, v10, v20);
              ++v10;
            }
            ++v20;
            v21 = (__m128i *)((char *)v21 + 1);
          }
          while ( v20 < 4 );
        }
        v11 = v23[4].m128i_u32[2];
        v12 = 0;
        if ( v11 )
        {
          v13 = &v23->m128i_i64[1];
          while ( 1 )
          {
            v26 = *(_OWORD *)(v13 - 1);
            CMILMatrix::Transform2DBoundsHelper<1>(a3, &v26, &v23);
            CVisual::AdjustWorldBounds(a1, (float *)&v23);
            v14 = v24;
            v15 = *(float *)&v23;
            if ( v24 > *(float *)&v23 )
            {
              v16 = v25;
              v17 = *((float *)&v23 + 1);
              if ( v25 > *((float *)&v23 + 1) )
              {
                if ( a5 )
                {
                  if ( *a5 > *(float *)&v23 )
                  {
                    v15 = *a5;
                    *(float *)&v23 = *a5;
                  }
                  if ( a5[1] > *((float *)&v23 + 1) )
                  {
                    v17 = a5[1];
                    *((float *)&v23 + 1) = v17;
                  }
                  if ( v24 > a5[2] )
                  {
                    v14 = a5[2];
                    v24 = v14;
                  }
                  if ( v25 > a5[3] )
                  {
                    v16 = a5[3];
                    v25 = v16;
                  }
                  if ( v14 <= v15 || v16 <= v17 )
                  {
                    v16 = 0.0;
                    v14 = 0.0;
                    v17 = 0.0;
                    v25 = 0.0;
                    v15 = 0.0;
                    v24 = 0.0;
                    v23 = 0LL;
                  }
                }
                if ( v14 > v15 && v16 > v17 )
                {
                  v7 = 0;
                  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v23) )
                    CDirtyRegion::SetFullDirty((CDirtyRegion *)a2);
                  if ( !*(_BYTE *)(a2 + 2724) && !*(_DWORD *)(a2 + 2704) )
                  {
                    v18 = CDirtyRegion::_Add((CDirtyRegion *)a2);
                    v7 = v18;
                    if ( v18 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1C3u);
                    if ( v7 < 0 )
                      break;
                  }
                }
              }
            }
            ++v12;
            v13 += 2;
            if ( v12 >= v11 )
              goto LABEL_32;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBB7u);
        }
        else
        {
LABEL_32:
          *(_QWORD *)(a1 + 280) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 352LL);
        }
        *(_BYTE *)(a1 + 153) |= 0x80u;
      }
    }
  }
  return (unsigned int)v7;
}
