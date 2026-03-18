/*
 * XREFs of KeUpdateThreadHeteroPolicy @ 0x14040152C
 * Callers:
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1406BAD90 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
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
