/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58
 * Callers:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007E10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800087A0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008AD0 (-GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800870F8 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180087540 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800DC61C (-GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18010A730 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800862D8 (-SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18008631C (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180086984 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(CBitmapRealization *); // r14
  CCompositionSurfaceInfo *v6; // r14
  __int64 v7; // rax
  CCompositionSurfaceInfo *v8; // r14
  CCompositionSurfaceInfo *v9; // r14
  CBitmapOfDeviceBitmaps *v10; // rbx
  __int64 (__fastcall *v11)(CBitmapOfDeviceBitmaps *); // r14
  __int64 v12; // rax
  __int64 v13; // rax
  struct CBitmapRealization *v14; // r15
  __int64 v15; // r14
  struct CBitmapRealization *v16; // r15
  struct CBitmapRealization *v17; // r15
  struct CBitmapRealization *v18[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v19[216]; // [rsp+38h] [rbp-D0h] BYREF
  HRGN v20; // [rsp+110h] [rbp+8h]
  _DWORD *v21; // [rsp+148h] [rbp+40h] BYREF
  _DWORD v22[18]; // [rsp+150h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 55) || a2 )
  {
    if ( *((_BYTE *)this + 448) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
      *((_BYTE *)this + 448) = 0;
    }
    if ( *((_BYTE *)this + 449) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
      *((_BYTE *)this + 449) = 0;
    }
    if ( *((_QWORD *)this + 54) )
    {
      v4 = *((_QWORD *)this + 55);
      if ( v4 )
      {
        v5 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v4 + 16LL);
        if ( v5 == CBitmapRealization::Release )
          CBitmapRealization::Release(*((CBitmapRealization **)this + 55));
        else
          v5(*((CBitmapRealization **)this + 55));
      }
      v6 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 54);
      if ( !*((_QWORD *)v6 + 16) )
      {
        v18[0] = 0LL;
        if ( (int)CCompositionSurfaceInfo::QueryRenderingRealization(v6, (struct CSM_SURFACE_UPDATE *)v19, v18) >= 0 )
        {
          v14 = v18[0];
          if ( v18[0] )
          {
            v22[0] = 0;
            v21 = v22;
            CCompositionSurfaceInfo::SetRenderingRealization(
              v6,
              (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))v18[0]);
            CCompositionSurfaceInfo::DirtyRenderingRealization(v6, 1, v20, (struct CRegion *)&v21);
            (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v14 + 16LL))(v14);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v21);
          }
        }
      }
      v7 = *((_QWORD *)v6 + 16);
      v8 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 54);
      *((_QWORD *)this + 55) = v7;
      if ( *((_QWORD *)v8 + 16) )
        goto LABEL_14;
      v18[0] = 0LL;
      if ( (int)CCompositionSurfaceInfo::QueryRenderingRealization(v8, (struct CSM_SURFACE_UPDATE *)v19, v18) >= 0 )
      {
        v16 = v18[0];
        if ( v18[0] )
        {
          v22[0] = 0;
          v21 = v22;
          CCompositionSurfaceInfo::SetRenderingRealization(
            v8,
            (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))v18[0]);
          CCompositionSurfaceInfo::DirtyRenderingRealization(v8, 1, v20, (struct CRegion *)&v21);
          (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v16 + 16LL))(v16);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v21);
        }
      }
      if ( *((_QWORD *)v8 + 16) )
      {
LABEL_14:
        v9 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 54);
        if ( !*((_QWORD *)v9 + 16) )
        {
          v18[0] = 0LL;
          if ( (int)CCompositionSurfaceInfo::QueryRenderingRealization(v9, (struct CSM_SURFACE_UPDATE *)v19, v18) >= 0 )
          {
            v17 = v18[0];
            if ( v18[0] )
            {
              v22[0] = 0;
              v21 = v22;
              CCompositionSurfaceInfo::SetRenderingRealization(
                v9,
                (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))v18[0]);
              CCompositionSurfaceInfo::DirtyRenderingRealization(v9, 1, v20, (struct CRegion *)&v21);
              (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v17 + 16LL))(v17);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v21);
            }
          }
        }
        v10 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)v9 + 16);
        v11 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v10 + 8LL);
        if ( v11 == CBitmapOfDeviceBitmaps::AddRef )
          CBitmapOfDeviceBitmaps::AddRef(v10);
        else
          v11(v10);
      }
    }
    else
    {
      v15 = *((_QWORD *)this + 55);
      if ( v15 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)this + 55));
        *((_QWORD *)this + 55) = 0LL;
      }
    }
    v12 = *((_QWORD *)this + 55);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 296) == 2 && *(_DWORD *)(v12 + 320) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
        *((_BYTE *)this + 448) = 1;
      }
      v13 = *((_QWORD *)this + 55);
      if ( *(_DWORD *)(v13 + 168) || *(_DWORD *)(v13 + 144) && *(_QWORD *)(v13 + 136) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
        *((_BYTE *)this + 449) = 1;
      }
    }
  }
  return *((_QWORD *)this + 55) != 0LL;
}
