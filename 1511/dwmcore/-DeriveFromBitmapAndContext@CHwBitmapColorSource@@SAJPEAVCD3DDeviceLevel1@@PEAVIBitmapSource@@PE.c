/*
 * XREFs of ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180089BF4 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x18008ABCC (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18008C2E0 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTextureSource@@@Z @ 0x18015010C (-RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTe.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBitmapAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        volatile signed __int32 *a3,
        __int64 a4,
        struct MILMatrix3x2 *a5,
        __int64 a6,
        struct BitmapToXSpaceTransform *a7,
        int a8,
        int a9,
        __int64 a10,
        struct CHwBitmapColorSource::CacheContextParameters *a11,
        struct CHwSolidColorTextureSource **a12)
{
  unsigned int v12; // esi
  CMILRefCountBase *v13; // r14
  CMILRefCountBase *v14; // r12
  int v16; // ebx
  struct CHwSolidColorTextureSource **v17; // rdi
  char *v18; // rdx
  int v19; // eax
  int BitmapColorSource; // eax
  char *v21; // rax
  int v22; // eax
  int ValidContentStateForTargetedDisplay; // eax
  int PixelFormat; // eax
  int v26; // eax
  struct CHwSolidColorTextureSource *v27; // rcx
  CMILRefCountBase *v28; // [rsp+60h] [rbp-A0h] BYREF
  CMILRefCountBase *v29; // [rsp+68h] [rbp-98h] BYREF
  struct CHwSolidColorTextureSource **v30; // [rsp+70h] [rbp-90h]
  CD3DDeviceLevel1 *v31; // [rsp+78h] [rbp-88h]
  enum DXGI_FORMAT v32; // [rsp+80h] [rbp-80h] BYREF
  CMILPoolResource *v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  struct _D3DCOLORVALUE v35; // [rsp+98h] [rbp-68h] BYREF
  struct MILMatrix3x2 *v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  struct BitmapToXSpaceTransform *v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  struct CHwSolidColorTextureSource *v40; // [rsp+C8h] [rbp-38h] BYREF
  enum DXGI_FORMAT v41[17]; // [rsp+D0h] [rbp-30h] BYREF
  int v42; // [rsp+114h] [rbp+14h]

  v12 = 0;
  v13 = 0LL;
  v36 = a5;
  v14 = 0LL;
  v39 = a6;
  v38 = a7;
  v37 = a10;
  v34 = a4;
  v31 = a1;
  v33 = (CMILPoolResource *)a3;
  *a12 = 0LL;
  v16 = DisplayId::None;
  v30 = a12;
  v29 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    _InterlockedIncrement(a3 + 2);
    v13 = v29;
    v14 = v28;
  }
  else
  {
    v12 = CHwBitmapCache::RetrieveFromBitmapSource(a2, a1, &v33);
  }
  if ( (*(unsigned int (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 80LL))(a2) != 3 )
    goto LABEL_4;
  ValidContentStateForTargetedDisplay = CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(
                                          (__int64)a2 - 16,
                                          *((_DWORD *)a11 + 7));
  if ( ValidContentStateForTargetedDisplay == 2 )
  {
    v16 = *((_DWORD *)a11 + 7);
LABEL_4:
    v17 = v30;
    goto LABEL_5;
  }
  if ( ValidContentStateForTargetedDisplay )
    goto LABEL_4;
  PixelFormat = CBitmap::GetPixelFormat(a2, &v32);
  v12 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x1B8u);
    goto LABEL_14;
  }
  v35.r = 0.0;
  v35.g = 0.0;
  v35.b = 0.0;
  if ( HasAlphaChannel(v32) )
    v35.a = 0.0;
  else
    v35.a = FLOAT_1_0;
  v26 = CHwSolidColorTextureSourcePool::RetrieveTexture((CD3DDeviceLevel1 *)((char *)v31 + 448), &v35, &v40);
  v12 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1CCu);
    goto LABEL_14;
  }
  v27 = v40;
  v17 = v30;
  *((_DWORD *)v40 + 23) = *((_DWORD *)a11 + 8);
  *v17 = v27;
LABEL_5:
  if ( !*v17 )
  {
    v18 = (char *)a11 + 48;
    v42 = 0;
    if ( !*((_BYTE *)a11 + 44) )
      v18 = 0LL;
    v19 = CHwBitmapColorSource::ComputeRealizationParameters(
            (enum DXGI_FORMAT *)v31,
            a2,
            v34,
            v39,
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 4),
            *((_DWORD *)a11 + 10),
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 2),
            *((unsigned __int8 *)a11 + 12),
            a8,
            (__int64)v18,
            a9,
            v41);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1E9u);
    }
    else
    {
      v42 = v16;
      BitmapColorSource = CHwBitmapCache::GetBitmapColorSource(
                            v31,
                            a2,
                            (struct CHwBitmapColorSource::CacheParameters *)v41,
                            a11,
                            v33,
                            &v29,
                            &v28);
      v12 = BitmapColorSource;
      if ( BitmapColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapColorSource, 0x1F9u);
        v13 = v29;
        v14 = v28;
      }
      else
      {
        if ( *((_BYTE *)a11 + 44) )
          v21 = (char *)a11 + 48;
        else
          v21 = 0LL;
        v14 = v28;
        v13 = v29;
        v22 = CHwBitmapColorSource::SetBitmapAndContext(
                v29,
                (__int64)a2,
                v34,
                *((_DWORD *)a11 + 8),
                (__int64)v21,
                (_QWORD *)v37,
                v36,
                v38,
                (__int64)v41,
                v28);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x207u);
        }
        else
        {
          *v17 = v13;
          v13 = 0LL;
        }
      }
    }
  }
LABEL_14:
  if ( v33 )
    CMILPoolResource::Release(v33);
  if ( v14 )
    CMILRefCountBase::Release(v14);
  if ( v13 )
    CMILRefCountBase::Release(v13);
  return v12;
}
