/*
 * XREFs of PsGetVersion @ 0x140159588
 * Callers:
 *     Win7PsGetVersion @ 0x14069E00C (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x14069E0D8 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x14069E1A4 (Win8PsGetVersion.c)
 *     VerifierPsGetVersion @ 0x14074244C (VerifierPsGetVersion.c)
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
    *BuildNumber = 10240;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
