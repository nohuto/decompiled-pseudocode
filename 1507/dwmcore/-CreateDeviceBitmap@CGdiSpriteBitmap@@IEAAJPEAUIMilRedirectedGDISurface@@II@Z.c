/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z @ 0x18007F2F8
 * Callers:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180049030 (-AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18005EED8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18007DE44 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18007E14C (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        struct IMilRedirectedGDISurface *a2,
        unsigned int a3,
        unsigned int a4)
{
  CMILCOMBase *v4; // rdi
  unsigned int v8; // esi
  int v9; // eax
  struct IDeviceResourceNotify *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct CBitmapOfDeviceBitmaps *v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v8 = 0;
  CGdiSpriteBitmap::ReleaseDeviceResources(this);
  if ( !a3 || !a4 )
    goto LABEL_8;
  v9 = CBitmapOfDeviceBitmaps::Create(a3, a4, (CGdiSpriteBitmap *)((char *)this + 96), &v18);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2D4u);
    v4 = v18;
    goto LABEL_15;
  }
  if ( this )
    v10 = (CGdiSpriteBitmap *)((char *)this + 80);
  else
    v10 = 0LL;
  v4 = v18;
  v11 = CBitmapOfDeviceBitmaps::AddResourceNotifier((struct CBitmapOfDeviceBitmaps *)((char *)v18 + 256), v10);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2DBu);
LABEL_15:
    if ( v4 )
      CMILCOMBase::InternalRelease(v4);
    return v8;
  }
  *((_QWORD *)this + 21) = v4;
  v4 = 0LL;
LABEL_8:
  v12 = *((_QWORD *)this + 21);
  *((_DWORD *)this + 14) = a3;
  *((_DWORD *)this + 15) = a4;
  if ( v12 )
    v13 = v12 + 16;
  else
    v13 = 0LL;
  *((_QWORD *)this + 8) = v13;
  if ( v12 && (int)CGdiSpriteBitmap::EnsureDeviceBitmapTextures(this) >= 0 && (*((_BYTE *)this + 444) & 8) == 0 )
  {
    v14 = (char *)this + 480;
    v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 176LL;
    v16 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 184LL);
    *((_QWORD *)this + 60) = v15;
    *((_QWORD *)this + 61) = v16;
    if ( *v16 != v15 )
      __fastfail(3u);
    *v16 = v14;
    v8 = 0;
    *(_QWORD *)(v15 + 8) = v14;
    *((_BYTE *)this + 444) |= 8u;
    goto LABEL_15;
  }
  return v8;
}
