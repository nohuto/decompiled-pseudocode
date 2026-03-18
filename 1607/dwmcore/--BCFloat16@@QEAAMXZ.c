/*
 * XREFs of ??BCFloat16@@QEAAMXZ @ 0x180180928
 * Callers:
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x1801806A0 (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ?Convert_64bppABGRFloat_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180186080 (-Convert_64bppABGRFloat_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180186590 (-AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180186BC0 (-AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CFloat16::operator float(unsigned __int16 *a1)
{
  int v1; // edx
  int v2; // ecx
  int i; // eax
  unsigned int v4; // edx
  float v6; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( (v1 & 0xFFFF7C00) != 0 )
  {
    LODWORD(v6) = (((v1 & 0x7C00) << 13) + 939524096) | ((v1 & 0x3FF | (8 * (v1 & 0xFFFF8000))) << 13);
  }
  else
  {
    if ( (v1 & 0x3FF) != 0 )
    {
      v2 = -14;
      for ( i = v1 & 0x3FF; (i & 0x400) == 0; i *= 2 )
        --v2;
      v4 = ((v2 + 127) << 23) | (((i | (8 * (v1 & 0xFFFF8080))) & 0xFFFFFBFF) << 13);
    }
    else
    {
      v4 = (v1 & 0xFFFF8000) << 16;
    }
    return *(float *)&v4;
  }
  return v6;
}
