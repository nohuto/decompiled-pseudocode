/*
 * XREFs of StorSqmCleanup @ 0x1C003E01C
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C005766C (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C0048698 )
  {
    result = EtwUnregister(RegHandle);
    byte_1C0048698 = 0;
  }
  return result;
}
