/*
 * XREFs of MulFD6 @ 0x140146A98
 * Callers:
 *     AdjustSrcDevGamma @ 0x140145CDC (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1401460F4 (ComputeRGBLUTAA.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     ComputeColorSpaceXForm @ 0x14014758C (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x140147B2C (ComputeInverseMatrix3x3.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 *     CacheRGBToXYZ @ 0x140304478 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // r11d
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // r11d
  unsigned int v7; // edx
  unsigned int v8; // r10d
  int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // r11d
  int v14; // r9d
  __int64 result; // rax

  v2 = a2;
  v3 = a1;
  if ( a1 <= 0 )
  {
    v3 = -a1;
    v4 = 1;
    if ( !a1 )
      return 0LL;
  }
  else
  {
    v4 = 0;
  }
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( a2 )
    {
      v4 ^= 1u;
      goto LABEL_4;
    }
    return 0LL;
  }
LABEL_4:
  if ( v3 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v3;
    }
    else
    {
      v5 = (unsigned __int16)v2;
      v6 = v2 >> 16;
      v7 = (unsigned __int16)v3 * v6;
      v8 = v5 * (unsigned __int16)v3;
      v9 = v3 >> 16;
      v10 = v5 * v9;
      v11 = HIWORD(v8) + (unsigned __int16)(v5 * v9) + (unsigned __int16)v7;
      v12 = HIWORD(v11) + HIWORD(v10) + HIWORD(v7) + v9 * v6;
      v13 = ((v11 << 16) | (unsigned __int16)v8) + 500000;
      v14 = v12 + 1;
      if ( ((v11 << 16) | (unsigned __int16)v8) < 0xFFF85EE0 )
        v14 = v12;
      v2 = ((((v13 >> 20) | (v14 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v13 >> 4) | ((((v13 >> 20) | (v14 << 12))
                                                                                             + 3036
                                                                                             * (((v13 >> 20) | (v14 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  result = (unsigned int)-v2;
  if ( !v4 )
    return (unsigned int)v2;
  return result;
}
