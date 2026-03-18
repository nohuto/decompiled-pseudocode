/*
 * XREFs of SEmScaleY @ 0x1C01460AC
 * Callers:
 *     SubstituteVertMetrics @ 0x1C014604C (SubstituteVertMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DDA08 (SubstituteHorMetrics.c)
 * Callees:
 *     UEmScaleY @ 0x1C01460C4 (UEmScaleY.c)
 */

__int64 __fastcall SEmScaleY(__int64 a1, __int64 a2)
{
  if ( (a2 & 0x8000u) == 0LL )
    return UEmScaleY(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return (unsigned __int16)-UEmScaleY(a1, a2);
}
