/*
 * XREFs of ?Optimize@CMergedRect@@IEAAX_N@Z @ 0x1800511FC
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368 (-GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438 (-Add@CMergedRect@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CMergedRect::Optimize(__m128i *this, char a2)
{
  __m128i *v2; // r10
  int v3; // r11d
  __m128i *i; // rax
  __int8 v5; // dl
  __m128i v6; // xmm1
  __int64 v7; // r8
  float *v8; // rcx
  float v9; // xmm4_4
  float v10; // xmm1_4
  __int64 v11; // r9
  __int8 *v12; // rbx
  __int64 v13; // r9
  __m128i v14; // [rsp+20h] [rbp-28h]

  v2 = this;
  if ( a2 || (this[4].m128i_i8[4] & 0xF) == 0 )
  {
    v3 = 0;
    this[4].m128i_i32[1] = 1;
    if ( this[4].m128i_i32[2] > 1u )
    {
      while ( 1 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          if ( v2[4].m128i_i8[v7] )
          {
            if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v2[(unsigned int)v7].m128i_i32) )
              v10 = 0.0;
            else
              v10 = (float)(v8[3] - v8[1]) * (float)(v8[2] - *v8);
            if ( v10 > v9 )
              v3 = v7;
            LODWORD(v11) = v7 + 1;
            if ( (unsigned int)(v7 + 1) < 4 )
              break;
          }
LABEL_27:
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= 4 )
            goto LABEL_8;
        }
        v12 = &v2[4].m128i_i8[(unsigned int)v11];
        while ( !*v12
             || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                   v8,
                   (float *)v2[(unsigned int)v11].m128i_i32) )
        {
          LODWORD(v11) = v11 + 1;
          ++v12;
          if ( (unsigned int)v11 >= 4 )
            goto LABEL_27;
        }
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, (float *)v2[v11].m128i_i32);
        v2[4].m128i_i8[v13] = 0;
        --v2[4].m128i_i32[2];
      }
    }
    if ( this[4].m128i_i32[2] == 1 )
    {
      for ( i = this + 4; !i->m128i_i8[0]; i = (__m128i *)((char *)i + 1) )
      {
        if ( (unsigned int)++v3 >= 4 )
          return;
      }
LABEL_8:
      if ( v3 )
      {
        v5 = v2[4].m128i_i8[0];
        if ( v5 )
          v6 = _mm_loadu_si128(v2);
        else
          v6 = v14;
        *v2 = v2[v3];
        v2[4].m128i_i8[0] = 1;
        if ( v5 )
        {
          v2[v3] = v6;
          v2[4].m128i_i8[v3] = 1;
        }
        else
        {
          v2[4].m128i_i8[v3] = 0;
        }
      }
    }
  }
}
