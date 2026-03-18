/*
 * XREFs of ?GetSamplerMode@CCommonRenderingEffect@@UEBA?AVSamplerMode@@W4Enum@CommonRenderingBitmap@@@Z @ 0x1800BD1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetSamplerMode(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8

  v3 = a3 + 8LL;
  v4 = a1 + 2 * v3;
  *(_WORD *)a2 = *(_WORD *)(v3 + v4);
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + v4 + 2);
  return a2;
}
