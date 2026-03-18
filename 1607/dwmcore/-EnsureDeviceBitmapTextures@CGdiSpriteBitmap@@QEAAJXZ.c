/*
 * XREFs of ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C
 * Callers:
 *     ?DisplayBufferReady@CGdiSpriteBitmap@@UEAA_NXZ @ 0x18002AFC0 (-DisplayBufferReady@CGdiSpriteBitmap@@UEAA_NXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z.c)
 *     ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18002B560 (-GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
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
  if ( *((_QWORD *)this + 30) && !*((_BYTE *)this + 248) )
  {
    v4 = 0LL;
    if ( *((_DWORD *)this + 128) )
    {
      while ( 1 )
      {
        v5 = CD3DDeviceManager::OpenSharedHandleAsBitmap(
               (int)&qword_1801F0020,
               *((_QWORD *)this + 30),
               0,
               (int)&v7,
               (__int64)&v6,
               (struct _GUID *)(*((_QWORD *)this + 4) + 252LL),
               *(struct _LUID *)((char *)this + 8 * v4 + 384),
               DisplayId::None,
               *((_QWORD *)this + v4 + 32),
               0,
               0);
        v7 = v5;
        v1 = v5;
        if ( v5 < 0 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)this + 128) )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DB8, 6u, v5, 0x335u);
    }
    else
    {
LABEL_7:
      *((_BYTE *)this + 516) &= ~0x20u;
      *((_BYTE *)this + 248) = 1;
    }
    if ( v1 < 0 )
    {
      TranslateDXGIorD3DErrorInContext((unsigned int)v1, 10LL, &v7);
      return (unsigned int)v7;
    }
  }
  return (unsigned int)v1;
}
