/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180084B40
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180084C64 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x180015A9C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // ebp
  int v7; // r15d
  unsigned int v8; // r12d
  int v9; // ecx
  struct CD3DResourceManager **v10; // rdx
  struct CD3DResourceManager *v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  struct CD3DResourceManager **v15; // rdx
  struct CD3DResourceManager *v16; // rcx
  __int64 v17; // rcx
  unsigned __int32 v18; // edx
  _DWORD v19[12]; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)this + 48) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v19);
      v9 = GetPixelFormatSize(v19[4]) >> 3;
      if ( !v9 )
        break;
      ++v8;
      v7 += v9 * v19[0] * v19[1];
      if ( v8 >= *((_DWORD *)this + 48) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xA5u);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 18) = v7;
    *((_BYTE *)this + 76) = 1;
    if ( *((_BYTE *)this + 68) )
    {
      v15 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
      v16 = (CD3DTexture *)((char *)this + 32);
      *((_QWORD *)this + 4) = (char *)a2 + 80;
      *((_QWORD *)this + 5) = v15;
      if ( *v15 != (struct CD3DResourceManager *)((char *)a2 + 80) )
        __fastfail(3u);
      *v15 = v16;
      *((_QWORD *)a2 + 11) = v16;
      CD3DResourceManager::Use(a2, this);
    }
    else
    {
      v10 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
      v11 = (CD3DTexture *)((char *)this + 32);
      *((_QWORD *)this + 4) = (char *)a2 + 32;
      *((_QWORD *)this + 5) = v10;
      if ( *v10 != (struct CD3DResourceManager *)((char *)a2 + 32) )
        __fastfail(3u);
      *v10 = v11;
      *((_QWORD *)a2 + 5) = v11;
    }
    v12 = *((_DWORD *)this + 18);
    if ( g_pMediaControl )
    {
      v17 = *((_QWORD *)g_pMediaControl + 2);
      v18 = v12 + _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 68), v12);
      if ( v18 > *(_DWORD *)(v17 + 76) )
        _InterlockedExchange((volatile __int32 *)(v17 + 76), v18);
    }
    v13 = v12 + *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v13;
    if ( *((_DWORD *)a2 + 25) < v13 )
      *((_DWORD *)a2 + 25) = v13;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 16) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
