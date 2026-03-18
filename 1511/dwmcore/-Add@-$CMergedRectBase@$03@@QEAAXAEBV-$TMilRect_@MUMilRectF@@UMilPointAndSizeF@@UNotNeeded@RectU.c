/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064644
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18004D6F0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180036D30 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180064894 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  _UNKNOWN **v2; // rax
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
  float v17[6]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = -1;
    v6 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v7 = 0;
    v8 = (_BYTE *)(a1 + 64);
    v9 = (_OWORD *)a1;
    do
    {
      if ( *v8 )
      {
        v10 = (float *)(a1 + 16LL * v7);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v10, a2) )
        {
          v15 = v7;
          goto LABEL_15;
        }
        if ( *(_DWORD *)(a1 + 72) == 4 )
        {
          *(_OWORD *)v17 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v17, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v17);
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
    while ( v7 < 4 );
    if ( v6 != -1 )
    {
      LOBYTE(v2) = 2 * v6;
      *(_OWORD *)(a1 + 16LL * v6) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 64) = 1;
      ++*(_DWORD *)(a1 + 68);
      ++*(_DWORD *)(a1 + 72);
      return (char)v2;
    }
    v15 = v5;
    v11 = a2;
LABEL_15:
    LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 16 * v15), v11);
    ++*(_DWORD *)(a1 + 68);
  }
  return (char)v2;
}
