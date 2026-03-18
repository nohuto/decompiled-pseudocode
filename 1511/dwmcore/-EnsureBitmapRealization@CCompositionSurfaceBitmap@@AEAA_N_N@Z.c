/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE00 (-GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE50 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CD58 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPE.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18002E2C0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18002E890 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800F4DA4 (-GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180126000 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801260A0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380 (-Release@CBitmapRealization@@UEAAKXZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  __int64 v4; // rbx
  unsigned int (__fastcall *v5)(CBitmapRealization *__hidden); // rbp
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CCompositionSurfaceInfo *v7; // rcx
  CBitmapOfDeviceBitmaps *v8; // rbx
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14

  if ( !*((_QWORD *)this + 56) || a2 )
  {
    if ( *((_BYTE *)this + 456) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
      *((_BYTE *)this + 456) = 0;
    }
    if ( *((_BYTE *)this + 457) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
      *((_BYTE *)this + 457) = 0;
    }
    if ( *((_QWORD *)this + 55) )
    {
      v4 = *((_QWORD *)this + 56);
      if ( v4 )
      {
        v5 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v4 + 16LL);
        if ( v5 == CBitmapRealization::Release )
          CBitmapRealization::Release(*((CBitmapRealization **)this + 56));
        else
          v5(*((CBitmapRealization **)this + 56));
      }
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                        + 55));
      v7 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 55);
      *((_QWORD *)this + 56) = RenderingRealizationNoRef;
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v7) )
      {
        v8 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 55));
        v9 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v8 + 8LL);
        if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
          CBitmapOfDeviceBitmaps::AddRef(v8);
        else
          v9(v8);
      }
    }
    else
    {
      v12 = *((_QWORD *)this + 56);
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 56));
        *((_QWORD *)this + 56) = 0LL;
      }
    }
    v10 = *((_QWORD *)this + 56);
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 296) == 2 && *(_DWORD *)(v10 + 320) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
        *((_BYTE *)this + 456) = 1;
      }
      v11 = *((_QWORD *)this + 56);
      if ( *(_DWORD *)(v11 + 168) || *(_DWORD *)(v11 + 144) && *(_QWORD *)(v11 + 136) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
        *((_BYTE *)this + 457) = 1;
      }
    }
  }
  return *((_QWORD *)this + 56) != 0LL;
}
