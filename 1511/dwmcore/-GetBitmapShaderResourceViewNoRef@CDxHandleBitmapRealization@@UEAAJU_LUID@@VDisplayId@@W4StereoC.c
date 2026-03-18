/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800326A0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18007AA50 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015D7D0 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?GetSRVNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180030AF0 (-GetSRVNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        struct _LUID a2,
        int a3,
        __int64 a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // rsi
  CD2DBitmapCache *v6; // rdi
  __int64 (__fastcall *v7)(CDxHandleBitmapRealization *__hidden); // rbx
  int v8; // eax
  int v9; // ebx
  int BitmapInternalNoRef; // eax
  struct ID3D11ShaderResourceViewVtbl *lpVtbl; // rdi
  int SRVNoRef; // eax

  v5 = a5;
  v6 = (CD2DBitmapCache *)(a1 - 112);
  *a5 = 0LL;
  v7 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(a1 - 112) + 112LL);
  if ( v7 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v8 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)(a1 - 112));
  else
    v8 = v7((CDxHandleBitmapRealization *)(a1 - 112));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8Fu);
    return (unsigned int)v9;
  }
  a5 = 0LL;
  *v5 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v6, a2, a3, 0LL, &a5);
  v9 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0xA2u);
    goto LABEL_14;
  }
  lpVtbl = (*a5)[10].lpVtbl;
  if ( lpVtbl == (struct ID3D11ShaderResourceViewVtbl *)CD2DBitmap::GetSRVNoRef )
    SRVNoRef = CD2DBitmap::GetSRVNoRef((CD2DBitmap *)a5, v5);
  else
    SRVNoRef = ((__int64 (__fastcall *)(struct ID3D11ShaderResourceView **, struct ID3D11ShaderResourceView **))lpVtbl)(
                 a5,
                 v5);
  v9 = SRVNoRef;
  if ( SRVNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SRVNoRef, 0xA7u);
LABEL_14:
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x95u);
  }
  return (unsigned int)v9;
}
