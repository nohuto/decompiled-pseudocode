/*
 * XREFs of ?GetSurfaceSize@CEffectBrush@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18013BF88
 * Callers:
 *     ?ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B2AC (-ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@P.c)
 *     ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4 (-ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUInt.c)
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_F __fastcall CEffectBrush::GetSurfaceSize(struct IImageSource *a1)
{
  __m128 v2; // xmm7
  __m128 v3; // xmm6
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = 0;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v7);
  if ( (*(int (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v7) >= 0 )
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v7 + 24LL))(v7, &v5, &v6);
  v2 = 0LL;
  v3 = 0LL;
  v2.m128_f32[0] = (float)v5;
  v3.m128_f32[0] = (float)v6;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v7);
  return (struct D2D_SIZE_F)_mm_unpacklo_ps(v2, v3).m128_u64[0];
}
