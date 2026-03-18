/*
 * XREFs of ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180086460
 * Callers:
 *     ?DisplayBufferReady@CGdiSpriteBitmap@@UEAA_NXZ @ 0x180087700 (-DisplayBufferReady@CGdiSpriteBitmap@@UEAA_NXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z @ 0x180087B98 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z.c)
 *     ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180087CC0 (-GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A60F8 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180072670 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::EnsureDeviceBitmapTextures(CGdiSpriteBitmap *this)
{
  int v1; // edi
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  if ( *((_QWORD *)this + 21) && !*((_BYTE *)this + 176) )
  {
    v4 = 0LL;
    if ( *((_DWORD *)this + 110) )
    {
      while ( 1 )
      {
        v5 = CD3DDeviceManager::OpenSharedHandleAsBitmap(
               (__int64)&qword_1801A3D80,
               *((_QWORD *)this + 21),
               0,
               &v7,
               (struct CD3DDeviceLevel1 *)&v6,
               (struct _GUID *)(*((_QWORD *)this + 4) + 252LL),
               *(struct _LUID *)((char *)this + 8 * v4 + 312),
               DisplayId::None,
               *((_QWORD *)this + v4 + 23),
               0,
               0);
        v7 = v5;
        v1 = v5;
        if ( v5 < 0 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)this + 110) )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, &dword_180178F18, 6u, v5, 0x335u);
    }
    else
    {
LABEL_7:
      *((_BYTE *)this + 444) &= ~0x20u;
      *((_BYTE *)this + 176) = 1;
    }
    if ( v1 < 0 )
    {
      TranslateDXGIorD3DErrorInContext(v1, 14, &v7);
      return (unsigned int)v7;
    }
  }
  return (unsigned int)v1;
}
