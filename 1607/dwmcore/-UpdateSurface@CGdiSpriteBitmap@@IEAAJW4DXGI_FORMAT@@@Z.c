/*
 * XREFs of ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954
 * Callers:
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18002BDD0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180141A24 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x18002AE70 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z.c)
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z @ 0x18002B864 (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B12E4 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
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
  enum DXGI_FORMAT v13; // ecx
  int PixelFormatColorSpace; // eax
  struct CRedirectedGDISurface *v15; // r8
  unsigned int v16; // ebx
  struct CRedirectedGDISurface *v17; // rdx
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
  HANDLE hObject; // [rsp+58h] [rbp-A8h]
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
    Information = CRedirectedGDISurface::GetInformation(*((_QWORD *)this + 79), 2LL, v25, &v26);
    *((_DWORD *)this + 128) = 0;
    *((_DWORD *)this + 160) = 0;
    *((_DWORD *)this + 40) = v32;
    if ( Information >= 0 )
    {
      *((_QWORD *)this + 28) = v28;
      v6 = v26;
      *((_DWORD *)this + 160) = v26;
      if ( v6 == 1 )
      {
        v20 = v30;
        *((_DWORD *)this + 49) = v31;
        *((_DWORD *)this + 48) = v20;
        v21 = 4LL * v20;
        if ( v21 > 0xFFFFFFFF )
        {
          v16 = -2147024362;
          *((_DWORD *)this + 40) = -1;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x119u);
          return v16;
        }
        *((_QWORD *)this + 20) = (unsigned int)v21;
        CGdiSpriteBitmap::ReleaseDeviceResources(this);
        if ( (*((_BYTE *)this + 516) & 8) != 0 )
        {
          v22 = (CGdiSpriteBitmap **)*((_QWORD *)this + 69);
          v23 = (CGdiSpriteBitmap **)*((_QWORD *)this + 70);
          if ( v22[1] != (CGdiSpriteBitmap *)((char *)this + 552) || *v23 != (CGdiSpriteBitmap *)((char *)this + 552) )
            __fastfail(3u);
          *v23 = (CGdiSpriteBitmap *)v22;
          v22[1] = (CGdiSpriteBitmap *)v23;
          *((_BYTE *)this + 516) &= ~8u;
        }
      }
      else
      {
        hObject = 0LL;
        if ( v6 == 2 )
        {
          v7 = v34;
          if ( v34 )
          {
            v8 = (__int64 *)&v35;
            v9 = v34;
            v10 = (_QWORD *)((char *)this + 384);
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
          *((_DWORD *)this + 128) = v7;
        }
      }
    }
  }
  v12 = v33;
  *((_DWORD *)this + 42) = v33;
  *((_DWORD *)this + 43) = (unsigned int)HasAlphaChannel(v12) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v13, (CGdiSpriteBitmap *)((char *)this + 176));
  v16 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v24 = 368;
    goto LABEL_30;
  }
  PixelFormatColorSpace = CGdiSpriteBitmap::HandleSectionChange((PVOID *)this, hObject, v15);
  v16 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v24 = 374;
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 160) == 2 )
  {
    PixelFormatColorSpace = CGdiSpriteBitmap::CreateDeviceBitmap(this, v17, v30, v31);
    v16 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 380;
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v24);
      return v16;
    }
  }
  v18 = *((_BYTE *)this + 516);
  if ( (v18 & 0x40) != 0 && v18 >= 0 )
  {
    PixelFormatColorSpace = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)((char *)this + 144));
    v16 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 389;
      goto LABEL_30;
    }
  }
  return v16;
}
