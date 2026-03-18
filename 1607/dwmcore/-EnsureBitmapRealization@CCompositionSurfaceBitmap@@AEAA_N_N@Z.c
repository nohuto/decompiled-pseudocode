/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158
 * Callers:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000FA2C (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPE.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FAE0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FB30 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180093308 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180093850 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180142700 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180099168 (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  CBitmapRealization *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  CBitmapOfDeviceBitmaps *v10; // rcx
  void (*v11)(void); // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  CCompositionSurfaceInfo *v14; // rcx
  CCompositionSurfaceInfo *v15; // rcx

  if ( !*((_QWORD *)this + 66) || a2 )
  {
    if ( *((_BYTE *)this + 572) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
      *((_BYTE *)this + 572) = 0;
    }
    if ( *((_BYTE *)this + 573) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
      *((_BYTE *)this + 573) = 0;
    }
    v4 = (CBitmapRealization *)*((_QWORD *)this + 66);
    if ( *((_QWORD *)this + 65) )
    {
      if ( v4 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
        if ( (char *)v5 == (char *)CBitmapRealization::Release )
          CBitmapRealization::Release(v4);
        else
          v5();
      }
      v6 = *((_QWORD *)this + 65);
      if ( !*(_QWORD *)(v6 + 120) && !*(_BYTE *)(v6 + 352) )
      {
        v14 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 65);
        *(_BYTE *)(v6 + 352) = 1;
        CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v14);
        *(_BYTE *)(v6 + 352) = 0;
      }
      v7 = *(_QWORD *)(v6 + 120);
      v8 = *((_QWORD *)this + 65);
      *((_QWORD *)this + 66) = v7;
      if ( *(_QWORD *)(v8 + 120) )
        goto LABEL_14;
      if ( !*(_BYTE *)(v8 + 352) )
      {
        *(_BYTE *)(v8 + 352) = 1;
        CCompositionSurfaceInfo::EnsureCurrentRenderingRealization((CCompositionSurfaceInfo *)v8);
        *(_BYTE *)(v8 + 352) = 0;
      }
      if ( *(_QWORD *)(v8 + 120) )
      {
LABEL_14:
        v9 = *((_QWORD *)this + 65);
        if ( !*(_QWORD *)(v9 + 120) && !*(_BYTE *)(v9 + 352) )
        {
          v15 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 65);
          *(_BYTE *)(v9 + 352) = 1;
          CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v15);
          *(_BYTE *)(v9 + 352) = 0;
        }
        v10 = *(CBitmapOfDeviceBitmaps **)(v9 + 120);
        v11 = *(void (**)(void))(*(_QWORD *)v10 + 8LL);
        if ( (char *)v11 == (char *)CBitmapOfDeviceBitmaps::AddRef )
          CBitmapOfDeviceBitmaps::AddRef(v10);
        else
          v11();
      }
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 66) = 0LL;
    }
    v12 = *((_QWORD *)this + 66);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 248) == 3 )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
        *((_BYTE *)this + 572) = 1;
      }
      v13 = *((_QWORD *)this + 66);
      if ( (*(_BYTE *)(v13 + 244) & 2) != 0 || (*(_BYTE *)(v13 + 244) & 1) != 0 && *(_QWORD *)(v13 + 136) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
        *((_BYTE *)this + 573) = 1;
      }
    }
  }
  return *((_QWORD *)this + 66) != 0LL;
}
