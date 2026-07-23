/*
 * XREFs of BgpRasGetGlyphTextCellDimensions @ 0x140128398
 * Callers:
 *     BgpFoGetTextMetrics @ 0x140128370 (BgpFoGetTextMetrics.c)
 * Callees:
 *     BgpFmRoundUp @ 0x140128CD8 (BgpFmRoundUp.c)
 *     BgpFmRoundDefault @ 0x140128CF0 (BgpFmRoundDefault.c)
 */

__int64 __fastcall BgpRasGetGlyphTextCellDimensions(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r11
  unsigned int v5; // r10d
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = BgpFmRoundUp(
          ((*(unsigned int *)(a1 + 16)
          * *(unsigned int *)(v3 + 96)
          * (__int64)(*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6)
        / (72LL
         * *(unsigned __int16 *)(v3 + 120)),
          ((*(unsigned int *)(a1 + 16)
          * *(unsigned int *)(v3 + 96)
          * (__int64)(*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6)
        % (72LL * *(unsigned __int16 *)(v3 + 120)))
      + 2;
  result = BgpFmRoundDefault(v5);
  *a3 = result;
  return result;
}
