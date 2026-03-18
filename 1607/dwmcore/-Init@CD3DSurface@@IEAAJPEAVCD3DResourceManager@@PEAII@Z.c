/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180079948
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180079800 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180079C4C (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  enum DXGI_FORMAT v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(enum DXGI_FORMAT *); // rax
  int ResourceSize; // eax
  struct CD3DResourceManager **v15; // rdx
  struct CD3DResourceManager *v16; // rax
  unsigned int v17; // eax
  unsigned int v19; // ecx
  int *v20; // r8
  __int64 v21; // rcx
  struct CD3DResourceManager **v22; // r8
  struct CD3DResourceManager *v23; // rdx
  unsigned int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+34h] [rbp-1Ch]
  int v27; // [rsp+3Ch] [rbp-14h]
  int v28; // [rsp+40h] [rbp-10h]
  struct IDXGIResource *v29; // [rsp+80h] [rbp+30h] BYREF
  char v30; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 17);
  v29 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 148);
  if ( a4 >= *((_DWORD *)this + 40) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD5u);
    goto LABEL_17;
  }
  v9 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 36) = a4;
  *((_DWORD *)this + 48) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (CD3DSurface *)((char *)this + 196));
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v24 = 232;
    goto LABEL_36;
  }
  v13 = *(__int64 (__fastcall **)(enum DXGI_FORMAT *))(*(_QWORD *)this + 48LL);
  if ( v13 == CD3DSurface::GetResourceSize )
    ResourceSize = CD3DSurface::GetResourceSize((enum DXGI_FORMAT *)this);
  else
    ResourceSize = v13((enum DXGI_FORMAT *)this);
  *((_DWORD *)this + 18) = ResourceSize;
  *((_BYTE *)this + 77) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v22 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
    v23 = (CD3DSurface *)((char *)this + 32);
    if ( *v22 != (struct CD3DResourceManager *)((char *)a2 + 80) )
      __fastfail(3u);
    *(_QWORD *)v23 = (char *)a2 + 80;
    *((_QWORD *)this + 5) = v22;
    *v22 = v23;
    *((_QWORD *)a2 + 11) = v23;
    CD3DResourceManager::Use(a2, this);
  }
  else
  {
    v15 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    v16 = (CD3DSurface *)((char *)this + 32);
    if ( *v15 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a2 + 32;
    *((_QWORD *)this + 5) = v15;
    *v15 = v16;
    *((_QWORD *)a2 + 5) = v16;
  }
  if ( *((_BYTE *)this + 76) )
    ++*((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 24) += *((_DWORD *)this + 18);
  v17 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v17 )
    *((_DWORD *)a2 + 25) = v17;
  *((_QWORD *)this + 2) = a2;
  if ( !a3 )
  {
    PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v29);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 246;
      goto LABEL_36;
    }
    PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, char *))v29->lpVtbl->GetUsage)(v29, &v30);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 248;
      goto LABEL_36;
    }
    a3 = &v30;
  }
  if ( (*((_BYTE *)this + 180) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v19 = *((_DWORD *)this + 40);
    if ( v19 > 1 )
    {
      v25 = *((_DWORD *)this + 41);
      v27 = *((_DWORD *)this + 36);
      v26 = 5LL;
      v28 = 1;
    }
    v20 = &v25;
    if ( v19 <= 1 )
      v20 = 0LL;
    v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 568LL);
    PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, char *))(*(_QWORD *)v21 + 72LL))(
                              v21,
                              *((_QWORD *)this + 17),
                              v20,
                              (char *)this + 200);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v24 = 272;
LABEL_36:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v24);
    }
  }
LABEL_17:
  if ( v29 )
    ((void (__fastcall *)(struct IDXGIResource *))v29->lpVtbl->Release)(v29);
  return v12;
}
