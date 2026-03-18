/*
 * XREFs of ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294
 * Callers:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18001662C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007B468 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180173520 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x180178D70 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18017B378 (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x18017BE40 (-ReadTexture@CHwTextureRenderTarget@@UEBAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18017D200 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801801C0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ReadTexture(CD3DDeviceLevel1 *this, struct ID3D11Texture2D *a2)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  void (__stdcall *GetDesc)(ID3D11Texture2D *, D3D11_TEXTURE2D_DESC *); // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  __int128 v15; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v16[4]; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+64h] [rbp-5h]
  int v18; // [rsp+7Ch] [rbp+13h]
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]
  int v21; // [rsp+88h] [rbp+1Fh]
  __int128 v22; // [rsp+90h] [rbp+27h]

  v14 = 0LL;
  *(_QWORD *)&v15 = "DWM Temp Readback (debug)";
  lpVtbl = a2->lpVtbl;
  DWORD2(v15) = 25;
  GetDesc = lpVtbl->GetDesc;
  v22 = v15;
  ((void (__fastcall *)(struct ID3D11Texture2D *, _BYTE *))GetDesc)(a2, v16);
  v6 = *((_QWORD *)this + 71);
  v19 = 0;
  v21 = 0;
  v18 = 3;
  v20 = 0x20000;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v16, 0LL, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( IsOOM(v7) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v8, 0xD54u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v14 + 40LL))(
      v14,
      &WKPDID_D3DDebugObjectName,
      DWORD2(v22),
      v22);
    (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11Texture2D *))(**((_QWORD **)this + 72) + 376LL))(
      *((_QWORD *)this + 72),
      v14,
      a2);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**((_QWORD **)this + 72)
                                                                                         + 112LL))(
           *((_QWORD *)this + 72),
           v14,
           0LL,
           1LL,
           0,
           &v15);
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( g_InspectFrame )
      {
        v10 = *(_DWORD *)(v15 + 4 * (g_xInspect + (unsigned __int64)(unsigned int)(g_yInspect * (DWORD2(v15) >> 2)))) == -16777216;
      }
      else
      {
        if ( !g_LockTilingTarget )
          goto LABEL_13;
        if ( g_LockAndReadTarget )
          goto LABEL_13;
        v11 = *(_DWORD *)(v15 + 4 * ((unsigned __int64)(unsigned int)(DWORD2(v15) * v17) >> 2) - 4);
        v12 = *(_DWORD *)v15;
        if ( (_BYTE)v11 == 0xFF && __PAIR16__(BYTE1(v11), -1) == BYTE2(v11) )
          goto LABEL_13;
        if ( (_BYTE)v12 != 0xFF || BYTE2(v12) != 0xFF )
          goto LABEL_14;
        v10 = BYTE1(v12) == 0;
      }
      if ( !v10 )
      {
LABEL_14:
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 72) + 120LL))(
          *((_QWORD *)this + 72),
          v14,
          0LL);
        goto LABEL_23;
      }
LABEL_13:
      __debugbreak();
      goto LABEL_14;
    }
    if ( IsOOM(v9) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v8, 0xD5Du);
  }
LABEL_23:
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v14 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v8, 0);
}
