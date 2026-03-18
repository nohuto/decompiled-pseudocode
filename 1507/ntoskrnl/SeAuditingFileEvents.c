/*
 * XREFs of SeAuditingFileEvents @ 0x1406D3CBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_14032BBE4 && AccessGranted
    || byte_14032BBE5 && !AccessGranted
    || byte_14032BBE6 && AccessGranted
    || byte_14032BBE7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
