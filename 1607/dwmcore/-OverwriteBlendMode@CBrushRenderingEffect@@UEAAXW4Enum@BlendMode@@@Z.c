/*
 * XREFs of ?OverwriteBlendMode@CBrushRenderingEffect@@UEAAXW4Enum@BlendMode@@@Z @ 0x1800C29F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBrushRenderingEffect::OverwriteBlendMode(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
