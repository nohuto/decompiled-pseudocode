/*
 * XREFs of ?IsCloseRealOneMatrixEpsilon@@YAHM@Z @ 0x180014B74
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCloseRealOneMatrixEpsilon(float a1)
{
  float v1; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - 1.0)) & _xmm);
  return v1 < 0.00012207031;
}
