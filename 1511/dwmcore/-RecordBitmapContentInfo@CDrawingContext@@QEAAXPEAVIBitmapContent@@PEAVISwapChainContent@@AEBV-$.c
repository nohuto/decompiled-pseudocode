/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000E870 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?IssueSurfaceNotifications@CWARPDrawListEntry@@QEAAXPEAVCDrawingContext@@@Z @ 0x180118220 (-IssueSurfaceNotifications@CWARPDrawListEntry@@QEAAXPEAVCDrawingContext@@@Z.c)
 *     ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118480 (-IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUM.c)
 *     ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118560 (-IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000C140 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000DC48 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetRotation@CBaseMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800141C8 (-GetRotation@CBaseMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B7C0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B840 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CDrawingContext::RecordBitmapContentInfo(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        CCompositionSurfaceBitmap *a3,
        struct MilRectF *a4,
        CBaseMatrix *a5)
{
  bool (__fastcall *v9)(CCachedVisualImage *__hidden); // r14
  bool IsProtectedContent; // al
  bool (__fastcall *v11)(CCachedVisualImage *__hidden); // r14
  bool IsMonitorSpecificContent; // al
  CBaseMatrix *TopByReference; // rax
  enum DXGI_MODE_ROTATION Rotation; // r14d
  void (__fastcall *v15)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION); // rbx
  CBaseMatrix *v16; // rax
  CBaseMatrixStack *v17; // r8
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // [rsp+20h] [rbp-51h] BYREF
  float v23; // [rsp+24h] [rbp-4Dh]
  float v24; // [rsp+28h] [rbp-49h]
  float v25; // [rsp+2Ch] [rbp-45h]
  __int128 v26; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v27[64]; // [rsp+40h] [rbp-31h] BYREF

  v9 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 32LL);
  if ( v9 == CCachedVisualImage::IsProtectedContent )
    IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
  else
    IsProtectedContent = v9(a2);
  if ( IsProtectedContent )
    *((_BYTE *)this + 5970) = 1;
  v11 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v11 == CCachedVisualImage::IsMonitorSpecificContent )
    IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
  else
    IsMonitorSpecificContent = v11(a2);
  if ( IsMonitorSpecificContent )
    *((_BYTE *)this + 5972) = 1;
  if ( a3 && CDrawingContext::IsNormalDesktopRender(this) )
  {
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    Rotation = (unsigned int)CBaseMatrix::GetRotation(TopByReference);
    v15 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION))(*(_QWORD *)a3 + 160LL);
    if ( v15 == CCompositionSurfaceBitmap::SetSwapChainOrientation )
      CCompositionSurfaceBitmap::SetSwapChainOrientation(a3, Rotation);
    else
      v15(a3, Rotation);
  }
  if ( *((_BYTE *)this + 5969) )
  {
    if ( *((_DWORD *)this + 1448) == 1 )
    {
      if ( a3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 88LL))(a3) )
        {
          v16 = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
          if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(v16) )
          {
            CBaseMatrixStack::Top(v17, (struct CBaseMatrix *)v27);
            if ( a5 )
              CBaseMatrix::Transform2DBounds(a5, a4, (struct MilRectF *)&v26);
            else
              v26 = *(_OWORD *)a4;
            CBaseMatrix::Transform2DBounds((CBaseMatrix *)v27, (const struct MilRectF *)&v26, (struct MilRectF *)&v22);
            CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v26);
            v18 = v22;
            if ( *(float *)&v26 > v22 )
            {
              v18 = *(float *)&v26;
              v22 = *(float *)&v26;
            }
            v19 = v23;
            if ( *((float *)&v26 + 1) > v23 )
            {
              v19 = *((float *)&v26 + 1);
              v23 = *((float *)&v26 + 1);
            }
            v20 = v24;
            if ( v24 > *((float *)&v26 + 2) )
            {
              v20 = *((float *)&v26 + 2);
              v24 = *((float *)&v26 + 2);
            }
            v21 = v25;
            if ( v25 > *((float *)&v26 + 3) )
            {
              v21 = *((float *)&v26 + 3);
              v25 = *((float *)&v26 + 3);
            }
            if ( v20 <= v18 || v21 <= v19 )
            {
              v25 = 0.0;
              v24 = 0.0;
              v23 = 0.0;
              v22 = 0.0;
            }
            if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v22) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1449, &v22);
          }
        }
      }
    }
  }
}
