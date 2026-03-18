/*
 * XREFs of IoIsWdmVersionAvailable @ 0x1405BFD2C
 * Callers:
 *     VerifierIoIsWdmVersionAvailable @ 0x140741F98 (VerifierIoIsWdmVersionAvailable.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsWdmVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion)
{
  BOOLEAN result; // al

  if ( MajorVersion < 6u )
    return 1;
  result = 0;
  if ( MajorVersion == 6 && !MinorVersion )
    return 1;
  return result;
}
