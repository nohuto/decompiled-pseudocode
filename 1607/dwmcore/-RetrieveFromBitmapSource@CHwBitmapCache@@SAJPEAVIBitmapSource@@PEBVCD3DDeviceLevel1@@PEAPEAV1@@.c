/*
 * XREFs of ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A5F30
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::RetrieveFromBitmapSource(
        struct IBitmapSource *a1,
        const struct CD3DDeviceLevel1 *a2,
        struct CHwBitmapCache **a3)
{
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  struct CHwBitmapCache *v7; // rax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct CHwBitmapCache *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v4 = *((_DWORD *)a2 + 108);
  if ( v4 == -1 )
  {
    v6 = -2147467259;
    v10 = 92;
    v9 = -2147467259;
  }
  else
  {
    v5 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a1)(
           a1,
           &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v10 = 95;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v12 + 24LL))(v12, v4, &v11);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = v11;
        if ( v11 )
          v7 = (struct CHwBitmapCache *)((char *)v11 - 128);
        v11 = 0LL;
        *a3 = v7;
        goto LABEL_7;
      }
      v10 = 98;
    }
    v9 = v5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v10);
  if ( v11 )
    (*(void (__fastcall **)(struct CHwBitmapCache *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_7:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v6;
}
