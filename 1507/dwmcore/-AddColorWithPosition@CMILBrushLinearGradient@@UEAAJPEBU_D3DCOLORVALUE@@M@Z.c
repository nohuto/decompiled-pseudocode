/*
 * XREFs of ?AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1800F9760
 * Callers:
 *     ?AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18009A130 (-AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z.c)
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
