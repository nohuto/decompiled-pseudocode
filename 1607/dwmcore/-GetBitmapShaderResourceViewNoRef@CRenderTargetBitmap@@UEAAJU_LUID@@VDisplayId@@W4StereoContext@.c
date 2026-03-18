/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801322D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18010EF8C (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourc.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180131FEC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180173264 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // r14
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  int ShaderResourceViewNoRef; // eax
  struct ID3D11ShaderResourceView **v13; // rsi
  _QWORD *v14; // rbx
  struct ID3D11ShaderResourceView *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-18h]

  v5 = a5;
  *a5 = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v7 = -2003292404;
    v19 = 273;
LABEL_3:
    v8 = v7;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v19);
    return v7;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    v9 = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 112, a2, a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      v19 = 284;
      goto LABEL_23;
    }
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      a5 = 0LL;
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&a5);
      v11 = (*(__int64 (__fastcall **)(__int64, struct ID3D11ShaderResourceView ***))(*(_QWORD *)v10 + 192LL))(v10, &a5);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x122u);
      }
      else
      {
        ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef((CD3DTexture *)a5, v5);
        v7 = ShaderResourceViewNoRef;
        if ( ShaderResourceViewNoRef < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x123u);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      v13 = (struct ID3D11ShaderResourceView **)(a1 + 40);
      if ( !*(_QWORD *)(a1 + 40) )
      {
        v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32));
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14) )
        {
          CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)(a1 - 112));
          v7 = -2003304307;
          v19 = 303;
          goto LABEL_3;
        }
        v15 = *v13;
        v16 = v14[17];
        if ( *v13 )
        {
          *v13 = 0LL;
          ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v15->lpVtbl->Release)(v15);
        }
        v17 = *(_QWORD *)(*(_QWORD *)(v14[2] + 128LL) + 568LL);
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct ID3D11ShaderResourceView **))(*(_QWORD *)v17 + 56LL))(
               v17,
               v16,
               0LL,
               v13);
        v7 = v9;
        if ( v9 < 0 )
        {
          v19 = 307;
          goto LABEL_23;
        }
      }
      *v5 = *v13;
    }
  }
  else
  {
    v9 = CD2DBitmapCache::GetShaderResourceViewNoRef((CD2DBitmapCache *)(a1 - 112), (struct _LUID)a2, a3, v5);
    v7 = v9;
    if ( v9 < 0 )
    {
      v19 = 280;
LABEL_23:
      v8 = v9;
      goto LABEL_24;
    }
  }
  return v7;
}
