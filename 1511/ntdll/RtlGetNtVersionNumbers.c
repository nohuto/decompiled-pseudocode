/*
 * XREFs of RtlGetNtVersionNumbers @ 0x180081AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetNtVersionNumbers(PULONG NtMajorVersion, PULONG NtMinorVersion, PULONG NtBuildNumber)
{
  if ( NtMajorVersion )
    *NtMajorVersion = 10;
  if ( NtMinorVersion )
    *NtMinorVersion = 0;
  if ( NtBuildNumber )
    *NtBuildNumber = -268424870;
}
