/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18001503C
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18001467C (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x180015A9C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v4; // rsi
  enum DXGI_FORMAT v9; // ecx
  int v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  struct CD3DResourceManager *v13; // rax
  struct CD3DResourceManager **v14; // rdx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  unsigned int v21; // ecx
  int *v22; // r15
  struct CD3DResourceManager **v23; // r8
  __int64 v24; // rcx
  unsigned __int32 v25; // edx
  unsigned int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+34h] [rbp-1Ch]
  int v29; // [rsp+3Ch] [rbp-14h]
  int v30; // [rsp+40h] [rbp-10h]
  __int64 v31; // [rsp+90h] [rbp+40h] BYREF
  char v32; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *((_QWORD *)this + 17);
  v31 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this + 148);
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
    v26 = 232;
    goto LABEL_38;
  }
  *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 48LL))(this);
  v13 = (CD3DSurface *)((char *)this + 32);
  *((_BYTE *)this + 76) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v23 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
    *(_QWORD *)v13 = (char *)a2 + 80;
    *((_QWORD *)this + 5) = v23;
    if ( *v23 != (struct CD3DResourceManager *)((char *)a2 + 80) )
      __fastfail(3u);
    *v23 = v13;
    *((_QWORD *)a2 + 11) = v13;
    CD3DResourceManager::Use(a2, this);
  }
  else
  {
    v14 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    *(_QWORD *)v13 = (char *)a2 + 32;
    *((_QWORD *)this + 5) = v14;
    if ( *v14 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *v14 = v13;
    *((_QWORD *)a2 + 5) = v13;
  }
  v15 = *((_DWORD *)this + 18);
  if ( g_pMediaControl )
  {
    v24 = *((_QWORD *)g_pMediaControl + 2);
    v25 = v15 + _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 68), v15);
    if ( v25 > *(_DWORD *)(v24 + 76) )
      _InterlockedExchange((volatile __int32 *)(v24 + 76), v25);
  }
  *((_DWORD *)a2 + 24) += v15;
  v16 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v16 )
    *((_DWORD *)a2 + 25) = v16;
  *((_QWORD *)this + 2) = a2;
  if ( !a3 )
  {
    v17 = *(_QWORD *)this;
    v31 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(CD3DSurface *))(v17 + 24))(this) )
    {
      v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17))(
              *((_QWORD *)this + 17),
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v31);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x130u);
      v12 = v19;
      if ( v19 >= 0 )
      {
        PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 72LL))(v31, &v32);
        v12 = PixelFormatColorSpace;
        if ( PixelFormatColorSpace < 0 )
        {
          v26 = 248;
          goto LABEL_38;
        }
        a3 = &v32;
        goto LABEL_16;
      }
    }
    else
    {
      v19 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x12Bu);
      v12 = -2003292412;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF6u);
    goto LABEL_17;
  }
LABEL_16:
  if ( (*((_BYTE *)this + 180) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v21 = *((_DWORD *)this + 40);
    if ( v21 > 1 )
    {
      v27 = *((_DWORD *)this + 41);
      v29 = *((_DWORD *)this + 36);
      v28 = 5LL;
      v30 = 1;
    }
    v22 = &v27;
    if ( v21 <= 1 )
      v22 = 0LL;
    PixelFormatColorSpace = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 544LL)
                                                                                     + 72LL))(
                              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 544LL),
                              *((_QWORD *)this + 17),
                              v22,
                              (char *)this + 200);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 272;
LABEL_38:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v26);
    }
  }
LABEL_17:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v12;
}
