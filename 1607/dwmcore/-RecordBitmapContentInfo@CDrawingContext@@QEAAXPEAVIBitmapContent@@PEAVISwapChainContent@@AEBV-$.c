/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180136E70 (-IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUM.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 *     ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801954E0 (-IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000365C (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000FCC0 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180015588 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033DC0 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapContentInfo(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        CCompositionSurfaceBitmap *a3,
        __int128 *a4,
        __int64 a5)
{
  bool (__fastcall *v9)(CCachedVisualImage *); // rax
  bool IsProtectedContent; // al
  char (__fastcall *v11)(CCachedVisualImage *); // rax
  char IsMonitorSpecificContent; // al
  CMILMatrix *TopByReference; // rax
  __int64 Rotation; // rdx
  const struct CMILMatrix *v15; // rax
  CBaseMatrixStack *v16; // r9
  __int64 v17; // rdx
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  _BYTE v22[64]; // [rsp+20h] [rbp-61h] BYREF
  int v23; // [rsp+60h] [rbp-21h]
  float v24; // [rsp+70h] [rbp-11h] BYREF
  float v25; // [rsp+74h] [rbp-Dh]
  float v26; // [rsp+78h] [rbp-9h]
  float v27; // [rsp+7Ch] [rbp-5h]
  __int128 v28; // [rsp+80h] [rbp-1h] BYREF

  v9 = *(bool (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)a2 + 32LL);
  if ( v9 == CCachedVisualImage::IsProtectedContent )
    IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
  else
    IsProtectedContent = v9(a2);
  if ( IsProtectedContent )
    *((_BYTE *)this + 6534) = 1;
  v11 = *(char (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)a2 + 24LL);
  if ( v11 == CCachedVisualImage::IsMonitorSpecificContent )
    IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
  else
    IsMonitorSpecificContent = v11(a2);
  if ( IsMonitorSpecificContent )
    *((_BYTE *)this + 6536) = 1;
  if ( a3 && CDrawingContext::IsNormalDesktopRender(this) )
  {
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
    Rotation = (unsigned int)CMILMatrix::GetRotation(TopByReference);
    if ( *(void (__fastcall **)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION))(*(_QWORD *)a3 + 168LL) == CCompositionSurfaceBitmap::SetSwapChainOrientation )
      CCompositionSurfaceBitmap::SetSwapChainOrientation(a3, (enum DXGI_MODE_ROTATION)Rotation);
    else
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)a3 + 168LL))(a3, Rotation);
  }
  if ( *((_BYTE *)this + 6533) )
  {
    if ( *((_DWORD *)this + 1622) == 1 )
    {
      if ( a3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 88LL))(a3) )
        {
          v15 = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
          if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v15) )
          {
            v23 = 0;
            CBaseMatrixStack::Top(v16, (struct CMILMatrix *)v22);
            if ( a5 )
              CMILMatrix::Transform2DBoundsHelper<0>(a5, (__int64)a4, (float *)&v28);
            else
              v28 = *a4;
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v22, (__int64)&v28, &v24);
            LOBYTE(v17) = 1;
            CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v17, &v28);
            v18 = v24;
            if ( *(float *)&v28 > v24 )
            {
              v18 = *(float *)&v28;
              v24 = *(float *)&v28;
            }
            v19 = v25;
            if ( *((float *)&v28 + 1) > v25 )
            {
              v19 = *((float *)&v28 + 1);
              v25 = *((float *)&v28 + 1);
            }
            v20 = v26;
            if ( v26 > *((float *)&v28 + 2) )
            {
              v20 = *((float *)&v28 + 2);
              v26 = *((float *)&v28 + 2);
            }
            v21 = v27;
            if ( v27 > *((float *)&v28 + 3) )
            {
              v21 = *((float *)&v28 + 3);
              v27 = *((float *)&v28 + 3);
            }
            if ( v20 <= v18 || v21 <= v19 )
            {
              v27 = 0.0;
              v26 = 0.0;
              v25 = 0.0;
              v24 = 0.0;
            }
            if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v24) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1623, &v24);
          }
        }
      }
    }
  }
}
