/*
 * XREFs of DivFD6 @ 0x1C00F5E78
 * Callers:
 *     RaisePower @ 0x1C00068F0 (RaisePower.c)
 *     BuildExpandAAInfo @ 0x1C0008630 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C00F3FD4 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00F4A14 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00F4C14 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C00F5218 (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00F5584 (ComputeInverseMatrix3x3.c)
 *     ComputeRGBLUTAA @ 0x1C00F57F4 (ComputeRGBLUTAA.c)
 *     HT_ComputeRGBGammaTable @ 0x1C0249DD0 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C024A230 (HT_Get8BPPFormatPalette.c)
 *     HT_Get8BPPMaskPalette @ 0x1C024A330 (HT_Get8BPPMaskPalette.c)
 *     CreateStandardMonoPattern @ 0x1C024A888 (CreateStandardMonoPattern.c)
 *     CacheRGBToXYZ @ 0x1C024B180 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C024B268 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C024C008 (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00F5F28 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r8d
  BOOL v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax

  v2 = a1;
  if ( a2 <= 0 )
  {
    a2 = -a2;
    v3 = 1;
    if ( !a2 )
    {
      result = 0x80000000LL;
      if ( a1 < 0 )
        return 0x7FFFFFFFLL;
      return result;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( a2 == 1000000 )
  {
    if ( v3 )
      return (unsigned int)-a1;
    return v2;
  }
  else
  {
    if ( a1 <= 0 )
    {
      v2 = -a1;
      if ( !a1 )
        return 0LL;
      v3 = !v3;
    }
    if ( v2 == a2 )
    {
      return v3 ? -1000000 : 1000000;
    }
    else
    {
      v4 = 62500 * (unsigned __int16)v2;
      v5 = 62500 * HIWORD(v2);
      v6 = v4 + (v5 << 16);
      v7 = HIWORD(v5);
      if ( v6 < v4 )
        ++v7;
      v8 = (16 * v7) | (v6 >> 28);
      v9 = (unsigned int)a2;
      v10 = 16 * v6;
      if ( v3 )
        return (unsigned int)-U64DivU32RoundUp(v8, v10, v9);
      else
        return U64DivU32RoundUp(v8, v10, v9);
    }
  }
}
