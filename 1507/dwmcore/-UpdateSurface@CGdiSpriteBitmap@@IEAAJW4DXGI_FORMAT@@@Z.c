/*
 * XREFs of ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8
 * Callers:
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18007FB60 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180108328 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800622A0 (-GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18007E14C (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x18007ED00 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18007EEA0 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z @ 0x18007F2F8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z.c)
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z @ 0x18007F5EC (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::UpdateSurface(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  int v4; // eax
  int Information; // eax
  int v6; // eax
  unsigned int v7; // ecx
  __int64 *v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // r8
  __int64 v11; // rax
  enum DXGI_FORMAT v12; // ecx
  int v13; // ecx
  int PixelFormatColorSpace; // eax
  struct IMilRedirectedGDISurface *v15; // r8
  unsigned int v16; // ebx
  struct IMilRedirectedGDISurface *v17; // rdx
  char v18; // al
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  CGdiSpriteBitmap **v22; // rdx
  CGdiSpriteBitmap **v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  int v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  HANDLE SectionHandle; // [rsp+58h] [rbp-A8h]
  unsigned int v30; // [rsp+60h] [rbp-A0h]
  unsigned int v31; // [rsp+64h] [rbp-9Ch]
  int v32; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v33; // [rsp+6Ch] [rbp-94h]
  unsigned int v34; // [rsp+70h] [rbp-90h]
  char v35; // [rsp+78h] [rbp-88h] BYREF

  v26 = 0;
  memset_0(v27, 0, 0x130uLL);
  v25[0] = 312;
  v33 = a2;
  v4 = CGdiSpriteBitmap::EnsureRedirSurface(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xFEu);
  }
  else
  {
    Information = CRedirectedGDISurface::GetInformation(*((_QWORD *)this + 70) + 16LL, 2, v25, (__int64)&v26);
    *((_DWORD *)this + 110) = 0;
    *((_DWORD *)this + 142) = 0;
    *((_DWORD *)this + 22) = v32;
    if ( Information >= 0 )
    {
      *((_QWORD *)this + 19) = v28;
      v6 = v26;
      *((_DWORD *)this + 142) = v26;
      if ( v6 == 1 )
      {
        v20 = v30;
        *((_DWORD *)this + 31) = v31;
        *((_DWORD *)this + 30) = v20;
        v21 = 4LL * v20;
        if ( v21 > 0xFFFFFFFF )
        {
          v16 = -2147024362;
          *((_DWORD *)this + 22) = -1;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x119u);
          return v16;
        }
        *((_QWORD *)this + 11) = (unsigned int)v21;
        CGdiSpriteBitmap::ReleaseDeviceResources(this);
        if ( (*((_BYTE *)this + 444) & 8) != 0 )
        {
          v22 = (CGdiSpriteBitmap **)*((_QWORD *)this + 60);
          v23 = (CGdiSpriteBitmap **)*((_QWORD *)this + 61);
          if ( v22[1] != (CGdiSpriteBitmap *)((char *)this + 480) || *v23 != (CGdiSpriteBitmap *)((char *)this + 480) )
            __fastfail(3u);
          *v23 = (CGdiSpriteBitmap *)v22;
          v22[1] = (CGdiSpriteBitmap *)v23;
          *((_BYTE *)this + 444) &= ~8u;
        }
      }
      else
      {
        SectionHandle = 0LL;
        if ( v6 == 2 )
        {
          v7 = v34;
          if ( v34 )
          {
            v8 = (__int64 *)&v35;
            v9 = v34;
            v10 = (_QWORD *)((char *)this + 312);
            do
            {
              *(v10 - 16) = v8[1];
              v11 = *v8;
              v8 += 2;
              *v10++ = v11;
              --v9;
            }
            while ( v9 );
          }
          *((_DWORD *)this + 110) = v7;
        }
      }
    }
  }
  v12 = v33;
  *((_DWORD *)this + 24) = v33;
  *((_DWORD *)this + 25) = HasAlphaChannel(v12) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v13, (CGdiSpriteBitmap *)((char *)this + 104));
  v16 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v24 = 368;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v24);
    return v16;
  }
  PixelFormatColorSpace = CGdiSpriteBitmap::HandleSectionChange((PVOID *)this, SectionHandle, v15);
  v16 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v24 = 374;
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 142) == 2 )
  {
    PixelFormatColorSpace = CGdiSpriteBitmap::CreateDeviceBitmap(this, v17, v30, v31);
    v16 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 380;
      goto LABEL_30;
    }
  }
  v18 = *((_BYTE *)this + 444);
  if ( (v18 & 0x40) != 0 && v18 >= 0 )
  {
    PixelFormatColorSpace = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)((char *)this + 72));
    v16 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 389;
      goto LABEL_30;
    }
  }
  return v16;
}
