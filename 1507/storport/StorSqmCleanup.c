/*
 * XREFs of StorSqmCleanup @ 0x1C003B64C
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0053730 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C0044698 )
  {
    result = EtwUnregister(RegHandle);
    byte_1C0044698 = 0;
  }
  return result;
}
