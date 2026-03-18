/*
 * XREFs of ?AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18012BA70
 * Callers:
 *     ?AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1800BFBF0 (-AddColorWithPosition@CMILBrushLinearGradient@@WHA@EAAJPEBU_D3DCOLORVALUE@@M@Z.c)
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
