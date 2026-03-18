/*
 * XREFs of SeAuditingFileEvents @ 0x140690844
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140300BC4 && AccessGranted
    || byte_140300BC5 && !AccessGranted
    || byte_140300BC6 && AccessGranted
    || byte_140300BC7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
