/*
 * XREFs of ?SetColor@CMILBrushSolid@@UEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180107130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushSolid::SetColor(CMILBrushSolid *this, const struct _D3DCOLORVALUE *a2)
{
  *(struct _D3DCOLORVALUE *)((char *)this + 8) = *(const struct _D3DCOLORVALUE *)&a2->r;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 4) + 48LL))((char *)this - 32);
}
