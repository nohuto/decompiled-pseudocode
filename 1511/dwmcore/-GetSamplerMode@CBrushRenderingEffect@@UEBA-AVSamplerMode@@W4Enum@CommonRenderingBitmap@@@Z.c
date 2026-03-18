/*
 * XREFs of ?GetSamplerMode@CBrushRenderingEffect@@UEBA?AVSamplerMode@@W4Enum@CommonRenderingBitmap@@@Z @ 0x1800BD200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::GetSamplerMode(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8

  v3 = a3;
  v4 = a1 + 2LL * a3;
  *(_WORD *)a2 = *(_WORD *)(v3 + v4 + 16);
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + v4 + 18);
  return a2;
}
