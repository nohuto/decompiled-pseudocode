/*
 * XREFs of ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x180018318 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1800196D8 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180056B60 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x180137F20 (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTextureSource@@@Z @ 0x180140C6C (-RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTe.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBitmapAndContext(
        CD3DDeviceLevel1 *this,
        CBitmap *a2,
        volatile signed __int32 *a3,
        struct CHwBitmapColorSource *a4,
        struct MILMatrix3x2 *a5,
        __int64 a6,
        struct BitmapToXSpaceTransform *a7,
        int a8,
        int a9,
        __int64 a10,
        struct CHwBitmapColorSource::CacheContextParameters *a11,
        struct CHwSolidColorTextureSource **a12)
{
  unsigned int v14; // esi
  enum DXGI_FORMAT v15; // ebx
  int v16; // eax
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  int BitmapColorSource; // eax
  __int64 v21; // rcx
  int v22; // eax
  struct CHwBitmapColorSource *v23; // rax
  int ValidContentStateForTargetedDisplay; // eax
  int PixelFormat; // eax
  int v27; // eax
  struct CHwSolidColorTextureSource *v28; // rcx
  void (__fastcall ***v29)(_QWORD, struct CHwBitmapCache *); // r14
  enum DXGI_FORMAT v30; // [rsp+60h] [rbp-A0h] BYREF
  struct CHwBitmapColorSource *v31; // [rsp+68h] [rbp-98h] BYREF
  struct CHwBitmapCache *v32; // [rsp+70h] [rbp-90h] BYREF
  struct CHwBitmapColorSource *v33[3]; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DCOLORVALUE v34; // [rsp+90h] [rbp-70h] BYREF
  struct CHwSolidColorTextureSource *v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  struct BitmapToXSpaceTransform *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  struct MILMatrix3x2 *v39; // [rsp+C0h] [rbp-40h]
  enum DXGI_FORMAT v40[24]; // [rsp+D0h] [rbp-30h] BYREF

  v39 = a5;
  v38 = a6;
  v37 = a7;
  v36 = a10;
  *a12 = 0LL;
  v14 = 0;
  v15 = DisplayId::None;
  v33[2] = a4;
  v32 = (struct CHwBitmapCache *)a3;
  v31 = 0LL;
  v33[0] = 0LL;
  if ( a3 )
    _InterlockedIncrement(a3 + 2);
  else
    v14 = CHwBitmapCache::RetrieveFromBitmapSource(a2, this, &v32);
  v16 = (*(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 80LL))(a2);
  v17 = (volatile signed __int32 *)v32;
  if ( v16 == 3 )
  {
    ValidContentStateForTargetedDisplay = CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(
                                            (char *)a2 - 16,
                                            *((unsigned int *)a11 + 7));
    if ( ValidContentStateForTargetedDisplay == 2 )
    {
      v15 = *((_DWORD *)a11 + 7);
    }
    else if ( !ValidContentStateForTargetedDisplay )
    {
      PixelFormat = CBitmap::GetPixelFormat(a2, &v30);
      v14 = PixelFormat;
      if ( PixelFormat < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x1B8u);
        goto LABEL_13;
      }
      v34.r = 0.0;
      v34.g = 0.0;
      v34.b = 0.0;
      if ( (unsigned int)HasAlphaChannel(v30) )
        v34.a = 0.0;
      else
        v34.a = FLOAT_1_0;
      v27 = CHwSolidColorTextureSourcePool::RetrieveTexture((CD3DDeviceLevel1 *)((char *)this + 456), &v34, &v35);
      v14 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1CCu);
        goto LABEL_13;
      }
      v28 = v35;
      *((_DWORD *)v35 + 23) = *((_DWORD *)a11 + 8);
      *a12 = v28;
    }
  }
  if ( !*a12 )
  {
    if ( *((_BYTE *)a11 + 44) )
      v18 = (__int64)a11 + 48;
    else
      v18 = 0LL;
    v19 = CHwBitmapColorSource::ComputeRealizationParameters(
            this,
            a2,
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 4),
            *((_DWORD *)a11 + 10),
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 2),
            *((unsigned __int8 *)a11 + 12),
            a8,
            v18,
            a9,
            v40);
    v14 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1E9u);
    }
    else
    {
      v40[17] = v15;
      BitmapColorSource = CHwBitmapCache::GetBitmapColorSource(
                            this,
                            a2,
                            (struct CHwBitmapColorSource::CacheParameters *)v40,
                            a11,
                            (struct CHwBitmapCache *)v17,
                            &v31,
                            v33);
      v14 = BitmapColorSource;
      if ( BitmapColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapColorSource, 0x1F9u);
      }
      else
      {
        if ( *((_BYTE *)a11 + 44) )
          v21 = (__int64)a11 + 48;
        else
          v21 = 0LL;
        v22 = CHwBitmapColorSource::SetBitmapAndContext(v31, v21, v36, v39, v37, (__int64)v40, v33[0]);
        v14 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x207u);
        }
        else
        {
          v23 = v31;
          v31 = 0LL;
          *a12 = v23;
        }
      }
    }
  }
LABEL_13:
  if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
  {
    v29 = (void (__fastcall ***)(_QWORD, struct CHwBitmapCache *))*((_QWORD *)v32 + 2);
    if ( v29 )
      (**v29)(*((_QWORD *)v32 + 2), v32);
    else
      (*(void (__fastcall **)(struct CHwBitmapCache *, __int64))(*(_QWORD *)v32 + 16LL))(v32, 1LL);
  }
  if ( v33[0] )
    CMILRefCountBase::Release(v33[0]);
  if ( v31 )
    CMILRefCountBase::Release(v31);
  return v14;
}
