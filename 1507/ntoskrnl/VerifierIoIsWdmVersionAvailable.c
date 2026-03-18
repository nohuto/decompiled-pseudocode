/*
 * XREFs of VerifierIoIsWdmVersionAvailable @ 0x140741F98
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
