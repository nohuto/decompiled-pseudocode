/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180179118
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Initialize(
        CD3DConstantBuffer *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11Buffer *a4)
{
  bool v4; // zf
  struct CD3DResourceManager *v5; // r10
  CD3DConstantBuffer *v6; // r11
  char *v7; // rax
  char *v8; // rcx
  char **v9; // rdx
  char *v10; // rax
  char *v11; // rcx
  char **v12; // rdx
  unsigned int v13; // eax

  v4 = *((_BYTE *)this + 68) == 0;
  v5 = a2;
  v6 = this;
  *((_DWORD *)this + 18) = a3;
  *((_BYTE *)this + 77) = 1;
  if ( v4 )
  {
    v10 = (char *)this + 32;
    v11 = (char *)a2 + 32;
    v12 = (char **)*((_QWORD *)a2 + 5);
    if ( *v12 != v11 )
      __fastfail(3u);
    *(_QWORD *)v10 = v11;
    *((_QWORD *)v10 + 1) = v12;
    *v12 = v10;
    *((_QWORD *)v11 + 1) = v10;
  }
  else
  {
    v7 = (char *)a2 + 80;
    v8 = (char *)this + 32;
    v9 = (char **)*((_QWORD *)a2 + 11);
    if ( *v9 != v7 )
      __fastfail(3u);
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)v8 = v7;
    *v9 = v8;
    *((_QWORD *)v7 + 1) = v8;
    CD3DResourceManager::Use(v5, v6);
  }
  if ( *((_BYTE *)v6 + 76) )
    ++*((_DWORD *)v5 + 30);
  *((_DWORD *)v5 + 24) += *((_DWORD *)v6 + 18);
  v13 = *((_DWORD *)v5 + 24);
  if ( *((_DWORD *)v5 + 25) < v13 )
    *((_DWORD *)v5 + 25) = v13;
  *((_QWORD *)v6 + 2) = v5;
  *((_QWORD *)v6 + 16) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct ID3D11Buffer *))a4->lpVtbl->AddRef)(a4);
  return 0LL;
}
