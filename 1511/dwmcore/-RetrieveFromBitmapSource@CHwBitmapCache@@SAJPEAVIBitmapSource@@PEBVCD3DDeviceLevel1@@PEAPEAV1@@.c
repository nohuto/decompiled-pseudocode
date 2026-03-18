/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180089BF4
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18008A950 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // r14d
  int v5; // eax
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **); // rdi
  int Resource; // eax
  struct CHwBitmapCache *v9; // rax
  struct IMILCacheableResource *v10; // rdi
  unsigned int v12; // [rsp+20h] [rbp-10h]
  struct IMILCacheableResource *v13; // [rsp+68h] [rbp+38h] BYREF
  CMILResourceCache *v14; // [rsp+70h] [rbp+40h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v4 = *((_DWORD *)a2 + 102);
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v12 = 92;
    goto LABEL_19;
  }
  v5 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, CMILResourceCache **))a1)(
         a1,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5Fu);
LABEL_20:
    v10 = v13;
    goto LABEL_9;
  }
  v7 = *(__int64 (__fastcall **)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **))(*(_QWORD *)v14 + 24LL);
  if ( v7 == CMILResourceCache::GetResource )
    Resource = CMILResourceCache::GetResource(v14, v4, &v13);
  else
    Resource = v7(v14, v4, &v13);
  v6 = Resource;
  if ( Resource < 0 )
  {
    v12 = 98;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v12);
    goto LABEL_20;
  }
  v9 = v13;
  if ( v13 )
    v9 = (struct IMILCacheableResource *)((char *)v13 - 128);
  v10 = 0LL;
  *a3 = v9;
  v13 = 0LL;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v14 )
    (*(void (__fastcall **)(CMILResourceCache *))(*(_QWORD *)v14 + 16LL))(v14);
  return v6;
}
