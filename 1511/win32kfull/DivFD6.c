/*
 * XREFs of DivFD6 @ 0x1C00C0F60
 * Callers:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     BuildExpandAAInfo @ 0x1C00034E0 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C00BEF78 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00BF960 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00BFB60 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C00C0304 (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00C066C (ComputeInverseMatrix3x3.c)
 *     ComputeRGBLUTAA @ 0x1C00C08DC (ComputeRGBLUTAA.c)
 *     CreateStandardMonoPattern @ 0x1C0140CD0 (CreateStandardMonoPattern.c)
 *     HT_ComputeRGBGammaTable @ 0x1C024D720 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C024DA10 (HT_Get8BPPFormatPalette.c)
 *     HT_Get8BPPMaskPalette @ 0x1C024DB10 (HT_Get8BPPMaskPalette.c)
 *     CacheRGBToXYZ @ 0x1C024E2CC (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C024E3C0 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C024F14C (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00C1008 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
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
      result = 0LL;
      v2 = -a1;
      if ( !a1 )
        return result;
      LOBYTE(result) = v3 == 0;
      v3 = result;
    }
    if ( v2 == a2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
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
