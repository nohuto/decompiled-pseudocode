/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180064894
 * Callers:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064644 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180036D30 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__m128i *a1, char a2)
{
  __m128i *v2; // r10
  int v3; // r11d
  __m128i *i; // rax
  __int8 v5; // dl
  __m128i v6; // xmm1
  __int64 v7; // r8
  float *v8; // rcx
  double v9; // xmm0_8
  float v10; // xmm4_4
  __int64 v11; // r9
  __int8 *v12; // rbx
  __int64 v13; // r9
  __m128i v14; // [rsp+20h] [rbp-28h]

  v2 = a1;
  if ( a2 || (a1[4].m128i_i8[4] & 0xF) == 0 )
  {
    v3 = 0;
    a1[4].m128i_i32[1] = 1;
    if ( a1[4].m128i_i32[2] > 1u )
    {
      while ( 1 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          if ( v2[4].m128i_i8[v7] )
          {
            v9 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v2[(unsigned int)v7].m128i_i64);
            if ( *(float *)&v9 > v10 )
              v3 = v7;
            LODWORD(v11) = v7 + 1;
            if ( (unsigned int)(v7 + 1) < 4 )
              break;
          }
LABEL_24:
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= 4 )
            goto LABEL_10;
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
            goto LABEL_24;
        }
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, (float *)v2[v11].m128i_i32);
        v2[4].m128i_i8[v13] = 0;
        --v2[4].m128i_i32[2];
      }
    }
    if ( a1[4].m128i_i32[2] == 1 )
    {
      for ( i = a1 + 4; !i->m128i_i8[0]; i = (__m128i *)((char *)i + 1) )
      {
        if ( (unsigned int)++v3 >= 4 )
          return;
      }
LABEL_10:
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
