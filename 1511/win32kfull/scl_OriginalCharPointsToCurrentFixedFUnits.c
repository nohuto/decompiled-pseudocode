/*
 * XREFs of scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02DC940
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_ConvertToFixedFUnits @ 0x1C02DC920 (scl_ConvertToFixedFUnits.c)
 */

__int64 __fastcall scl_OriginalCharPointsToCurrentFixedFUnits(__int64 a1)
{
  __int64 v1; // r10

  scl_ConvertToFixedFUnits(
    *(_QWORD *)(a1 + 32),
    *(_DWORD **)a1,
    (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1));
  return scl_ConvertToFixedFUnits(
           *(_QWORD *)(v1 + 40),
           *(_DWORD **)(v1 + 8),
           (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v1 + 64) + 2LL * *(__int16 *)(v1 + 80) - 2) + 1));
}
