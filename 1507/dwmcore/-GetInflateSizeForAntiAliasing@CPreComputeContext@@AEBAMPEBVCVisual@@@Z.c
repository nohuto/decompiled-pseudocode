/*
 * XREFs of ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x180039678
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CPreComputeContext::GetInflateSizeForAntiAliasing(CPreComputeContext *this, const struct CVisual *a2)
{
  char v2; // al

  if ( *((_DWORD *)this + 46) )
    return FLOAT_4_0;
  v2 = *((_BYTE *)a2 + 88);
  if ( (v2 & 0x20) != 0 )
    return FLOAT_4_0;
  if ( (v2 & 0x10) != 0 )
    return FLOAT_0_5;
  return 0.0;
}
