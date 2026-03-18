/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180138E94
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180138B68 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x180138D04 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x180015A9C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DConstantBuffer::Initialize(
        CD3DConstantBuffer *this,
        struct CD3DResourceManager *a2,
        __int64 a3,
        struct ID3D11Buffer *a4)
{
  bool v4; // zf
  struct CD3DResourceManager *v6; // r10
  CD3DConstantBuffer *v7; // r11
  char *v8; // rax
  char *v9; // rcx
  char **v10; // rdx
  char *v11; // rax
  char *v12; // rcx
  char **v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax

  v4 = *((_BYTE *)this + 68) == 0;
  v6 = a2;
  *((_DWORD *)this + 18) = a3;
  v7 = this;
  *((_BYTE *)this + 76) = 1;
  if ( v4 )
  {
    v11 = (char *)this + 32;
    v12 = (char *)a2 + 32;
    v13 = (char **)*((_QWORD *)a2 + 5);
    *(_QWORD *)v11 = v12;
    *((_QWORD *)v11 + 1) = v13;
    if ( *v13 != v12 )
      __fastfail(3u);
    *v13 = v11;
    *((_QWORD *)v12 + 1) = v11;
  }
  else
  {
    v8 = (char *)a2 + 80;
    v9 = (char *)this + 32;
    v10 = (char **)*((_QWORD *)a2 + 11);
    *(_QWORD *)v9 = v8;
    *((_QWORD *)v9 + 1) = v10;
    if ( *v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *((_QWORD *)v8 + 1) = v9;
    CD3DResourceManager::Use(v6, v7);
  }
  v14 = *((unsigned int *)v7 + 18);
  if ( g_pMediaControl )
  {
    v15 = *((_QWORD *)g_pMediaControl + 2);
    a3 = (unsigned int)(v14 + _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 68), v14));
    if ( (unsigned int)a3 > *(_DWORD *)(v15 + 76) )
      a3 = (unsigned int)_InterlockedExchange((volatile __int32 *)(v15 + 76), a3);
  }
  *((_DWORD *)v6 + 24) += v14;
  v16 = *((_DWORD *)v6 + 24);
  if ( *((_DWORD *)v6 + 25) < v16 )
    *((_DWORD *)v6 + 25) = v16;
  *((_QWORD *)v7 + 2) = v6;
  *((_QWORD *)v7 + 16) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct ID3D11Buffer *, __int64, __int64))a4->lpVtbl->AddRef)(a4, v14, a3);
  return 0LL;
}
