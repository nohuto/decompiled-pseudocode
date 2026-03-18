/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18010DA20 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18010DB44 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180064814 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180064894 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // r15
  unsigned int v4; // esi
  int v7; // ecx
  bool result; // al
  __int64 v9; // r8
  _BYTE *v10; // rbp

  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = 0;
  CMergedRectBase<4>::Optimize(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 2) <= 1 )
  {
    v9 = 0LL;
    v10 = (_BYTE *)(a1 + 64);
    do
    {
      if ( *v10 )
      {
        if ( (_DWORD)v9 != v4 )
          CMergedRectBase<4>::SwapExisting(a1, v4, v9);
        ++v4;
      }
      v9 = (unsigned int)(v9 + 1);
      ++v10;
    }
    while ( (unsigned int)v9 < 4 );
  }
  v7 = *(_DWORD *)(a1 + 72);
  result = v7 != 0;
  *v3 = v7;
  *a3 = a1;
  return result;
}
