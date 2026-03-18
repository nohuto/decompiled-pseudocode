/*
 * XREFs of ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C0D0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800629E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1800F7298 (-ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::HasContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  char v2; // si
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 50);
  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v1 + 112) + 24LL))(v1 + 112, &v4, &v5);
    if ( v4 )
      return v5 != 0;
  }
  return v2;
}
