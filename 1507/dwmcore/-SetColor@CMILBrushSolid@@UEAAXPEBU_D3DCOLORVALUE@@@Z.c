/*
 * XREFs of ?SetColor@CMILBrushSolid@@UEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800DBD60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILBrushSolid::SetColor(CMILBrushSolid *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 4);
  *(struct _D3DCOLORVALUE *)((char *)this + 8) = *(const struct _D3DCOLORVALUE *)&a2->r;
  (*(void (__fastcall **)(char *))(v2 + 48))((char *)this - 32);
}
