/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x18002C32C (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x180031C78 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180031E28 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180031F60 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18005DBF8 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077160 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180149154 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::SetBitmapAndContext(
        CHwBitmapColorSource *this,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        struct MILMatrix3x2 *a7,
        struct BitmapToXSpaceTransform *a8,
        __int64 a9,
        struct CHwBitmapColorSource *a10)
{
  __int64 v10; // rbp
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  CBitmapOfDeviceBitmaps *v19; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v10 = a9;
  v20 = 0LL;
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(this);
  *(_OWORD *)((char *)this + 188) = *(_OWORD *)((char *)this + 120);
  if ( !*(_BYTE *)(v10 + 88) )
  {
    v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
    if ( v13 )
    {
      if ( (**v13)(*((_QWORD *)this + 26), &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v20) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 80LL))(v20) == 3 )
      {
        v19 = v20 ? (CBitmapOfDeviceBitmaps *)(v20 - 16) : 0LL;
        if ( !a10
          || CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
               v19,
               *(struct _LUID *)(*((_QWORD *)this + 2) + 584LL)) )
        {
          CHwBitmapColorSource::ComputeMinimumRealizationBounds(a3, v10 + 72, (char *)this + 188);
        }
      }
    }
  }
  CHwBitmapColorSource::CheckAndSetReusableSources(this, a10);
  v14 = a5;
  if ( (a5 != 0) != *((_BYTE *)this + 280) || a5 != 0 && !(unsigned __int8)CColorKey::operator==((char *)this + 284) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  if ( v14 )
  {
    *(_OWORD *)((char *)this + 284) = *(_OWORD *)v14;
    *(_OWORD *)((char *)this + 300) = *(_OWORD *)(v14 + 16);
    *((_DWORD *)this + 79) = *(_DWORD *)(v14 + 32);
    *((_BYTE *)this + 280) = 1;
  }
  else
  {
    *((_BYTE *)this + 280) = 0;
  }
  v15 = a6;
  *((_DWORD *)this + 34) = *(_DWORD *)(v10 + 76);
  *((_DWORD *)this + 35) = *(_DWORD *)(v10 + 80);
  CHwTexturedColorSource::SetFilterMode((__int64)this, *(_DWORD *)(v10 + 72), v15);
  v16 = CHwBitmapColorSource::CalcTextureTransform(this, a7, a8);
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x983u);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v17;
}
