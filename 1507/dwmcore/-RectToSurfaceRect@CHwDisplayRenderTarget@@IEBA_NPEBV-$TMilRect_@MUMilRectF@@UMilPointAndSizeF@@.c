/*
 * XREFs of ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180044294
 * Callers:
 *     ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043370 (-NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139310 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18013F960 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     <none>
 */

char __fastcall CHwDisplayRenderTarget::RectToSurfaceRect(__int64 a1, float *a2, __int64 a3)
{
  char v3; // r9
  float v5; // xmm0_4
  int v6; // ecx
  float v7; // xmm0_4
  float v8; // xmm0_4
  int v9; // eax
  int v10; // eax
  int v11; // eax
  float v13; // [rsp+8h] [rbp+8h]

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( *(_BYTE *)(a1 + 184) )
  {
    if ( a2 )
    {
      v5 = *a2 + 6291456.25;
      v6 = (int)(LODWORD(v5) << 10) >> 11;
      *(_DWORD *)a3 = v6;
      v7 = a2[2] + 6291456.25;
      *(_DWORD *)(a3 + 8) = (int)(LODWORD(v7) << 10) >> 11;
      v8 = a2[1] + 6291456.25;
      *(_DWORD *)(a3 + 4) = (int)(LODWORD(v8) << 10) >> 11;
      v13 = a2[3] + 6291456.25;
      *(_DWORD *)(a3 + 12) = (int)(LODWORD(v13) << 10) >> 11;
      if ( *(_DWORD *)(a1 + 80) > v6 )
        v6 = *(_DWORD *)(a1 + 80);
      *(_DWORD *)a3 = v6;
      v9 = *(_DWORD *)(a1 + 84);
      if ( v9 > *(_DWORD *)(a3 + 4) )
        *(_DWORD *)(a3 + 4) = v9;
      v10 = *(_DWORD *)(a1 + 88);
      if ( v10 < *(_DWORD *)(a3 + 8) )
        *(_DWORD *)(a3 + 8) = v10;
      v11 = *(_DWORD *)(a1 + 92);
      if ( v11 < *(_DWORD *)(a3 + 12) )
        *(_DWORD *)(a3 + 12) = v11;
      if ( *(_DWORD *)(a3 + 8) <= v6 || *(_DWORD *)(a3 + 12) <= *(_DWORD *)(a3 + 4) )
      {
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)a3 = 0LL;
      }
    }
    else
    {
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
    }
  }
  if ( *(_DWORD *)(a3 + 8) > *(_DWORD *)a3 && *(_DWORD *)(a3 + 12) > *(_DWORD *)(a3 + 4) )
    return 1;
  return v3;
}
