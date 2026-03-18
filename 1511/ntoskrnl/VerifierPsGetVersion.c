/*
 * XREFs of VerifierPsGetVersion @ 0x1406C0C0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierPsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  return pXdvPsGetVersion(MajorVersion, MinorVersion, BuildNumber, CSDVersion);
}
