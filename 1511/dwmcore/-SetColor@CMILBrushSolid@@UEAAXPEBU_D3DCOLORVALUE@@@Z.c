/*
 * XREFs of ?SetColor@CMILBrushSolid@@UEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800F3610
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CMILBrushSolid::SetColor(CMILBrushSolid *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 4);
  *(struct _D3DCOLORVALUE *)((char *)this + 8) = *(const struct _D3DCOLORVALUE *)&a2->r;
  (*(void (__fastcall **)(char *))(v2 + 48))((char *)this - 32);
}
