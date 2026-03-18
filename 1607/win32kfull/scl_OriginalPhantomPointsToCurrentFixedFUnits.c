/*
 * XREFs of scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DCC88
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_ConvertToFixedFUnits @ 0x1C02DCC08 (scl_ConvertToFixedFUnits.c)
 */

__int64 __fastcall scl_OriginalPhantomPointsToCurrentFixedFUnits(__int64 a1)
{
  __int64 v2; // r11
  __int64 v3; // r11
  int v4; // r8d

  v2 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  scl_ConvertToFixedFUnits(*(_QWORD *)(a1 + 32) + 4 * v2, (_DWORD *)(*(_QWORD *)a1 + 4 * v2), 8);
  return scl_ConvertToFixedFUnits(*(_QWORD *)(a1 + 40) + 4 * v3, (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v3), v4);
}
