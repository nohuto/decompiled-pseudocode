/*
 * XREFs of ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007E10
 * Callers:
 *     ?GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180003578 (-GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008960 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18010A440 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    v8 = *(_QWORD *)(a1 + 400);
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
