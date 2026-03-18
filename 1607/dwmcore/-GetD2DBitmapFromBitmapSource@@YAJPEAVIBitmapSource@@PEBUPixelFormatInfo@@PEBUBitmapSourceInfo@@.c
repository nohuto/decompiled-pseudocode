/*
 * XREFs of ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180142E40 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18018F2F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180080E50 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetD2DBitmapFromBitmapSource(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        const struct _GUID *a4,
        struct ID2D1Bitmap1 **a5)
{
  struct ID2D1Bitmap1 **v5; // r12
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v10; // rdi
  int v11; // ebx
  int D2DBitmap; // eax
  CHwBitmapColorSource *v13; // rsi
  __int64 v14; // r15
  struct ID2D1Bitmap1 *v15; // r14
  unsigned int v17; // [rsp+20h] [rbp-30h]
  CHwBitmapColorSource *v18; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v19; // [rsp+48h] [rbp-8h] BYREF
  CD3DDeviceLevel1 *v20; // [rsp+90h] [rbp+40h] BYREF

  v5 = a5;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *a5 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, *(struct _LUID *)a3, &v20);
  v10 = v20;
  v11 = D3DDevice;
  LODWORD(a5) = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x2Fu);
    goto LABEL_15;
  }
  D2DBitmap = CHwTexturedColorSource::RealizeFromBitmapSource(
                v20,
                a1,
                (__int128 *)a2,
                *((_DWORD *)a3 + 2),
                *((_DWORD *)a3 + 4),
                *((_QWORD *)a3 + 3),
                &v18);
  v13 = v18;
  v11 = D2DBitmap;
  LODWORD(a5) = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    v17 = 55;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v18 + 56LL))(v18);
    D2DBitmap = CD3DTexture::GetD2DBitmap((struct ID2D1Bitmap1 **)v14, *((_BYTE *)a3 + 16) & 1, &v19);
    LODWORD(a5) = D2DBitmap;
    v11 = D2DBitmap;
    if ( D2DBitmap >= 0 )
    {
      v15 = v19;
      if ( v19 )
      {
        if ( g_LockAndReadTexture )
          CD3DDeviceLevel1::ReadTexture(v10, *(struct ID3D11Texture2D **)(v14 + 128));
        *v5 = v15;
      }
      else
      {
        v11 = -2147024882;
        LODWORD(a5) = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Fu);
      }
      goto LABEL_12;
    }
    v17 = 62;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, v17);
LABEL_12:
  if ( v13 )
    (*(void (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v13 + 8LL))(v13);
LABEL_15:
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 408));
  TranslateDXGIorD3DErrorInContext(v11, 0, (int *)&a5);
  return (unsigned int)a5;
}
