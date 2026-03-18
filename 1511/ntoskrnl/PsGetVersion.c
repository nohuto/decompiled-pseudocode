/*
 * XREFs of PsGetVersion @ 0x1400F2F38
 * Callers:
 *     Win7PsGetVersion @ 0x14061F28C (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x14061F358 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x14061F424 (Win8PsGetVersion.c)
 *     VerifierPsGetVersion @ 0x1406C0C0C (VerifierPsGetVersion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = 10586;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
