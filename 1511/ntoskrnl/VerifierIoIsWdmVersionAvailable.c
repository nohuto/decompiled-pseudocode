/*
 * XREFs of VerifierIoIsWdmVersionAvailable @ 0x1406C07A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierIoIsWdmVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion)
{
  return pXdvIoIsWdmVersionAvailable(MajorVersion, MinorVersion);
}
