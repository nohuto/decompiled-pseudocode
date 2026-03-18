/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C0203BA0
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  const struct tagRECT *v1; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v1 + 1) )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
