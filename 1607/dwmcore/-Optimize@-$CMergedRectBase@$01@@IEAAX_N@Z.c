/*
 * XREFs of ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180129680
 * Callers:
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801262B0 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetRects@?$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180128834 (-GetRects@-$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18004BC20 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x180129CAC (-SwapExisting@-$CMergedRectBase@$01@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<2>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // r8
  float *v5; // rcx
  double v6; // xmm0_8
  float v7; // xmm4_4
  __int64 v8; // r9
  _BYTE *v9; // rbx
  __int64 v10; // r9
  _BYTE *i; // rax

  v2 = a1;
  if ( a2 || (*(_BYTE *)(a1 + 36) & 3) == 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 36) = 1;
    if ( *(_DWORD *)(a1 + 40) > 1u )
    {
      while ( 1 )
      {
        v4 = 0LL;
        while ( 1 )
        {
          if ( *(_BYTE *)(v4 + v2 + 32) )
          {
            v6 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((float *)(v2 + 16LL * (unsigned int)v4));
            if ( *(float *)&v6 > v7 )
              v3 = v4;
            LODWORD(v8) = v4 + 1;
            if ( (unsigned int)(v4 + 1) < 2 )
              break;
          }
LABEL_13:
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 >= 2 )
            goto LABEL_14;
        }
        v9 = (_BYTE *)((unsigned int)v8 + v2 + 32);
        while ( !*v9
             || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                   v5,
                   (float *)(v2 + 16LL * (unsigned int)v8)) )
        {
          LODWORD(v8) = v8 + 1;
          ++v9;
          if ( (unsigned int)v8 >= 2 )
            goto LABEL_13;
        }
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v5, (float *)(v2 + 16 * v8));
        *(_BYTE *)(v10 + v2 + 32) = 0;
        --*(_DWORD *)(v2 + 40);
      }
    }
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      for ( i = (_BYTE *)(a1 + 32); !*i; ++i )
      {
        if ( ++v3 >= 2 )
          return;
      }
LABEL_14:
      if ( v3 )
        CMergedRectBase<2>::SwapExisting(v2, 0LL, v3);
    }
  }
}
