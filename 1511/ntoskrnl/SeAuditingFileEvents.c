/*
 * XREFs of SeAuditingFileEvents @ 0x1406515BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_1402DB884 && AccessGranted
    || byte_1402DB885 && !AccessGranted
    || byte_1402DB886 && AccessGranted
    || byte_1402DB887 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
