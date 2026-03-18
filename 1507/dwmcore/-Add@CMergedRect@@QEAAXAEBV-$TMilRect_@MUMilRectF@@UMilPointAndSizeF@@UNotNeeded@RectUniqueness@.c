/*
 * XREFs of ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180034D20 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18004DEA8 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Optimize@CMergedRect@@IEAAX_N@Z @ 0x1800511FC (-Optimize@CMergedRect@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRect::Add(__m128i *a1, float *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // r9d
  __m128i *v8; // r10
  __m128i *v9; // r11
  float *m128i_i32; // r14
  float *v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm4_4
  float v14; // xmm5_4
  __int64 v15; // rcx
  __m128i v17; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = -1;
    v6 = -1;
    CMergedRect::Optimize(a1, 0);
    v7 = 0;
    v8 = a1 + 4;
    v9 = a1;
    do
    {
      if ( v8->m128i_i8[0] )
      {
        m128i_i32 = (float *)a1[v7].m128i_i32;
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(m128i_i32, a2) )
        {
          v15 = v7;
          goto LABEL_15;
        }
        if ( a1[4].m128i_i32[2] == 4 )
        {
          v17 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v17.m128i_i32, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v17);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)m128i_i32);
          v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)a2);
          if ( v14 > (float)(v13 - *(float *)&v12) )
            v5 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
      ++v7;
      v8 = (__m128i *)((char *)v8 + 1);
      ++v9;
    }
    while ( v7 < 4 );
    if ( v6 != -1 )
    {
      LOBYTE(v2) = 2 * v6;
      a1[v6] = *(__m128i *)a2;
      a1[4].m128i_i8[v6] = 1;
      ++a1[4].m128i_i32[1];
      ++a1[4].m128i_i32[2];
      return (char)v2;
    }
    v15 = v5;
    v11 = a2;
LABEL_15:
    LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a1[v15].m128i_i32, v11);
    ++a1[4].m128i_i32[1];
  }
  return (char)v2;
}
