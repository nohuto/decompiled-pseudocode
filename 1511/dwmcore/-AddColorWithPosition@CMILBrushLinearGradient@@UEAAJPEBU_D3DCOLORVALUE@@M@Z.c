/*
 * XREFs of ?AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801135E0
 * Callers:
 *     ?AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1800BCD70 (-AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILBrushLinearGradient::AddColorWithPosition(
        CMILBrushLinearGradient *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  return CMILBrushGradient::AddColorWithPosition(this, a2, a3);
}
