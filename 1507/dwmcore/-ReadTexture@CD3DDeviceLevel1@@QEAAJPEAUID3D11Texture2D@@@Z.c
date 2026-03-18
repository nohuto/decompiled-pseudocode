/*
 * XREFs of ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640
 * Callers:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800190F8 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x1800436A0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048AAC (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180124FDC (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180133F30 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18013AB98 (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18013C6C0 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x18013E6D0 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801403C0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ReadTexture(CD3DDeviceLevel1 *this, struct ID3D11Texture2D *a2)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  void (__stdcall *GetDesc)(ID3D11Texture2D *, D3D11_TEXTURE2D_DESC *); // rbx
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  int v12; // ecx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+54h] [rbp-15h]
  int v18; // [rsp+6Ch] [rbp+3h]
  int v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+74h] [rbp+Bh]
  int v21; // [rsp+78h] [rbp+Fh]
  __int128 v22; // [rsp+80h] [rbp+17h]

  v14 = 0LL;
  *(_QWORD *)&v15 = "DWM Temp Readback (debug)";
  lpVtbl = a2->lpVtbl;
  DWORD2(v15) = 25;
  GetDesc = lpVtbl->GetDesc;
  v22 = v15;
  ((void (__fastcall *)(struct ID3D11Texture2D *, _BYTE *))GetDesc)(a2, v16);
  v6 = *((_QWORD *)this + 68);
  v19 = 0;
  v21 = 0;
  v18 = 3;
  v20 = 0x20000;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v16, 0LL, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180166350, 0xAu, v7, 0xC46u);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v14 + 40LL))(
    v14,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v22),
    v22);
  (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11Texture2D *))(**((_QWORD **)this + 69) + 376LL))(
    *((_QWORD *)this + 69),
    v14,
    a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**((_QWORD **)this + 69) + 112LL))(
         *((_QWORD *)this + 69),
         v14,
         0LL,
         1LL,
         0,
         &v15);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180166350, 0xAu, v9, 0xC4Fu);
    goto LABEL_17;
  }
  if ( g_InspectFrame )
  {
    v10 = *(_DWORD *)(v15 + 4 * (g_xInspect + (unsigned __int64)(unsigned int)(g_yInspect * (DWORD2(v15) >> 2)))) == -16777216;
  }
  else
  {
    if ( !g_LockTilingTarget )
      goto LABEL_15;
    if ( g_LockAndReadTarget )
      goto LABEL_15;
    v11 = *(_DWORD *)(v15 + 4 * ((unsigned __int64)(unsigned int)(DWORD2(v15) * v17) >> 2) - 4);
    v12 = *(_DWORD *)v15;
    if ( (_BYTE)v11 == 0xFF && __PAIR16__(BYTE1(v11), -1) == BYTE2(v11) )
      goto LABEL_15;
    if ( (_BYTE)v12 != 0xFF || BYTE2(v12) != 0xFF )
      goto LABEL_16;
    v10 = BYTE1(v12) == 0;
  }
  if ( v10 )
LABEL_15:
    __debugbreak();
LABEL_16:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 69) + 120LL))(*((_QWORD *)this + 69), v14, 0LL);
LABEL_17:
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v14 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v8, 0);
}
