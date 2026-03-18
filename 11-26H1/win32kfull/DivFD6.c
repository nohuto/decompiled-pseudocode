/*
 * XREFs of DivFD6 @ 0x140146D00
 * Callers:
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x140145CDC (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1401460F4 (ComputeRGBLUTAA.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     ComputeColorSpaceXForm @ 0x14014758C (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x140147B2C (ComputeInverseMatrix3x3.c)
 *     BuildExpandAAInfo @ 0x1401485D0 (BuildExpandAAInfo.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 *     HT_Get8BPPMaskPalette @ 0x140183780 (HT_Get8BPPMaskPalette.c)
 *     CreateStandardMonoPattern @ 0x1401DBE60 (CreateStandardMonoPattern.c)
 *     HT_Get8BPPFormatPalette @ 0x140255300 (HT_Get8BPPFormatPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x140303D30 (HT_ComputeRGBGammaTable.c)
 *     CacheRGBToXYZ @ 0x140304478 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x14030534C (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x140146DC0 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r11d
  int v3; // ebx
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  __int64 result; // rax

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( !v3 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v3 ^= 1u;
    }
    if ( a1 == v2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
    }
    else
    {
      v4 = 62500 * (unsigned __int16)a1;
      v5 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v6 = -198967296 * HIWORD(a1) + v4;
      v7 = v5 + 1;
      if ( v6 >= v4 )
        v7 = v5;
      result = U64DivU32RoundUp((v6 >> 28) | (16 * v7), 16 * v6, v2);
      if ( v3 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
