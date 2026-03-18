/*
 * XREFs of ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010FD3C
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18010FF14 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180036D30 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x1801115BC (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRectBase<2>::Add(__int64 a1, float *a2)
{
  char result; // al
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // r9d
  _BYTE *v8; // r10
  _OWORD *v9; // r11
  float *v10; // r14
  float *v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm4_4
  float v14; // xmm5_4
  __int64 v15; // rcx
  float v16[6]; // [rsp+20h] [rbp-18h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  if ( !result )
  {
    v5 = -1;
    v6 = -1;
    CMergedRectBase<2>::Optimize(a1, 0LL);
    v7 = 0;
    v8 = (_BYTE *)(a1 + 32);
    v9 = (_OWORD *)a1;
    do
    {
      if ( *v8 )
      {
        v10 = (float *)(a1 + 16LL * v7);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v10, a2) )
        {
          v15 = v7;
          goto LABEL_14;
        }
        if ( *(_DWORD *)(a1 + 40) == 2 )
        {
          *(_OWORD *)v16 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v16, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v16);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v10);
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
      ++v8;
      ++v9;
    }
    while ( v7 < 2 );
    if ( v6 != -1 )
    {
      result = 2 * v6;
      *(_OWORD *)(a1 + 16LL * v6) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 32) = 1;
      ++*(_DWORD *)(a1 + 36);
      ++*(_DWORD *)(a1 + 40);
      return result;
    }
    v15 = v5;
    v11 = a2;
LABEL_14:
    result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 16 * v15), v11);
    ++*(_DWORD *)(a1 + 36);
  }
  return result;
}
