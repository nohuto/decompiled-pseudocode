/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180072950
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180073D40 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18002AA38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180072E4C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  bool v4; // zf
  char *v5; // rax
  char *v6; // rcx
  char **v7; // rdx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v16; // eax
  int v17; // ebx
  char *v18; // rax
  char *v19; // rcx
  char **v20; // rdx
  __int64 v21; // rcx
  unsigned __int32 v22; // r8d
  unsigned int v23; // [rsp+20h] [rbp-10h]
  unsigned int v24; // [rsp+70h] [rbp+40h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+78h] [rbp+48h] BYREF
  CMILPoolResource *v26; // [rsp+80h] [rbp+50h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  *((_DWORD *)this + 18) = 0;
  v4 = *((_BYTE *)this + 68) == 0;
  *((_BYTE *)this + 76) = 1;
  if ( v4 )
  {
    v5 = (char *)this + 32;
    v6 = (char *)a2 + 32;
    v7 = (char **)*((_QWORD *)a2 + 5);
    *(_QWORD *)v5 = v6;
    *((_QWORD *)v5 + 1) = v7;
    if ( *v7 != v6 )
      __fastfail(3u);
    *v7 = v5;
    *((_QWORD *)v6 + 1) = v5;
  }
  else
  {
    v18 = (char *)a2 + 80;
    v19 = (char *)this + 32;
    v20 = (char **)*((_QWORD *)a2 + 11);
    *(_QWORD *)v19 = v18;
    *((_QWORD *)v19 + 1) = v20;
    if ( *v20 != v18 )
      __fastfail(3u);
    *v20 = v19;
    *((_QWORD *)v18 + 1) = v19;
    CD3DResourceManager::Use(a2, this);
  }
  v8 = *((_DWORD *)this + 18);
  if ( g_pMediaControl )
  {
    v21 = *((_QWORD *)g_pMediaControl + 2);
    v22 = v8 + _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 68), v8);
    if ( v22 > *(_DWORD *)(v21 + 76) )
      _InterlockedExchange((volatile __int32 *)(v21 + 76), v22);
  }
  *((_DWORD *)a2 + 24) += v8;
  v9 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v9 )
    *((_DWORD *)a2 + 25) = v9;
  v10 = 0;
  *((_QWORD *)this + 2) = a2;
  if ( *((_DWORD *)this + 42) )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 256LL))(
              this,
              v10,
              &v24,
              &v25);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v11 = CD3DSurface::CreateViewOfTexture(a2, v25, (char *)&v24, 0, &v26);
      v12 = v11;
      if ( v11 < 0 )
      {
        v23 = 99;
        goto LABEL_37;
      }
      v13 = *((_DWORD *)this + 70);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v17 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v12 = -2147024362;
LABEL_33:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x66u);
        goto LABEL_17;
      }
      if ( v14 > *((_DWORD *)this + 69) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 256, 8LL, 1LL, &v26);
        v17 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
        v12 = v17;
        if ( v17 < 0 )
          goto LABEL_33;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 32) + 8LL * v13) = v26;
        *((_DWORD *)this + 70) = v14;
      }
      v26 = 0LL;
      if ( v25 )
      {
        ((void (__fastcall *)(struct ID3D11Texture2D *))v25->lpVtbl->Release)(v25);
        v25 = 0LL;
      }
      if ( ++v10 >= *((_DWORD *)this + 42) )
        goto LABEL_16;
    }
    v23 = 93;
  }
  else
  {
LABEL_16:
    v11 = CSwapChainBase::SetupDepthBuffer(this);
    v12 = v11;
    if ( v11 >= 0 )
      goto LABEL_17;
    v23 = 108;
  }
LABEL_37:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v23);
LABEL_17:
  if ( v25 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    CMILPoolResource::Release(v26);
  return v12;
}
