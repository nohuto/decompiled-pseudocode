/*
 * XREFs of SEmScaleY @ 0x1C00A1B40
 * Callers:
 *     SubstituteVertMetrics @ 0x1C00A1AE0 (SubstituteVertMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DAE9C (SubstituteHorMetrics.c)
 * Callees:
 *     UEmScaleY @ 0x1C00A1B58 (UEmScaleY.c)
 */

__int64 __fastcall SEmScaleY(__int64 a1, __int64 a2)
{
  if ( (a2 & 0x8000u) == 0LL )
    return UEmScaleY(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return (unsigned __int16)-UEmScaleY(a1, a2);
}
