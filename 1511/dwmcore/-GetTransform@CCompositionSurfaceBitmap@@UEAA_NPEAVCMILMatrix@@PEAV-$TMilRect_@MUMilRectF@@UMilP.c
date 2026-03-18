/*
 * XREFs of ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE50
 * Callers:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000B3E8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB04 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18002E3E0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCE80 (-GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@WCA@EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCE90 (-GetTransform@CCompositionSurfaceBitmap@@WCA@EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800328A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v6; // al
  char v7; // r9
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *, _QWORD); // rbp

  v6 = CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)(a1 - 40), 0);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 408);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v8 + 112) + 32LL);
    if ( (char *)v9 == (char *)CDxHandleBitmapRealization::GetTransform )
      return CDxHandleBitmapRealization::GetTransform(v8 + 112, a2, a3, 0LL);
    else
      return v9(v8 + 112, a2, a3, 0LL);
  }
  else
  {
    *(_QWORD *)(a2 + 52) = 0LL;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_DWORD *)(a2 + 40) = 1065353216;
    *(_DWORD *)(a2 + 20) = 1065353216;
    *(_DWORD *)a2 = 1065353216;
    *(_QWORD *)(a2 + 44) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 12) = 0LL;
    *(_QWORD *)(a2 + 4) = 0LL;
    if ( a3 )
    {
      a3[1] = 0LL;
      *a3 = 0LL;
    }
  }
  return v7;
}
