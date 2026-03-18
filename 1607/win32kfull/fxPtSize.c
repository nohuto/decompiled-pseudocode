/*
 * XREFs of fxPtSize @ 0x1C0016E94
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall fxPtSize(__int64 a1)
{
  __int64 v2; // r11
  unsigned int v3; // eax
  unsigned int v4; // r10d

  CompDiv(
    *(unsigned int *)(a1 + 44),
    72 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) * (__int64)*(int *)(a1 + 92));
  v3 = CompDiv(*(unsigned int *)(a1 + 48), v2 * *(int *)(a1 + 96));
  return iHipot(v4, v3);
}
