/*
 * XREFs of ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800AAA98
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongToUInt(unsigned __int64 a1, unsigned int *a2)
{
  if ( a1 > 0xFFFFFFFF )
  {
    *a2 = -1;
    return 2147942934LL;
  }
  else
  {
    *a2 = a1;
    return 0LL;
  }
}
