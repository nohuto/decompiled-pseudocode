/*
 * XREFs of ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 *     ?GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801742F0 (-GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801743D0 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z @ 0x1801319E4 (--0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18013289C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180132A1C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 */

__int64 __fastcall CRenderTargetImageSource::CreateSingleAdapter(
        struct IRenderTarget *a1,
        struct CRenderTargetImageSource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CRenderTargetImageSource *v6; // rax
  struct CRenderTargetImageSource *v7; // rdi
  bool v8; // sf
  __int64 v9; // rax
  int v10; // eax
  int v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-50h]
  struct CRenderTargetImageSource *v14; // [rsp+30h] [rbp-40h] BYREF
  struct IRenderTargetBitmap *v15; // [rsp+38h] [rbp-38h] BYREF
  struct IRenderTargetDisplay *v16; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD, struct _GUID *))(*(_QWORD *)a1 + 104LL))(
         a1,
         v17,
         0LL,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x16u);
    return v5;
  }
  v6 = (CRenderTargetImageSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     224LL);
  if ( v6 )
    v7 = CRenderTargetImageSource::CRenderTargetImageSource(v6, &v18);
  else
    v7 = 0LL;
  v14 = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    v13 = 27;
    v11 = -2147024882;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
         a1,
         &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
         &v15) < 0;
  v9 = *(_QWORD *)a1;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v9)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v16);
    v5 = v10;
    if ( v10 < 0 )
    {
      v13 = 38;
      goto LABEL_9;
    }
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
    v10 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v7 + 8), v16);
    v5 = v10;
    if ( v10 < 0 )
    {
      v13 = 41;
      goto LABEL_9;
    }
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTarget *))(v9 + 16))(a1);
    v10 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v7 + 8), v15);
    v5 = v10;
    if ( v10 < 0 )
    {
      v13 = 33;
LABEL_9:
      v11 = v10;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
      goto LABEL_17;
    }
  }
  v14 = 0LL;
  *a2 = v7;
LABEL_17:
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v14);
  return v5;
}
