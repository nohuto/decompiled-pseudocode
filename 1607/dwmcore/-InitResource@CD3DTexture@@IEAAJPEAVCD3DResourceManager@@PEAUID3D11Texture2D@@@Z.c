/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180081390
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800814A4 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // esi
  int v7; // ebp
  unsigned int v8; // r15d
  int v9; // ecx
  struct CD3DResourceManager **v10; // rdx
  struct CD3DResourceManager *v11; // rax
  unsigned int v12; // eax
  struct CD3DResourceManager **v14; // rdx
  struct CD3DResourceManager *v15; // rcx
  _DWORD v16[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)this + 48) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v16);
      v9 = GetPixelFormatSize((enum DXGI_FORMAT)v16[4]) >> 3;
      if ( !v9 )
        break;
      ++v8;
      v7 += v9 * v16[0] * v16[1];
      if ( v8 >= *((_DWORD *)this + 48) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xA8u);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 18) = v7;
    *((_BYTE *)this + 77) = 1;
    if ( *((_BYTE *)this + 68) )
    {
      v14 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
      v15 = (CD3DTexture *)((char *)this + 32);
      if ( *v14 != (struct CD3DResourceManager *)((char *)a2 + 80) )
        __fastfail(3u);
      *((_QWORD *)this + 5) = v14;
      *(_QWORD *)v15 = (char *)a2 + 80;
      *v14 = v15;
      *((_QWORD *)a2 + 11) = v15;
      CD3DResourceManager::Use(a2, this);
    }
    else
    {
      v10 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
      v11 = (CD3DTexture *)((char *)this + 32);
      if ( *v10 != (struct CD3DResourceManager *)((char *)a2 + 32) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)a2 + 32;
      *((_QWORD *)this + 5) = v10;
      *v10 = v11;
      *((_QWORD *)a2 + 5) = v11;
    }
    if ( *((_BYTE *)this + 76) )
      ++*((_DWORD *)a2 + 30);
    v12 = *((_DWORD *)a2 + 24) + *((_DWORD *)this + 18);
    *((_DWORD *)a2 + 24) = v12;
    if ( *((_DWORD *)a2 + 25) < v12 )
      *((_DWORD *)a2 + 25) = v12;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 16) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
