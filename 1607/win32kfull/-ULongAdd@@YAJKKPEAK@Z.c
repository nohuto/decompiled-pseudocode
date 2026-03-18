/*
 * XREFs of ?ULongAdd@@YAJKKPEAK@Z @ 0x1C02D8D50
 * Callers:
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02DA604 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongAdd(unsigned int a1, int a2, unsigned int *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1;
    return 2147942934LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
