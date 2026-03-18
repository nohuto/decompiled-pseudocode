/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180056B60
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // esi
  struct CHwBitmapCache *v7; // rax
  struct CHwBitmapCache *v8; // rdi
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct CHwBitmapCache *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v4 = *((_DWORD *)a2 + 104);
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v11 = 92;
    v10 = -2147467259;
    goto LABEL_16;
  }
  v5 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a1)(
         a1,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 95;
LABEL_14:
    v10 = v5;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
    v8 = v12;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v13 + 24LL))(v13, v4, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 98;
    goto LABEL_14;
  }
  v7 = v12;
  if ( v12 )
    v7 = (struct CHwBitmapCache *)((char *)v12 - 128);
  v8 = 0LL;
  *a3 = v7;
  v12 = 0LL;
LABEL_7:
  if ( v8 )
    (*(void (__fastcall **)(struct CHwBitmapCache *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
