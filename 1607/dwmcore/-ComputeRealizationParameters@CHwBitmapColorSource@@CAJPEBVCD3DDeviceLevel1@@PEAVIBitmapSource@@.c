/*
 * XREFs of ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x180080A18
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x1800186B4 (-RoundToPow2@@YAII@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180080764 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x180080CBC (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180084D70 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x18017E218 (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x18017E6FC (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
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
  __int64 (__fastcall *v15)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  unsigned int v17; // edi
  enum DXGI_ALPHA_MODE (__fastcall *v18)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  bool v20; // r12
  __int64 (__fastcall *v21)(CBitmap *); // rax
  int ColorSpace; // eax
  __int64 v23; // r14
  int v24; // r15d
  int SupportedTextureFormat; // eax
  char v26; // al
  enum DXGI_ALPHA_MODE (__fastcall *v27)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE v28; // eax
  unsigned int *v29; // r8
  unsigned int *v30; // rdx
  __int64 (__fastcall *v31)(CBitmap *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  unsigned int v33; // r12d
  unsigned int v34; // r15d
  int v35; // esi
  int v36; // eax
  unsigned int *v37; // r11
  struct CHwBitmapColorSource::DimensionLayout *v38; // r10
  int v40; // eax
  _DWORD *v41; // r11
  int v42; // r8d
  int v43; // eax
  _DWORD *v44; // r10
  int v45; // r8d
  int v46; // r14d
  int v47; // eax
  _DWORD *v48; // r11
  int v49; // r9d
  int v50; // eax
  _DWORD *v51; // r10
  int v52; // r11d
  unsigned int v53; // [rsp+20h] [rbp-68h]

  v12 = a12;
  *((_DWORD *)a12 + 18) = a7;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 6) = 0;
  *((_BYTE *)v12 + 88) = 0;
  v15 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL);
  if ( v15 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(a2, &a7);
  else
    PixelFormat = v15(a2, &a7);
  v17 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    v53 = 1178;
    goto LABEL_60;
  }
  v18 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a2 + 32LL);
  if ( v18 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a2);
  else
    AlphaMode = v18(a2);
  v20 = AlphaMode == DXGI_ALPHA_MODE_PREMULTIPLIED;
  v21 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 40LL);
  if ( (char *)v21 == (char *)CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace(a2);
  else
    ColorSpace = v21(a2);
  v23 = a10;
  v24 = ColorSpace;
  SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(this, a7, a5, a10 != 0, 0, v12);
  v17 = SupportedTextureFormat;
  if ( SupportedTextureFormat < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SupportedTextureFormat, 0x4A2u);
  if ( (unsigned int)HasAlphaChannel(*v12) )
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
  v27 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a2 + 32LL);
  if ( v27 == CBitmap::GetAlphaMode )
    v28 = CBitmap::GetAlphaMode(a2);
  else
    v28 = v27(a2);
  *((_DWORD *)v12 + 2) = v24;
  *((_BYTE *)v12 + 4) = v28 == DXGI_ALPHA_MODE_IGNORE;
  if ( (v17 & 0x80000000) != 0 )
  {
    if ( !a11 )
      return v17;
    v17 = -2147467263;
    v53 = 1218;
    goto LABEL_60;
  }
  v29 = (unsigned int *)(v12 + 20);
  v30 = (unsigned int *)(v12 + 19);
  v31 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 56LL);
  if ( v31 == CBitmap::GetSize )
    Size = CBitmap::GetSize(a2, v30, v29);
  else
    Size = v31(a2, v30, v29);
  v17 = Size;
  if ( Size < 0 )
  {
    v53 = 1227;
LABEL_60:
    v49 = v17;
    goto LABEL_61;
  }
  v33 = *((_DWORD *)this + 172);
  v34 = *((_DWORD *)this + 173);
  v35 = a11;
  v36 = CHwBitmapColorSource::ComputeRealizationSize(v33, v34, a3, a4, a6, a8, a9, a11, v12);
  v17 = v36;
  if ( v36 < 0 )
  {
    v53 = 1240;
    goto LABEL_53;
  }
  v37 = (unsigned int *)(v12 + 11);
  v38 = (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 14);
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
    if ( !*((_BYTE *)this + 707) )
      return v17;
    if ( ((*v37 - 1) & *v37) != 0 )
    {
      if ( *((_DWORD *)v12 + 9) - *((_DWORD *)v12 + 7) == *((_DWORD *)v12 + 3) )
      {
        v46 = *((_DWORD *)v12 + 13);
        v36 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
                (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 11),
                v33);
        v17 = v36;
        if ( v36 < 0 )
        {
          v53 = 1313;
          goto LABEL_53;
        }
        if ( !v35 && *((_DWORD *)v12 + 12) )
        {
          v47 = RoundToPow2(*((_DWORD *)v12 + 3));
          *((_DWORD *)v12 + 12) = 0;
          *((_DWORD *)v12 + 3) = v47;
          *v48 = v47;
          *((_DWORD *)v12 + 9) = v47;
          *((_DWORD *)v12 + 13) = v46;
        }
      }
      else
      {
        *((_DWORD *)v12 + 13) = 3;
      }
    }
    if ( ((*(_DWORD *)v38 - 1) & *(_DWORD *)v38) == 0 )
    {
LABEL_45:
      v36 = CHwBitmapColorSource::ReconcileLayouts((struct CHwBitmapColorSource::RealizationParameters *)v12, v33, v34);
      v17 = v36;
      if ( v36 >= 0 )
        return v17;
      v53 = 1375;
      goto LABEL_53;
    }
    if ( *((_DWORD *)v12 + 10) - *((_DWORD *)v12 + 8) != *((_DWORD *)v12 + 4) )
    {
      *((_DWORD *)v12 + 16) = 3;
      goto LABEL_45;
    }
    v36 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(v38, v34);
    v17 = v36;
    if ( v36 >= 0 )
    {
      if ( !v35 && *((_DWORD *)v12 + 15) )
      {
        v50 = RoundToPow2(*((_DWORD *)v12 + 4));
        *((_DWORD *)v12 + 15) = 0;
        *((_DWORD *)v12 + 4) = v50;
        *v51 = v50;
        *((_DWORD *)v12 + 10) = v50;
        *((_DWORD *)v12 + 16) = v52;
      }
      goto LABEL_45;
    }
    v53 = 1355;
LABEL_53:
    v49 = v36;
LABEL_61:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, v53);
    return v17;
  }
  if ( ((*v37 - 1) & *v37) != 0 )
  {
    v40 = RoundToPow2(*v37);
    *v41 = v40;
    *((_DWORD *)v12 + 12) = v42;
  }
  if ( ((*(_DWORD *)v38 - 1) & *(_DWORD *)v38) != 0 )
  {
    v43 = RoundToPow2(*(_DWORD *)v38);
    *v44 = v43;
    *((_DWORD *)v12 + 15) = v45;
  }
  return v17;
}
