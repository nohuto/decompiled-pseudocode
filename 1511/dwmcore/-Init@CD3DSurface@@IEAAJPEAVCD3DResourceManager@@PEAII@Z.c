/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180029E6C
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18002AA38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180029E30 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v4; // rsi
  enum DXGI_FORMAT v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(enum DXGI_FORMAT *); // rbx
  int ResourceSize; // eax
  struct CD3DResourceManager *v15; // rax
  struct CD3DResourceManager **v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // ebx
  unsigned int v23; // ecx
  int *v24; // r15
  struct CD3DResourceManager **v25; // r8
  __int64 v26; // rcx
  unsigned __int32 v27; // edx
  unsigned int v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+34h] [rbp-1Ch]
  int v31; // [rsp+3Ch] [rbp-14h]
  int v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  char v34; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *((_QWORD *)this + 17);
  v33 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this + 148);
  if ( a4 >= *((_DWORD *)this + 40) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD5u);
    goto LABEL_19;
  }
  v9 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 36) = a4;
  *((_DWORD *)this + 48) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (CD3DSurface *)((char *)this + 196));
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v28 = 232;
    goto LABEL_41;
  }
  v13 = *(__int64 (__fastcall **)(enum DXGI_FORMAT *))(*(_QWORD *)this + 48LL);
  if ( v13 == CD3DSurface::GetResourceSize )
    ResourceSize = CD3DSurface::GetResourceSize((enum DXGI_FORMAT *)this);
  else
    ResourceSize = v13((enum DXGI_FORMAT *)this);
  *((_DWORD *)this + 18) = ResourceSize;
  v15 = (CD3DSurface *)((char *)this + 32);
  *((_BYTE *)this + 76) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v25 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
    *(_QWORD *)v15 = (char *)a2 + 80;
    *((_QWORD *)this + 5) = v25;
    if ( *v25 != (struct CD3DResourceManager *)((char *)a2 + 80) )
      __fastfail(3u);
    *v25 = v15;
    *((_QWORD *)a2 + 11) = v15;
    CD3DResourceManager::Use(a2, this);
  }
  else
  {
    v16 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    *(_QWORD *)v15 = (char *)a2 + 32;
    *((_QWORD *)this + 5) = v16;
    if ( *v16 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *v16 = v15;
    *((_QWORD *)a2 + 5) = v15;
  }
  v17 = *((_DWORD *)this + 18);
  if ( g_pMediaControl )
  {
    v26 = *((_QWORD *)g_pMediaControl + 2);
    v27 = v17 + _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 68), v17);
    if ( v27 > *(_DWORD *)(v26 + 76) )
      _InterlockedExchange((volatile __int32 *)(v26 + 76), v27);
  }
  *((_DWORD *)a2 + 24) += v17;
  v18 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v18 )
    *((_DWORD *)a2 + 25) = v18;
  *((_QWORD *)this + 2) = a2;
  if ( !a3 )
  {
    v19 = *(_QWORD *)this;
    v33 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(CD3DSurface *))(v19 + 24))(this) )
    {
      v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17))(
              *((_QWORD *)this + 17),
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v33);
      v21 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x130u);
      v12 = v21;
      if ( v21 >= 0 )
      {
        PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 72LL))(v33, &v34);
        v12 = PixelFormatColorSpace;
        if ( PixelFormatColorSpace < 0 )
        {
          v28 = 248;
          goto LABEL_41;
        }
        a3 = &v34;
        goto LABEL_18;
      }
    }
    else
    {
      v21 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x12Bu);
      v12 = -2003292412;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF6u);
    goto LABEL_19;
  }
LABEL_18:
  if ( (*((_BYTE *)this + 180) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v23 = *((_DWORD *)this + 40);
    if ( v23 > 1 )
    {
      v29 = *((_DWORD *)this + 41);
      v31 = *((_DWORD *)this + 36);
      v30 = 5LL;
      v32 = 1;
    }
    v24 = &v29;
    if ( v23 <= 1 )
      v24 = 0LL;
    PixelFormatColorSpace = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL)
                                                                                     + 72LL))(
                              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL),
                              *((_QWORD *)this + 17),
                              v24,
                              (char *)this + 200);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v28 = 272;
LABEL_41:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v28);
    }
  }
LABEL_19:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return v12;
}
