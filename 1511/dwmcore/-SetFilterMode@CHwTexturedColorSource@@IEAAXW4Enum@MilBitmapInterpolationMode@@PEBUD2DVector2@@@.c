/*
 * XREFs of ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x18002C32C
 * Callers:
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180013190 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTexturedColorSource::SetFilterMode(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 4 )
    {
      *(_DWORD *)(a1 + 24) = 3;
    }
    else if ( a2 == 5 )
    {
      result = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(result + 656);
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  if ( a3 )
  {
    *(_QWORD *)(a1 + 36) = *a3;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  return result;
}
