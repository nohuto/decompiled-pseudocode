/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440
 * Callers:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180093F80 (-AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B40F8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        struct CRedirectedGDISurface *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  int v8; // eax
  CMILCOMBase *v9; // rsi
  struct IDeviceResourceNotify *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 **v16; // rax
  CMILCOMBase *v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v18 = 0LL;
  CGdiSpriteBitmap::ReleaseDeviceResources(this);
  if ( !a3 || !a4 )
    goto LABEL_8;
  v8 = CBitmapOfDeviceBitmaps::Create(a3, a4, (CGdiSpriteBitmap *)((char *)this + 168), &v18);
  v9 = v18;
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2D4u);
  }
  else
  {
    if ( this )
      v10 = (CGdiSpriteBitmap *)((char *)this + 152);
    else
      v10 = 0LL;
    v11 = CBitmapOfDeviceBitmaps::AddResourceNotifier((CMILCOMBase *)((char *)v18 + 256), v10);
    v4 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 30) = v9;
LABEL_8:
      v12 = *((_QWORD *)this + 30);
      *((_DWORD *)this + 32) = a3;
      *((_DWORD *)this + 33) = a4;
      if ( v12 )
        v13 = v12 + 16;
      else
        v13 = 0LL;
      *((_QWORD *)this + 17) = v13;
      if ( v12 && (int)CGdiSpriteBitmap::EnsureDeviceBitmapTextures(this) >= 0 && (*((_BYTE *)this + 516) & 8) == 0 )
      {
        v14 = (__int64 *)((char *)this + 552);
        v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 176LL;
        v16 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 184LL);
        if ( *v16 != (__int64 *)v15 )
          __fastfail(3u);
        *v14 = v15;
        v4 = 0;
        *((_QWORD *)this + 70) = v16;
        *v16 = v14;
        *(_QWORD *)(v15 + 8) = v14;
        *((_BYTE *)this + 516) |= 8u;
      }
      return v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2DBu);
  }
  if ( v9 )
    CMILCOMBase::InternalRelease(v9);
  return v4;
}
