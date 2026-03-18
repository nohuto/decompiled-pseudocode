/*
 * XREFs of ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850
 * Callers:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000B2BC (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18005CB18 (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180126570 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180126620 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?GetSnapshotBitmapSource@CCachedVisualImage@@AEAAJPEAPEAVIBitmapSource@@@Z @ 0x18000B348 (-GetSnapshotBitmapSource@CCachedVisualImage@@AEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002C860 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z @ 0x18005AB90 (-GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18005AC78 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005AD88 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18005AEFC (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18005B1D0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18005B298 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B530 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18006F8B8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ABEA0 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSource(
        CCachedVisualImage *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // esi
  CDisplaySet *v4; // r12
  struct CDisplay *v5; // r13
  CCachedVisualImage *v9; // r15
  __int64 v10; // rbx
  CDisplayManager *v11; // rcx
  __int64 v12; // rbx
  int v13; // edi
  CHwTextureRenderTarget **v14; // r15
  int v15; // eax
  __int64 (__fastcall *v16)(CHwTextureRenderTarget *, struct IBitmapSource **); // rdi
  int BitmapSource; // eax
  __int64 (__fastcall *v19)(__int64, __int64); // rsi
  char v20; // al
  int BitmapSourceForBounds; // eax
  unsigned int v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // r9d
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-60h]
  unsigned int v29; // [rsp+20h] [rbp-60h]
  unsigned int v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-3Ch] BYREF
  struct CDisplay *ExistingRenderTarget; // [rsp+48h] [rbp-38h] BYREF
  CDisplaySet *v33; // [rsp+50h] [rbp-30h] BYREF
  struct IBitmapSource **v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v34 = a2;
  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  ExistingRenderTarget = 0LL;
  if ( a3 && !*(_QWORD *)a3 )
  {
    BitmapSourceForBounds = CCachedVisualImage::GetBitmapSourceForBounds((CCachedVisualImage *)((char *)this - 8), a2);
    v3 = BitmapSourceForBounds;
    if ( BitmapSourceForBounds >= 0 )
      return v3;
    v28 = 1214;
    goto LABEL_37;
  }
  if ( *((_DWORD *)this + 28) )
  {
    v3 = -2147467263;
    v28 = 1226;
LABEL_39:
    v24 = v3;
    goto LABEL_40;
  }
  if ( *((_BYTE *)this + 275) )
  {
    *(float *)&v22 = (float)(*((float *)this + 77) - *((float *)this + 75)) + 6291456.25;
    v23 = *((float *)this + 76) - *((float *)this + 74);
    v30 = v22;
    *(float *)&v31 = v23 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets(
      (CCachedVisualImage *)((char *)this - 8),
      (int)(v31 << 10) >> 11,
      (int)(v22 << 10) >> 11);
    BitmapSourceForBounds = CCachedVisualImage::GetSnapshotBitmapSource((CCachedVisualImage *)((char *)this - 8), a2);
    v3 = BitmapSourceForBounds;
    if ( BitmapSourceForBounds >= 0 )
      return v3;
    v28 = 1245;
LABEL_37:
    v24 = BitmapSourceForBounds;
LABEL_40:
    MilInstrumentationCheckHR(0x14u, &dword_180179130, 1u, v24, v28);
    return v3;
  }
  v9 = (CCachedVisualImage *)((char *)this - 8);
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)((char *)this - 8), &v30, &v31);
  if ( !(unsigned __int8)CCachedVisualImage::HasContent(this) || !v30 || *(float *)&v31 == 0.0 )
  {
    CCachedVisualImage::RemoveAllTargets(v9);
    goto LABEL_19;
  }
  if ( !*((_BYTE *)this + 276) )
  {
    v10 = *((_QWORD *)this + 9);
    v35 = *(_OWORD *)((char *)this + 56);
    if ( !v10 )
    {
LABEL_10:
      v3 = 0;
      goto LABEL_11;
    }
    v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL);
    if ( v19 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v20 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(v10, 49LL);
    else
      v20 = v19(v10, 49LL);
    if ( v20 )
    {
      v35 = *(_OWORD *)(v10 + 40);
      goto LABEL_10;
    }
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v28 = 1264;
    goto LABEL_39;
  }
  *(_QWORD *)&v35 = 0LL;
  *((float *)&v35 + 2) = (float)(int)v30;
  *((float *)&v35 + 3) = (float)(int)v31;
LABEL_11:
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v35) )
    return v3;
  if ( a3 )
  {
    v12 = *(_QWORD *)a3;
    v13 = *((_DWORD *)a3 + 2);
    goto LABEL_14;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v11, &v33);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v4 = v33;
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v33, &ExistingRenderTarget);
    v3 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179130, 1u, PrimaryDisplay, 0x50Cu);
      v5 = ExistingRenderTarget;
      goto LABEL_19;
    }
    v5 = ExistingRenderTarget;
    v12 = *((_QWORD *)ExistingRenderTarget + 29);
    v13 = *(_DWORD *)(*((_QWORD *)ExistingRenderTarget + 17) + 244LL);
LABEL_14:
    CCachedVisualImage::RemoveInvalidTargets(v9, v30, v31);
    ExistingRenderTarget = (struct CDisplay *)CCachedVisualImage::FindExistingRenderTarget((__int64)v9, v12, v13);
    v14 = (CHwTextureRenderTarget **)ExistingRenderTarget;
    if ( !ExistingRenderTarget )
    {
      v15 = CCachedVisualImage::CreateNewRenderTarget(
              (CCachedVisualImage *)((char *)this - 8),
              (struct _LUID)v12,
              v13,
              v30,
              v31,
              (struct MilRectF *)&v35,
              &ExistingRenderTarget);
      if ( v15 == -2003292287 )
        goto LABEL_19;
      v3 = v15;
      if ( v15 < 0 )
      {
        v29 = 1322;
        goto LABEL_51;
      }
      v14 = (CHwTextureRenderTarget **)ExistingRenderTarget;
      if ( !ExistingRenderTarget )
        goto LABEL_19;
    }
    v15 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
            (CCachedVisualImage::RenderTargetBitmapInfo *)v14,
            (const struct MilRectF *)&v35,
            *(_BYTE *)(*((_QWORD *)this + 3) + 1136LL));
    v3 = v15;
    if ( v15 >= 0 )
    {
      v16 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *, struct IBitmapSource **))(*(_QWORD *)v14[1] + 176LL);
      if ( v16 == CHwTextureRenderTarget::GetBitmapSource )
        BitmapSource = CHwTextureRenderTarget::GetBitmapSource(v14[1], v34);
      else
        BitmapSource = v16(v14[1], v34);
      v3 = BitmapSource;
      if ( BitmapSource >= 0 )
      {
LABEL_19:
        if ( v5 )
          CMILRefCountBase::Release(v5);
        goto LABEL_21;
      }
      v29 = 1349;
      v27 = BitmapSource;
LABEL_53:
      MilInstrumentationCheckHR(0x14u, &dword_180179130, 1u, v27, v29);
      goto LABEL_19;
    }
    v29 = 1344;
LABEL_51:
    v27 = v15;
    goto LABEL_53;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180179130, 1u, CurrentDisplaySet, 0x50Au);
  v4 = v33;
LABEL_21:
  if ( v4 )
    CDisplaySet::Release(v4);
  return v3;
}
