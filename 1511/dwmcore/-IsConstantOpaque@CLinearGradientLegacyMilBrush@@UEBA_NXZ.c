/*
 * XREFs of ?IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ @ 0x180013B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CLinearGradientLegacyMilBrush::IsConstantOpaque(CLinearGradientLegacyMilBrush *this)
{
  return CGradientLegacyMilBrush::IsConstantOpaqueInternal<CLinearGradientLegacyMilBrush const>(this);
}
