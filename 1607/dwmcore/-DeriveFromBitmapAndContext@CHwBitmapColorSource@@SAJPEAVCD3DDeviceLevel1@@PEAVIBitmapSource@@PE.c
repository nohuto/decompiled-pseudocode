/*
 * XREFs of ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x180080A18 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x18009416C (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1800A44E4 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A5F30 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801741CC (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBitmapAndContext(
        CD3DDeviceLevel1 *this,
        CBitmap *a2,
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
  unsigned int v15; // edi
  int v16; // ebx
  int ValidContentStateForTargetedDisplay; // eax
  __int64 v18; // rdx
  int v19; // eax
  int BitmapColorSource; // eax
  __int64 v21; // rcx
  int PixelFormat; // eax
  BOOL v23; // eax
  int StockBlackSolidColorTextureSourceNoRef; // eax
  struct CHwSolidColorTextureSource *v25; // rax
  CHwBitmapColorSource *v26; // rbx
  int v27; // eax
  void (__fastcall ***v28)(_QWORD, struct CHwBitmapCache *); // r8
  CHwBitmapColorSource *v30; // [rsp+68h] [rbp-98h] BYREF
  struct CHwBitmapCache *v31; // [rsp+70h] [rbp-90h] BYREF
  struct CHwBitmapColorSource *v32; // [rsp+78h] [rbp-88h] BYREF
  enum DXGI_FORMAT v33; // [rsp+80h] [rbp-80h] BYREF
  struct CHwSolidColorTextureSource *v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  struct BitmapToXSpaceTransform *v36; // [rsp+98h] [rbp-68h]
  struct MILMatrix3x2 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  enum DXGI_FORMAT v39[17]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+F4h] [rbp-Ch]

  v37 = a5;
  v35 = a6;
  v36 = a7;
  v38 = a10;
  *a12 = 0LL;
  v15 = 0;
  v16 = DisplayId::None;
  v31 = (struct CHwBitmapCache *)a3;
  v30 = 0LL;
  v32 = 0LL;
  if ( a3 )
    _InterlockedIncrement(a3 + 2);
  else
    v15 = CHwBitmapCache::RetrieveFromBitmapSource(a2, this, &v31);
  if ( (*(unsigned int (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 80LL))(a2) == 3 )
  {
    ValidContentStateForTargetedDisplay = CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(
                                            (__int64)a2 - 16,
                                            *((_DWORD *)a11 + 7));
    if ( ValidContentStateForTargetedDisplay == 2 )
    {
      v16 = *((_DWORD *)a11 + 7);
    }
    else if ( !ValidContentStateForTargetedDisplay )
    {
      PixelFormat = CBitmap::GetPixelFormat(a2, &v33);
      v15 = PixelFormat;
      if ( PixelFormat < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x1A8u);
        goto LABEL_27;
      }
      v23 = HasAlphaChannel(v33);
      StockBlackSolidColorTextureSourceNoRef = CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
                                                 this,
                                                 v23,
                                                 &v34);
      v15 = StockBlackSolidColorTextureSourceNoRef;
      if ( StockBlackSolidColorTextureSourceNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, StockBlackSolidColorTextureSourceNoRef, 0x1B7u);
        goto LABEL_27;
      }
      v25 = v34;
      *a12 = v34;
      if ( v25 )
        _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
    }
  }
  if ( !*a12 )
  {
    v18 = (__int64)a11 + 48;
    v40 = 0;
    if ( !*((_BYTE *)a11 + 44) )
      v18 = 0LL;
    v19 = CHwBitmapColorSource::ComputeRealizationParameters(
            (enum DXGI_FORMAT *)this,
            a2,
            a4,
            v35,
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 4),
            *((_DWORD *)a11 + 10),
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 2),
            *((unsigned __int8 *)a11 + 12),
            a8,
            v18,
            a9,
            v39);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1D2u);
    }
    else
    {
      v40 = v16;
      BitmapColorSource = CHwBitmapCache::GetBitmapColorSource(
                            this,
                            a2,
                            (struct CHwBitmapColorSource::CacheParameters *)v39,
                            a11,
                            v31,
                            &v30,
                            &v32);
      v15 = BitmapColorSource;
      if ( BitmapColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapColorSource, 0x1E2u);
      }
      else
      {
        if ( *((_BYTE *)a11 + 44) )
          v21 = (__int64)a11 + 48;
        else
          v21 = 0LL;
        v26 = v30;
        v27 = CHwBitmapColorSource::SetBitmapAndContext(
                v30,
                (__int64)a2,
                a4,
                *((_DWORD *)a11 + 8),
                v21,
                v38,
                v37,
                v36,
                (__int64)v39,
                v32);
        v15 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1F0u);
        }
        else
        {
          v30 = 0LL;
          *a12 = v26;
        }
      }
    }
  }
LABEL_27:
  if ( v31 && _InterlockedExchangeAdd((volatile signed __int32 *)v31 + 2, 0xFFFFFFFF) == 1 )
  {
    v28 = (void (__fastcall ***)(_QWORD, struct CHwBitmapCache *))*((_QWORD *)v31 + 2);
    if ( v28 )
      (**v28)(*((_QWORD *)v31 + 2), v31);
    else
      (*(void (__fastcall **)(struct CHwBitmapCache *, __int64))(*(_QWORD *)v31 + 16LL))(v31, 1LL);
  }
  if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(struct CHwBitmapColorSource *, __int64))(*(_QWORD *)v32 + 16LL))(v32, 1LL);
  if ( v30 && _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(CHwBitmapColorSource *, __int64))(*(_QWORD *)v30 + 16LL))(v30, 1LL);
  return v15;
}
