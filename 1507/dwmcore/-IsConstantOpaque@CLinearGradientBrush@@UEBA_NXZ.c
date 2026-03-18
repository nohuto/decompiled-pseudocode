/*
 * XREFs of ?IsConstantOpaque@CLinearGradientBrush@@UEBA_NXZ @ 0x1800F9880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CLinearGradientBrush::IsConstantOpaque(__int64 this)
{
  return CGradientBrush::IsConstantOpaqueInternal<CLinearGradientBrush const>(this);
}
