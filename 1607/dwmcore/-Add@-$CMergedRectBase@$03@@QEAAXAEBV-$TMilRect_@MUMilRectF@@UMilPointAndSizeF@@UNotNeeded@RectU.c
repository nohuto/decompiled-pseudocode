/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CD5C
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18002D008 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18004BC20 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 */

_UNKNOWN **__fastcall CMergedRectBase<4>::Add(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned int v7; // r9d
  _BYTE *v8; // r10
  __int128 *v9; // r11
  __int64 v10; // rsi
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  __int64 v15; // rcx
  unsigned int v16; // r10d
  _BYTE *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm4_4
  __int64 v22; // r9
  _BYTE *v23; // r11
  __int64 v24; // r9
  __int128 v25; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)(a2 + 8) > *(float *)a2 && *(float *)(a2 + 12) > *(float *)(a2 + 4) )
  {
    v5 = -1;
    v6 = -1;
    if ( (*(_BYTE *)(a1 + 68) & 0xF) == 0 )
    {
      v16 = 0;
      *(_DWORD *)(a1 + 68) = 1;
      if ( *(_DWORD *)(a1 + 72) > 1u )
      {
        while ( 1 )
        {
          v18 = 0LL;
          while ( 1 )
          {
            if ( *(_BYTE *)(v18 + a1 + 64) )
            {
              v20 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a1 + 16LL * (unsigned int)v18);
              if ( v20 > v21 )
                v16 = v18;
              LODWORD(v22) = v18 + 1;
              if ( (unsigned int)(v18 + 1) < 4 )
                break;
            }
LABEL_24:
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= 4 )
              goto LABEL_25;
          }
          v23 = (_BYTE *)((unsigned int)v22 + a1 + 64);
          while ( !*v23
               || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                      v19,
                                      a1 + 16LL * (unsigned int)v22) )
          {
            LODWORD(v22) = v22 + 1;
            ++v23;
            if ( (unsigned int)v22 >= 4 )
              goto LABEL_24;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v19, a1 + 16 * v22);
          *(_BYTE *)(v24 + a1 + 64) = 0;
          --*(_DWORD *)(a1 + 72);
        }
      }
      if ( *(_DWORD *)(a1 + 72) == 1 )
      {
        v17 = (_BYTE *)(a1 + 64);
        while ( !*v17 )
        {
          ++v16;
          ++v17;
          if ( v16 >= 4 )
            goto LABEL_4;
        }
LABEL_25:
        if ( v16 )
          CMergedRectBase<4>::SwapExisting(a1, 0LL, v16);
      }
    }
LABEL_4:
    v7 = 0;
    v8 = (_BYTE *)(a1 + 64);
    v9 = (__int128 *)a1;
    do
    {
      if ( *v8 )
      {
        v10 = a1 + 16LL * v7;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v10, a2) )
        {
          v15 = v7;
          goto LABEL_16;
        }
        if ( *(_DWORD *)(a1 + 72) == 4 )
        {
          v25 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v25, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v25);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v10);
          v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          if ( v14 > (float)(v13 - v12) )
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
      result = (_UNKNOWN **)(2LL * v6);
      *(_OWORD *)(a1 + 16LL * v6) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 64) = 1;
      ++*(_DWORD *)(a1 + 68);
      ++*(_DWORD *)(a1 + 72);
      return result;
    }
    v15 = v5;
    v11 = a2;
LABEL_16:
    result = (_UNKNOWN **)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a1 + 16 * v15, v11);
    ++*(_DWORD *)(a1 + 68);
  }
  return result;
}
