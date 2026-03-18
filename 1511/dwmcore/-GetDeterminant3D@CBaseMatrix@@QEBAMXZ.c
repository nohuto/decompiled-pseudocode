/*
 * XREFs of ?GetDeterminant3D@CBaseMatrix@@QEBAMXZ @ 0x18013A4F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180059984 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __fastcall CBaseMatrix::GetDeterminant3D(CBaseMatrix *this)
{
  return D2DMatrixDeterminant(this);
}
