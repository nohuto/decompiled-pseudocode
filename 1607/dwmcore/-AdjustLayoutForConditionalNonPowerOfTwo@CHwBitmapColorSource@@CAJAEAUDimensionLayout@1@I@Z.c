/*
 * XREFs of ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x18017E218
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x180080A18 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x18017E6FC (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
        struct CHwBitmapColorSource::DimensionLayout *a1,
        unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax

  v2 = 0;
  switch ( *((_DWORD *)a1 + 2) )
  {
    case 1:
      v3 = *(_DWORD *)a1 + 2;
      if ( v3 <= a2 )
      {
        *((_DWORD *)a1 + 1) = 1;
        goto LABEL_9;
      }
      return (unsigned int)-2147467263;
    case 2:
      v3 = *(_DWORD *)a1 + 2;
      if ( v3 <= a2 )
      {
        *((_DWORD *)a1 + 1) = 2;
LABEL_9:
        *((_DWORD *)a1 + 2) = 3;
        *(_DWORD *)a1 = v3;
        return v2;
      }
      return (unsigned int)-2147467263;
    case 3:
      *((_DWORD *)a1 + 1) = 0;
      break;
  }
  return v2;
}
