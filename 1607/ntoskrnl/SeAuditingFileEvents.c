/*
 * XREFs of SeAuditingFileEvents @ 0x140690928
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140300B84 && AccessGranted
    || byte_140300B85 && !AccessGranted
    || byte_140300B86 && AccessGranted
    || byte_140300B87 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
