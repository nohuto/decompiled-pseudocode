/*
 * XREFs of PsGetVersion @ 0x1400B4EE8
 * Callers:
 *     Win7PsGetVersion @ 0x140654504 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x1406545D0 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x14065469C (Win8PsGetVersion.c)
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
    *BuildNumber = 14393;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
