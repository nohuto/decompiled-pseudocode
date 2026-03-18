/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180025240 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180082D70 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1800AB40C (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180179988 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18017E274 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017E3F0 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 */

__int64 __fastcall CHwBitmapColorSource::SetBitmapAndContext(
        CHwBitmapColorSource *this,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        struct MILMatrix3x2 *a7,
        struct BitmapToXSpaceTransform *a8,
        __int64 a9,
        struct CHwBitmapColorSource *a10)
{
  __int64 v10; // rbp
  struct CHwBitmapColorSource *v13; // rsi
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  CMILRefCountBase *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  CBitmapOfDeviceBitmaps *v20; // rcx
  struct CHwBitmapColorSource *v21; // rbx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+20h]

  v23 = a4;
  v10 = a9;
  v22 = 0LL;
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(this);
  v13 = a10;
  *(_OWORD *)((char *)this + 188) = *(_OWORD *)((char *)this + 120);
  if ( !*(_BYTE *)(v10 + 88) )
  {
    v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
    if ( v14 )
    {
      if ( (**v14)(v14, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v22) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 80LL))(v22) == 3 )
      {
        v20 = v22 ? (CBitmapOfDeviceBitmaps *)(v22 - 16) : 0LL;
        if ( !v13
          || CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
               v20,
               *(struct _LUID *)(*((_QWORD *)this + 2) + 648LL)) )
        {
          CHwBitmapColorSource::ComputeMinimumRealizationBounds(a3, v10 + 72, (char *)this + 188);
        }
      }
    }
  }
  if ( v13 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v13)(v13);
  v15 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v15 )
  {
    CMILRefCountBase::Release(v15);
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( v13 )
  {
    do
    {
      v21 = (struct CHwBitmapColorSource *)*((_QWORD *)v13 + 33);
      *((_QWORD *)v13 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource(this, v13);
      CMILRefCountBase::Release(v13);
      v13 = v21;
    }
    while ( v21 );
  }
  v16 = a5;
  if ( (a5 != 0) != *((_BYTE *)this + 280)
    || a5 != 0 && !CColorKey::operator==((CHwBitmapColorSource *)((char *)this + 284)) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  if ( v16 )
  {
    *(_OWORD *)((char *)this + 284) = *(_OWORD *)v16;
    *(_OWORD *)((char *)this + 300) = *(_OWORD *)(v16 + 16);
    *((_DWORD *)this + 79) = *(_DWORD *)(v16 + 32);
    *((_BYTE *)this + 280) = 1;
  }
  else
  {
    *((_BYTE *)this + 280) = 0;
  }
  *((_DWORD *)this + 34) = *(_DWORD *)(v10 + 76);
  *((_DWORD *)this + 35) = *(_DWORD *)(v10 + 80);
  CHwTexturedColorSource::SetFilterMode(this, *(unsigned int *)(v10 + 72));
  v17 = CHwBitmapColorSource::CalcTextureTransform(this, a7, a8);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x96Cu);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v18;
}
