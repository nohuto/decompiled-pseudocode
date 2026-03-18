/*
 * XREFs of ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790
 * Callers:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000EE8C (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800535A4 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18010ABC0 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18010AC70 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?GetSnapshotBitmapSource@CCachedVisualImage@@AEAAJPEAPEAVIBitmapSource@@@Z @ 0x18000EF30 (-GetSnapshotBitmapSource@CCachedVisualImage@@AEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z @ 0x180052A30 (-GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180052B18 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180052C28 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@II@Z @ 0x180052D9C (-FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800530AC (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180053174 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?IsScreenReadback@CCachedVisualImage@@AEAA_NXZ @ 0x180053294 (-IsScreenReadback@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053450 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180054CFC (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180082D00 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSource(
        CCachedVisualImage *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v6; // esi
  CDisplaySet *v7; // r12
  struct CDisplay *v8; // r15
  int BitmapSourceForBounds; // eax
  CCachedVisualImage *v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // rsi
  CDisplayManager *v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // edi
  CHwTextureRenderTarget **v16; // r14
  bool IsScreenReadback; // al
  int v18; // eax
  __int64 (__fastcall *v19)(CHwTextureRenderTarget *__hidden, struct IBitmapSource **); // rdi
  int BitmapSource; // eax
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
  struct CDisplay *v32; // [rsp+48h] [rbp-38h] BYREF
  CDisplaySet *v33; // [rsp+50h] [rbp-30h] BYREF
  struct IBitmapSource **v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF

  v34 = a2;
  v33 = 0LL;
  v32 = 0LL;
  *a2 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 && *(_QWORD *)a3 == __PAIR64__(g_luidZero.HighPart, 0) )
  {
    BitmapSourceForBounds = CCachedVisualImage::GetBitmapSourceForBounds((CCachedVisualImage *)((char *)this - 8), a2);
    v6 = BitmapSourceForBounds;
    if ( BitmapSourceForBounds >= 0 )
      return v6;
    v28 = 1225;
    goto LABEL_35;
  }
  if ( *((_DWORD *)this + 28) )
  {
    v6 = -2147467263;
    v28 = 1237;
    goto LABEL_37;
  }
  if ( !*((_BYTE *)this + 275) )
  {
    v10 = (CCachedVisualImage *)((char *)this - 8);
    CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)((char *)this - 8), &v31, &v30);
    if ( !(unsigned __int8)CCachedVisualImage::HasContent(this) || (v11 = v31) == 0 || *(float *)&v30 == 0.0 )
    {
      CCachedVisualImage::RemoveAllTargets(v10);
      goto LABEL_21;
    }
    if ( *((_BYTE *)this + 276) )
    {
      *(_QWORD *)&v35 = 0LL;
      *((float *)&v35 + 2) = (float)(int)v31;
      *((float *)&v35 + 3) = (float)(int)v30;
LABEL_13:
      if ( (unsigned __int8)IsRectEmptyOrInvalid(&v35) )
        return v6;
      if ( a3 )
      {
        v14 = *(_QWORD *)a3;
        v15 = *((_DWORD *)a3 + 2);
      }
      else
      {
        CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v13, &v33);
        v6 = CurrentDisplaySet;
        if ( CurrentDisplaySet < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_18016AD48, 1u, CurrentDisplaySet, 0x515u);
          v7 = v33;
LABEL_23:
          if ( v7 )
            CDisplaySet::Release(v7);
          return v6;
        }
        v7 = v33;
        PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v33, &v32);
        v6 = PrimaryDisplay;
        if ( PrimaryDisplay < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_18016AD48, 1u, PrimaryDisplay, 0x517u);
          v8 = v32;
          goto LABEL_21;
        }
        v8 = v32;
        v14 = *((_QWORD *)v32 + 104);
        v15 = *(_DWORD *)(*((_QWORD *)v32 + 19) + 852LL);
      }
      v32 = (struct CDisplay *)CCachedVisualImage::FindExistingRenderTargetAndRemoveInvalid(v10, v14, v15, v11, v30);
      v16 = (CHwTextureRenderTarget **)v32;
      if ( !v32 )
      {
        v18 = CCachedVisualImage::CreateNewRenderTarget(
                v10,
                (struct _LUID)v14,
                v15,
                v31,
                v30,
                (struct MilRectF *)&v35,
                &v32);
        if ( v18 == -2003292287 )
          goto LABEL_21;
        v6 = v18;
        if ( v18 < 0 )
        {
          v29 = 1333;
          goto LABEL_48;
        }
        v16 = (CHwTextureRenderTarget **)v32;
        if ( !v32 )
          goto LABEL_21;
      }
      IsScreenReadback = CCachedVisualImage::IsScreenReadback(v10);
      v18 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
              (CCachedVisualImage::RenderTargetBitmapInfo *)v16,
              (const struct MilRectF *)&v35,
              IsScreenReadback);
      v6 = v18;
      if ( v18 >= 0 )
      {
        v19 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct IBitmapSource **))(*(_QWORD *)v16[1]
                                                                                                  + 176LL);
        if ( v19 == CHwTextureRenderTarget::GetBitmapSource )
          BitmapSource = CHwTextureRenderTarget::GetBitmapSource(v16[1], v34);
        else
          BitmapSource = v19(v16[1], v34);
        v6 = BitmapSource;
        if ( BitmapSource >= 0 )
        {
LABEL_21:
          if ( v8 )
            CMILRefCountBase::Release(v8);
          goto LABEL_23;
        }
        v29 = 1360;
        v27 = BitmapSource;
LABEL_51:
        MilInstrumentationCheckHR(0x14u, &dword_18016AD48, 1u, v27, v29);
        goto LABEL_21;
      }
      v29 = 1355;
LABEL_48:
      v27 = v18;
      goto LABEL_51;
    }
    v12 = *((_QWORD *)this + 9);
    v35 = *(_OWORD *)((char *)this + 56);
    if ( !v12 )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_13;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, 45LL) )
    {
      v35 = *(_OWORD *)(v12 + 40);
      goto LABEL_12;
    }
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v28 = 1275;
LABEL_37:
    v24 = v6;
    goto LABEL_38;
  }
  *(float *)&v22 = (float)(*((float *)this + 77) - *((float *)this + 75)) + 6291456.25;
  v23 = *((float *)this + 76) - *((float *)this + 74);
  v31 = v22;
  *(float *)&v30 = v23 + 6291456.25;
  CCachedVisualImage::RemoveInvalidTargets(
    (CCachedVisualImage *)((char *)this - 8),
    (int)(v30 << 10) >> 11,
    (int)(v22 << 10) >> 11);
  BitmapSourceForBounds = CCachedVisualImage::GetSnapshotBitmapSource((CCachedVisualImage *)((char *)this - 8), a2);
  v6 = BitmapSourceForBounds;
  if ( BitmapSourceForBounds < 0 )
  {
    v28 = 1256;
LABEL_35:
    v24 = BitmapSourceForBounds;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, &dword_18016AD48, 1u, v24, v28);
  }
  return v6;
}
