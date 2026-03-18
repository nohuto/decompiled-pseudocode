/*
 * XREFs of ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x180018318
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x180056C48 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x18005EA58 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  struct CHwBitmapCache *v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  int Cache; // eax
  int v16; // eax
  int v17; // eax
  void (__fastcall ***v18)(_QWORD, struct CHwBitmapCache *); // r14
  struct IMILResourceCache *v19; // [rsp+38h] [rbp-10h] BYREF

  v19 = 0LL;
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
          &v19);
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xDCu);
  v17 = CHwBitmapColorSource::Create(a1, v19, a3, 0, a6);
  v13 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE2u);
  v11 = a5;
LABEL_5:
  if ( v19 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
  {
    v18 = (void (__fastcall ***)(_QWORD, struct CHwBitmapCache *))*((_QWORD *)a5 + 2);
    if ( v18 )
      (**v18)(*((_QWORD *)a5 + 2), a5);
    else
      (*(void (__fastcall **)(struct CHwBitmapCache *, __int64))(*(_QWORD *)a5 + 16LL))(a5, 1LL);
  }
  return v13;
}
