/*
 * XREFs of ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180016350 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x18001C000 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x18001CE50 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x180084708 (-ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180137FB8 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18013D2F0 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D470 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
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
  __int64 v10; // r12
  __int64 v12; // rbp
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // ecx
  bool v16; // cf
  int v17; // eax
  int v18; // r15d
  unsigned int v19; // r12d
  __int64 v20; // r14
  int v21; // eax
  struct CHwBitmapColorSource *v22; // r14
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rdi
  CMILRefCountBase *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  __int64 v30; // r13
  CBitmapOfDeviceBitmaps *v31; // rcx
  struct CHwBitmapColorSource *v32; // rbx
  int v33; // [rsp+70h] [rbp+8h]
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+18h]

  v35 = a3;
  v10 = a3;
  v34 = 0LL;
  if ( a2 )
    *((_QWORD *)this + 14) = a2;
  v12 = a9;
  v13 = *((_QWORD *)this + 20);
  *((_DWORD *)this + 23) = a4;
  *((_DWORD *)this + 24) = *(_BYTE *)(v12 + 5) != 0 ? 1 : 3;
  v14 = *(_DWORD *)(v12 + 8);
  *((_DWORD *)this + 25) = v14;
  *((_DWORD *)this + 36) = *(_DWORD *)(v12 + 12);
  *((_DWORD *)this + 37) = *(_DWORD *)(v12 + 16);
  LODWORD(a9) = v14;
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)(v12 + 28);
  *((_DWORD *)this + 80) = *(_DWORD *)(v12 + 48);
  *((_DWORD *)this + 81) = *(_DWORD *)(v12 + 60);
  v15 = *(_DWORD *)(v12 + 64);
  *((_DWORD *)this + 7) = *(_DWORD *)(v12 + 52);
  *((_DWORD *)this + 8) = v15;
  *((_DWORD *)this + 38) = *(_DWORD *)(v12 + 68);
  if ( v13 )
  {
    v16 = CHwBitmapColorSource::IsOpaque(this) != 0;
    *(_DWORD *)(v13 + 188) = v14;
    v17 = *(_DWORD *)(v13 + 184);
    v33 = v17;
    v18 = v16 ? 3 : 1;
    *(_DWORD *)(v13 + 184) = v18;
    if ( *(_QWORD *)(v13 + 200) )
    {
      v19 = 0;
      if ( *(_DWORD *)(v13 + 192) )
      {
        do
        {
          v20 = *(_QWORD *)(*(_QWORD *)(v13 + 200) + 8LL * v19);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 192);
            *(_DWORD *)(v20 + 192) = v18;
            *(_DWORD *)(v20 + 196) = v14;
            if ( v21 != v18 )
            {
              v30 = *(_QWORD *)(v20 + 216);
              if ( v30 )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 16LL))(*(_QWORD *)(v20 + 216));
                v14 = a9;
                *(_QWORD *)(v20 + 216) = 0LL;
              }
            }
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(v13 + 192) );
        v17 = v33;
      }
      v10 = v35;
    }
    if ( v17 != *(_DWORD *)(v13 + 184) )
      CD3DTexture::ReleaseD2DBitmaps((CD3DTexture *)v13);
  }
  v22 = a10;
  *(_OWORD *)((char *)this + 188) = *(_OWORD *)((char *)this + 120);
  if ( !*(_BYTE *)(v12 + 88) )
  {
    v23 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
    if ( v23 )
    {
      if ( (**v23)(*((_QWORD *)this + 26), &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v34) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 80LL))(v34) == 3 )
      {
        v31 = (CBitmapOfDeviceBitmaps *)(v34 - 16);
        if ( !v34 )
          v31 = 0LL;
        if ( !v22
          || CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
               v31,
               *(struct _LUID *)(*((_QWORD *)this + 2) + 576LL)) )
        {
          CHwBitmapColorSource::ComputeMinimumRealizationBounds(v10, v12 + 72, (char *)this + 188);
        }
      }
    }
  }
  if ( v22 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v22)(v22);
  v24 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v24 )
  {
    CMILRefCountBase::Release(v24);
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( v22 )
  {
    do
    {
      v32 = (struct CHwBitmapColorSource *)*((_QWORD *)v22 + 33);
      *((_QWORD *)v22 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource(this, v22);
      CMILRefCountBase::Release(v22);
      v22 = v32;
    }
    while ( v32 );
  }
  v25 = a5;
  if ( (a5 != 0) != *((_BYTE *)this + 280)
    || a5 != 0 && !CColorKey::operator==((CHwBitmapColorSource *)((char *)this + 284)) )
  {
    *(_QWORD *)((char *)this + 180) = 0LL;
    *(_QWORD *)((char *)this + 172) = 0LL;
  }
  if ( v25 )
  {
    *(_OWORD *)((char *)this + 284) = *(_OWORD *)v25;
    *(_OWORD *)((char *)this + 300) = *(_OWORD *)(v25 + 16);
    *((_DWORD *)this + 79) = *(_DWORD *)(v25 + 32);
    *((_BYTE *)this + 280) = 1;
  }
  else
  {
    *((_BYTE *)this + 280) = 0;
  }
  *((_DWORD *)this + 34) = *(_DWORD *)(v12 + 76);
  *((_DWORD *)this + 35) = *(_DWORD *)(v12 + 80);
  v26 = *(_DWORD *)(v12 + 72);
  if ( v26 )
  {
    if ( v26 == 4 )
    {
      *((_DWORD *)this + 6) = 3;
    }
    else if ( v26 == 5 )
    {
      *((_DWORD *)this + 6) = *(_DWORD *)(*((_QWORD *)this + 2) + 680LL);
    }
    else
    {
      *((_DWORD *)this + 6) = 2;
    }
  }
  else
  {
    *((_DWORD *)this + 6) = 1;
  }
  if ( a6 )
    *(_QWORD *)((char *)this + 36) = *a6;
  else
    *(_QWORD *)((char *)this + 36) = 0LL;
  v27 = CHwBitmapColorSource::CalcTextureTransform(this, a7, a8);
  v28 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x983u);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return v28;
}
