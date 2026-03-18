/*
 * XREFs of ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180126620 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015D920 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 *     ?GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015FA20 (-GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18002D798 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180030F60 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x1800325C0 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     ?InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z @ 0x18006A428 (-InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006F794 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetD2DBitmapFromBitmapSource(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        const struct _GUID *a4,
        struct ID2D1Bitmap1 **a5)
{
  int v5; // edi
  const struct BitmapSourceInfo *v7; // rsi
  struct CD3DDeviceLevel1 *v8; // r13
  struct _LUID v9; // rbx
  int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // r9d
  struct CD3DDeviceLevel1 **v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  CHwBitmapColorSource *v16; // r15
  struct CD3DTexture *(__fastcall *v17)(CHwBitmapColorSource *); // rbx
  struct CD3DTexture *TextureNoRef; // rax
  struct CD3DTexture *v19; // r12
  char v20; // r14
  struct ID2D1Bitmap1 *v21; // rsi
  __int64 (__fastcall *v22)(CHwBitmapColorSource *); // rbx
  int v24; // eax
  int D2DBitmap; // eax
  int DXGIEnumeration; // eax
  int v27; // eax
  int v28; // eax
  void (__fastcall ***v29)(_QWORD, char *); // rsi
  struct CDXGIEnumeration *v30; // [rsp+40h] [rbp-20h] BYREF
  struct CD3DDeviceLevel1 *v31; // [rsp+48h] [rbp-18h] BYREF
  CHwBitmapColorSource *v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+58h] [rbp-8h]
  const struct BitmapSourceInfo *v35; // [rsp+B0h] [rbp+50h] BYREF

  v35 = a3;
  v5 = 0;
  v7 = a3;
  v32 = 0LL;
  v31 = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v9 = *(struct _LUID *)a3;
  v33 = *(_QWORD *)a3;
  EnterCriticalSection(&stru_1801A3D88);
  v10 = 0;
  v11 = *(_QWORD *)&a4->Data1 - xmmword_1801A3DF4;
  if ( *(_QWORD *)&a4->Data1 == (_QWORD)xmmword_1801A3DF4 )
    v11 = *(_QWORD *)a4->Data4 - *((_QWORD *)&xmmword_1801A3DF4 + 1);
  if ( !v11 )
    v10 = -2003304307;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v10, 0x2F6u);
    goto LABEL_15;
  }
  v10 = 0;
  v30 = 0LL;
  if ( !qword_1801A3DB8 )
  {
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v30);
    v10 = DXGIEnumeration;
    if ( DXGIEnumeration >= 0 )
    {
      v27 = CD3DRegistryDatabase::InitializeFromRegistry(v30);
      v10 = v27;
      if ( v27 >= 0 )
      {
        qword_1801A3DB8 = v30;
        v30 = 0LL;
        HIBYTE(word_1801A3E04) = 1;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x131u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x12Cu);
    }
    if ( v30 )
    {
      (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v30 + 8LL))(v30);
      v7 = v35;
    }
  }
LABEL_7:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v10, 0x2F8u);
  }
  else
  {
    v10 = -2003304307;
    v12 = 0;
    if ( dword_1801A3DF0 )
    {
      while ( 1 )
      {
        v13 = (struct CD3DDeviceLevel1 **)(xmmword_1801A3DD0 + 32LL * v12);
        if ( (struct CD3DDeviceLevel1 *)__PAIR64__(HIDWORD(v33), v9.LowPart) == v13[1] )
        {
          v14 = *(_QWORD *)&a4->Data1 - (_QWORD)v13[2];
          if ( *(struct CD3DDeviceLevel1 **)&a4->Data1 == v13[2] )
            v14 = *(_QWORD *)a4->Data4 - (_QWORD)v13[3];
          if ( !v14 )
            break;
        }
        if ( ++v12 >= dword_1801A3DF0 )
          goto LABEL_14;
      }
      v8 = *v13;
      _InterlockedIncrement((volatile signed __int32 *)*v13 + 98);
      v31 = v8;
      v10 = 0;
    }
LABEL_14:
    if ( v10 < 0 )
    {
      v28 = CD3DDeviceManager::CreateNewDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, v9, &v31);
      v10 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x74Au);
      v8 = v31;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v10, 0x2FDu);
    }
  }
LABEL_15:
  LeaveCriticalSection(&stru_1801A3D88);
  LODWORD(v35) = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x31u);
    goto LABEL_31;
  }
  v15 = CHwTexturedColorSource::RealizeFromBitmapSource(v8, a1, *((_DWORD *)v7 + 4), *((_QWORD *)v7 + 3), (__int64)&v32);
  v16 = v32;
  v10 = v15;
  LODWORD(v35) = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x39u);
  }
  else
  {
    v17 = *(struct CD3DTexture *(__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v32 + 56LL);
    if ( v17 == CHwBitmapColorSource::GetTextureNoRef )
      TextureNoRef = CHwBitmapColorSource::GetTextureNoRef(v32);
    else
      TextureNoRef = v17(v32);
    v19 = TextureNoRef;
    v20 = *((_BYTE *)v7 + 16) & 1;
    v21 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct CD3DTexture *))(*(_QWORD *)TextureNoRef + 24LL))(TextureNoRef) )
    {
      if ( v20 )
      {
        if ( *((_QWORD *)v19 + 30)
          || (D2DBitmap = CD3DTexture::CreateD2DBitmap(v19, 1, (struct ID2D1Bitmap1 **)v19 + 30),
              v5 = D2DBitmap,
              D2DBitmap >= 0) )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 30) + 8LL))(*((_QWORD *)v19 + 30));
          v21 = (struct ID2D1Bitmap1 *)*((_QWORD *)v19 + 30);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x20Au);
        }
      }
      else if ( *((_QWORD *)v19 + 29)
             || (v24 = CD3DTexture::CreateD2DBitmap(v19, 0, (struct ID2D1Bitmap1 **)v19 + 29), v5 = v24, v24 >= 0) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 29) + 8LL))(*((_QWORD *)v19 + 29));
        v21 = (struct ID2D1Bitmap1 *)*((_QWORD *)v19 + 29);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x214u);
      }
      LODWORD(v35) = v5;
      v10 = v5;
      if ( v5 >= 0 )
      {
        if ( v21 )
        {
          if ( g_LockAndReadTexture )
            CD3DDeviceLevel1::ReadTexture(v8, *((struct ID3D11Texture2D **)v19 + 16));
          *a5 = v21;
        }
        else
        {
          v10 = -2147024882;
          LODWORD(v35) = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
        }
        goto LABEL_28;
      }
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x203u);
      v10 = -2003292412;
      LODWORD(v35) = -2003292412;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x40u);
  }
LABEL_28:
  if ( v16 )
  {
    v22 = *(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v16 + 8LL);
    if ( v22 == CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(v16);
    else
      v22(v16);
  }
LABEL_31:
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 98, 0xFFFFFFFF) == 1 )
    {
      v29 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)v8 + 50);
      if ( v29 )
        (**v29)(*((_QWORD *)v8 + 50), (char *)v8 + 384);
      else
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 48) + 16LL))((__int64)v8 + 384, 1LL);
    }
    v10 = (int)v35;
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v10, 0LL, &v35);
  return (unsigned int)v35;
}
