/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018F1A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18009FB10 (-GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018FCDC (-HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // rsi
  CDxHandleBitmapRealization *v6; // rdi
  __int64 (__fastcall *v9)(CDxHandleBitmapRealization *); // rax
  CDxHandleBitmapRealization *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int BitmapInternalNoRef; // eax
  struct ID3D11ShaderResourceViewVtbl *lpVtbl; // rax
  int ShaderResourceViewNoRef; // eax
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-28h]

  v5 = a5;
  v6 = (CDxHandleBitmapRealization *)(a1 - 112);
  *a5 = 0LL;
  v9 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)(a1 - 112) + 112LL);
  v10 = (CDxHandleBitmapRealization *)(a1 - 112);
  if ( v9 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v11 = CDxHandleBitmapRealization::EnsureD2DBitmap(v10);
  else
    v11 = v9(v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 177;
LABEL_25:
    v19 = v12;
    goto LABEL_26;
  }
  v13 = *(_DWORD *)(a1 + 60);
  if ( v13 == 3 || v13 == 12 || v13 == 14 || v13 == 17 )
  {
    v18 = CDxHandleBitmapRealization::HDRConvertToDecodeBitmap(v6);
    v12 = v18;
    if ( v18 < 0 )
    {
      v20 = 187;
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, struct ID3D11ShaderResourceView **))(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 112LL) + 120LL))(
              *(_QWORD *)(a1 + 248) + 112LL,
              a2,
              a3,
              a4,
              v5);
      v12 = v18;
      if ( v18 >= 0 )
        return v12;
      v20 = 192;
    }
    v19 = v18;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
    return v12;
  }
  a5 = 0LL;
  *v5 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v6, (__int64)&a5);
  v12 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0xA2u);
    goto LABEL_17;
  }
  lpVtbl = (*a5)[10].lpVtbl;
  if ( lpVtbl == (struct ID3D11ShaderResourceViewVtbl *)CD2DBitmap::GetShaderResourceViewNoRef )
    ShaderResourceViewNoRef = CD2DBitmap::GetShaderResourceViewNoRef((CD2DBitmap *)a5, v5);
  else
    ShaderResourceViewNoRef = ((__int64 (__fastcall *)(struct ID3D11ShaderResourceView **, struct ID3D11ShaderResourceView **))lpVtbl)(
                                a5,
                                v5);
  v12 = ShaderResourceViewNoRef;
  if ( ShaderResourceViewNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0xA7u);
LABEL_17:
    if ( (v12 & 0x80000000) == 0 )
      return v12;
    v20 = 183;
    goto LABEL_25;
  }
  return v12;
}
