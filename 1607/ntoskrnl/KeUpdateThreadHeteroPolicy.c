/*
 * XREFs of KeUpdateThreadHeteroPolicy @ 0x1403DD090
 * Callers:
 *     PopUpdateSingleThreadHeteroPolicies @ 0x140672EEC (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 */

char __fastcall KeUpdateThreadHeteroPolicy(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 126);
  if ( result >= 0 )
  {
    result &= ~0x80u;
    if ( result == 8 )
      return KiSetHeteroPolicyThread(a1, 8, 1, 1);
  }
  return result;
}
