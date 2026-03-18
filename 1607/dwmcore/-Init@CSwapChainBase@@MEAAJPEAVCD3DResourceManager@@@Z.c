/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180079D20
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18007ADA0 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18007A1C8 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  bool v4; // zf
  char *v5; // rax
  char *v6; // rcx
  char **v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // eax
  char *v16; // rax
  char *v17; // rcx
  char **v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-10h]
  unsigned int v20; // [rsp+60h] [rbp+30h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+68h] [rbp+38h] BYREF
  CMILPoolResource *v22; // [rsp+70h] [rbp+40h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  *((_DWORD *)this + 18) = 0;
  v4 = *((_BYTE *)this + 68) == 0;
  *((_BYTE *)this + 77) = 1;
  if ( v4 )
  {
    v5 = (char *)this + 32;
    v6 = (char *)a2 + 32;
    v7 = (char **)*((_QWORD *)a2 + 5);
    if ( *v7 != v6 )
      __fastfail(3u);
    *(_QWORD *)v5 = v6;
    *((_QWORD *)v5 + 1) = v7;
    *v7 = v5;
    *((_QWORD *)v6 + 1) = v5;
  }
  else
  {
    v16 = (char *)a2 + 80;
    v17 = (char *)this + 32;
    v18 = (char **)*((_QWORD *)a2 + 11);
    if ( *v18 != v16 )
      __fastfail(3u);
    *((_QWORD *)v17 + 1) = v18;
    *(_QWORD *)v17 = v16;
    *v18 = v17;
    *((_QWORD *)v16 + 1) = v17;
    CD3DResourceManager::Use(a2, this);
  }
  if ( *((_BYTE *)this + 76) )
    ++*((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 24) += *((_DWORD *)this + 18);
  v8 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v8 )
    *((_DWORD *)a2 + 25) = v8;
  v9 = 0;
  for ( *((_QWORD *)this + 2) = a2; v9 < *((_DWORD *)this + 42); ++v9 )
  {
    v10 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 256LL))(
            this,
            v9,
            &v20,
            &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v19 = 93;
      goto LABEL_35;
    }
    v10 = CD3DSurface::CreateViewOfTexture(a2, v21, &v20, 0, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v19 = 99;
      goto LABEL_35;
    }
    v12 = *((_DWORD *)this + 70);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v13 <= *((_DWORD *)this + 69) )
      {
        *(_QWORD *)(*((_QWORD *)this + 32) + 8LL * v12) = v22;
        *((_DWORD *)this + 70) = v13;
        goto LABEL_14;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 256, 8LL, 1LL, &v22);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x66u);
      goto LABEL_18;
    }
LABEL_14:
    v22 = 0LL;
    if ( v21 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *))v21->lpVtbl->Release)(v21);
      v21 = 0LL;
    }
  }
  v10 = CSwapChainBase::SetupDepthBuffer(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    v19 = 108;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v19);
  }
LABEL_18:
  if ( v21 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    CMILPoolResource::Release(v22);
  return (unsigned int)v11;
}
