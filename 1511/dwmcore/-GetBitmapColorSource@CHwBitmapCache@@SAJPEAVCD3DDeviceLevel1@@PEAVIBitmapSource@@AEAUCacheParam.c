/*
 * XREFs of ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18008C2E0
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18002B484 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x18008B380 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800B0760 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 */

__int64 __fastcall CHwBitmapCache::GetBitmapColorSource(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        struct CHwBitmapColorSource::CacheParameters *a3,
        const struct CHwBitmapColorSource::CacheContextParameters *a4,
        struct CHwBitmapCache *a5,
        struct CHwBitmapColorSource **a6,
        struct CHwBitmapColorSource **a7)
{
  CMILPoolResource *v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  int Cache; // eax
  int v16; // eax
  int v17; // eax
  struct IMILResourceCache *v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0LL;
  if ( a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
    goto LABEL_3;
  }
  Cache = CHwBitmapCache::GetCache(a1, a2, 0, &a5);
  if ( Cache >= 0 )
  {
LABEL_3:
    v11 = a5;
    v12 = CHwBitmapCache::ChooseBitmapColorSource(a5, a2, a3, a4, a6, a7);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD0u);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, Cache, 0xC7u);
  *a7 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
          a2,
          &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
          &v18);
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xDCu);
  v17 = CHwBitmapColorSource::Create(a1, v18, a3, 0, a6);
  v13 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE2u);
  v11 = a5;
LABEL_5:
  if ( v18 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v11 )
    CMILPoolResource::Release(v11);
  return v13;
}
