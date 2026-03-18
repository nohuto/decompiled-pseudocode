/*
 * XREFs of ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0
 * Callers:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18001B788 (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x180031814 (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180142D90 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180142E40 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002D610 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180033118 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSource(
        CCachedVisualImage *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  struct CDisplay *v3; // rsi
  CDisplaySet *v4; // r14
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  CHwTextureRenderTarget *v13; // rcx
  __int64 (__fastcall *v14)(CHwTextureRenderTarget *, struct IBitmapSource **); // rax
  int BitmapSource; // eax
  struct IBitmapSource *v16; // rax
  int BitmapSourceForBounds; // eax
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  CDisplaySet *v21; // [rsp+30h] [rbp-10h] BYREF
  struct IBitmapSource *v22; // [rsp+88h] [rbp+48h] BYREF
  __int64 v23; // [rsp+90h] [rbp+50h] BYREF
  struct CDisplay *v24; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  *a2 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( !a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v21);
    v12 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, CurrentDisplaySet, 0x55Eu);
      v4 = v21;
    }
    else
    {
      v4 = v21;
      PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v21, &v24);
      v12 = PrimaryDisplay;
      if ( PrimaryDisplay >= 0 )
      {
        v3 = v24;
        v9 = *((_QWORD *)v24 + 29);
        v10 = *(unsigned int *)(*((_QWORD *)v24 + 17) + 244LL);
LABEL_4:
        v11 = CCachedVisualImage::EnsureRenderTargetBitmap((char *)this - 8, v9, v10, &v23);
        v12 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, v11, 0x566u);
          v5 = v23;
        }
        else
        {
          v5 = v23;
          if ( v23
            && ((v13 = (CHwTextureRenderTarget *)(v23 + 16),
                 v14 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *, struct IBitmapSource **))(*(_QWORD *)(v23 + 16) + 72LL),
                 v14 != CHwTextureRenderTarget::GetBitmapSource)
              ? (BitmapSource = ((__int64 (__fastcall *)(CHwTextureRenderTarget *, struct IBitmapSource **, const struct BitmapSourceInfo *))v14)(
                                  v13,
                                  &v22,
                                  a3))
              : (BitmapSource = CHwTextureRenderTarget::GetBitmapSource(v13, &v22)),
                v12 = BitmapSource,
                BitmapSource < 0) )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, BitmapSource, 0x56Fu);
          }
          else
          {
            v16 = v22;
            v22 = 0LL;
            *a2 = v16;
          }
        }
        goto LABEL_10;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, PrimaryDisplay, 0x560u);
      v3 = v24;
    }
LABEL_10:
    if ( v3 )
      (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v4 )
      CDisplaySet::Release(v4);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_16;
  }
  v9 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v10 = *((unsigned int *)a3 + 2);
    goto LABEL_4;
  }
  BitmapSourceForBounds = CCachedVisualImage::GetBitmapSourceForBounds((CCachedVisualImage *)((char *)this - 8), a2);
  v12 = BitmapSourceForBounds;
  if ( BitmapSourceForBounds < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, BitmapSourceForBounds, 0x54Fu);
LABEL_16:
  if ( v22 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v22 + 16LL))(v22);
  return v12;
}
