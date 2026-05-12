/*
 * XREFs of StorSqmCleanup @ 0x1C0044D7C
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C005E9D4 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C004F7E1 )
  {
    result = EtwUnregister(RegHandle);
    byte_1C004F7E1 = 0;
  }
  return result;
}
