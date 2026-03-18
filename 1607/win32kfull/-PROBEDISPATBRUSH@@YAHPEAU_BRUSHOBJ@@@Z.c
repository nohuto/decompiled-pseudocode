/*
 * XREFs of ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02AB570
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PROBEDISPATBRUSH(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (struct _BRUSHOBJ *)W32UserProbeAddress;
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1->iSolidColor) == -1 )
    return 1;
  return v1;
}
