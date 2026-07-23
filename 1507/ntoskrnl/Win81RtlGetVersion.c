/*
 * XREFs of Win81RtlGetVersion @ 0x14069E158
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x14054DFF8 (RtlGetVersion.c)
 */

NTSTATUS __fastcall Win81RtlGetVersion(_OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 3;
    a1->dwBuildNumber = 9600;
    a1->szCSDVersion[0] = 0;
    if ( ((a1->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
