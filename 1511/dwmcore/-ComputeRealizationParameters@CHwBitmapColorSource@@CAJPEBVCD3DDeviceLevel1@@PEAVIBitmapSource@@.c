/*
 * XREFs of ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x18001368C (-RoundToPow2@@YAII@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1800247C0 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180088AB0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180088EC0 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180088F20 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18008C200 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x18014D234 (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x18014D54C (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationParameters(
        enum DXGI_FORMAT *this,
        CBitmap *a2,
        __int64 a3,
        __int64 a4,
        enum DXGI_FORMAT a5,
        int a6,
        enum DXGI_FORMAT a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        enum DXGI_FORMAT *a12)
{
  enum DXGI_FORMAT *v12; // rbx
  __int64 (__fastcall *v15)(CBitmap *, enum DXGI_FORMAT *); // rdi
  int PixelFormat; // eax
  unsigned int v17; // edi
  __int64 (__fastcall *v18)(CBitmap *); // rdi
  int AlphaMode; // eax
  bool v20; // r12
  __int64 (__fastcall *v21)(__int64); // rdi
  int ColorSpace; // eax
  __int64 v23; // r14
  int v24; // r15d
  int SupportedTextureFormat; // eax
  char v26; // al
  __int64 (__fastcall *v27)(CBitmap *); // r14
  int v28; // eax
  __int64 (__fastcall *v29)(CBitmap *, unsigned int *, unsigned int *); // rdi
  int Size; // eax
  unsigned int v31; // r12d
  unsigned int v32; // r15d
  int v33; // esi
  int v34; // eax
  unsigned int *v35; // r11
  struct CHwBitmapColorSource::DimensionLayout *v36; // r10
  int v38; // r9d
  int v39; // eax
  _DWORD *v40; // r11
  int v41; // r8d
  int v42; // eax
  _DWORD *v43; // r10
  int v44; // r8d
  int v45; // r14d
  int v46; // eax
  _DWORD *v47; // r11
  int v48; // eax
  _DWORD *v49; // r10
  int v50; // r11d
  unsigned int v51; // [rsp+20h] [rbp-68h]

  v12 = a12;
  *((_DWORD *)a12 + 18) = a7;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 6) = 0;
  *((_BYTE *)v12 + 88) = 0;
  v15 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL);
  if ( v15 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(a2, &a7);
  else
    PixelFormat = v15(a2, &a7);
  v17 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x4B1u);
    return v17;
  }
  v18 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v18 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a2);
  else
    AlphaMode = v18(a2);
  v20 = AlphaMode == 1;
  v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v21 == CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace((__int64)a2);
  else
    ColorSpace = v21((__int64)a2);
  v23 = a10;
  v24 = ColorSpace;
  SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(this, a7, a5, a10 != 0, 0, v12);
  v17 = SupportedTextureFormat;
  if ( SupportedTextureFormat < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SupportedTextureFormat, 0x4B9u);
  if ( HasAlphaChannel(*v12) )
  {
    v26 = v20;
    if ( v23 )
      v26 = 1;
    *((_BYTE *)v12 + 5) = v26;
  }
  else
  {
    *((_BYTE *)v12 + 5) = 0;
  }
  v27 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v27 == CBitmap::GetAlphaMode )
    v28 = CBitmap::GetAlphaMode(a2);
  else
    v28 = v27(a2);
  *((_DWORD *)v12 + 2) = v24;
  *((_BYTE *)v12 + 4) = v28 == 3;
  if ( (v17 & 0x80000000) != 0 )
  {
    if ( !a11 )
      return v17;
    v17 = -2147467263;
    v51 = 1241;
    goto LABEL_36;
  }
  v29 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 56LL);
  if ( v29 == CBitmap::GetSize )
    Size = CBitmap::GetSize(a2, (unsigned int *)v12 + 19, (unsigned int *)v12 + 20);
  else
    Size = v29(a2, (unsigned int *)v12 + 19, (unsigned int *)v12 + 20);
  v17 = Size;
  if ( Size < 0 )
  {
    v51 = 1250;
LABEL_36:
    v38 = v17;
LABEL_61:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, v51);
    return v17;
  }
  v31 = *((_DWORD *)this + 156);
  v32 = *((_DWORD *)this + 157);
  v33 = a11;
  v34 = CHwBitmapColorSource::ComputeRealizationSize(v31, v32, a3, a4, a6, a8, a9, a11, v12);
  v17 = v34;
  if ( v34 < 0 )
  {
    v51 = 1263;
    goto LABEL_60;
  }
  v35 = (unsigned int *)(v12 + 11);
  v36 = (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 14);
  *((_DWORD *)v12 + 11) = *((_DWORD *)v12 + 9) - *((_DWORD *)v12 + 7);
  *((_DWORD *)v12 + 12) = 0;
  *((_QWORD *)v12 + 7) = (unsigned int)(*((_DWORD *)v12 + 10) - *((_DWORD *)v12 + 8));
  if ( !a6 )
  {
    *((_DWORD *)v12 + 13) = 3;
    *((_DWORD *)v12 + 16) = 3;
  }
  if ( (unsigned int)(*((_DWORD *)v12 + 18) - 4) > 1 )
  {
    if ( !*((_BYTE *)this + 643) )
      return v17;
    if ( ((*v35 - 1) & *v35) != 0 )
    {
      if ( *((_DWORD *)v12 + 9) - *((_DWORD *)v12 + 7) == *((_DWORD *)v12 + 3) )
      {
        v45 = *((_DWORD *)v12 + 13);
        v34 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
                (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 11),
                v31);
        v17 = v34;
        if ( v34 < 0 )
        {
          v51 = 1336;
          goto LABEL_60;
        }
        if ( !v33 && *((_DWORD *)v12 + 12) )
        {
          v46 = RoundToPow2(*((_DWORD *)v12 + 3));
          *((_DWORD *)v12 + 12) = 0;
          *((_DWORD *)v12 + 3) = v46;
          *v47 = v46;
          *((_DWORD *)v12 + 9) = v46;
          *((_DWORD *)v12 + 13) = v45;
        }
      }
      else
      {
        *((_DWORD *)v12 + 13) = 3;
      }
    }
    if ( ((*(_DWORD *)v36 - 1) & *(_DWORD *)v36) == 0 )
    {
LABEL_58:
      v34 = CHwBitmapColorSource::ReconcileLayouts((struct CHwBitmapColorSource::RealizationParameters *)v12, v31, v32);
      v17 = v34;
      if ( v34 >= 0 )
        return v17;
      v51 = 1398;
      goto LABEL_60;
    }
    if ( *((_DWORD *)v12 + 10) - *((_DWORD *)v12 + 8) != *((_DWORD *)v12 + 4) )
    {
      *((_DWORD *)v12 + 16) = 3;
      goto LABEL_58;
    }
    v34 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(v36, v32);
    v17 = v34;
    if ( v34 >= 0 )
    {
      if ( !v33 && *((_DWORD *)v12 + 15) )
      {
        v48 = RoundToPow2(*((_DWORD *)v12 + 4));
        *((_DWORD *)v12 + 15) = 0;
        *((_DWORD *)v12 + 4) = v48;
        *v49 = v48;
        *((_DWORD *)v12 + 10) = v48;
        *((_DWORD *)v12 + 16) = v50;
      }
      goto LABEL_58;
    }
    v51 = 1378;
LABEL_60:
    v38 = v34;
    goto LABEL_61;
  }
  if ( ((*v35 - 1) & *v35) != 0 )
  {
    v39 = RoundToPow2(*v35);
    *v40 = v39;
    *((_DWORD *)v12 + 12) = v41;
  }
  if ( ((*(_DWORD *)v36 - 1) & *(_DWORD *)v36) != 0 )
  {
    v42 = RoundToPow2(*(_DWORD *)v36);
    *v43 = v42;
    *((_DWORD *)v12 + 15) = v44;
  }
  return v17;
}
