/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1800801B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationJobObject @ 0x1800A7730 (NtQueryInformationJobObject.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  unsigned int v0; // ecx
  int InformationJobObject; // eax

  v0 = dword_180142060;
  if ( dword_180142060 == -1 )
  {
    InformationJobObject = NtQueryInformationJobObject(0LL, 39LL, &dword_180142060, 4LL, 0LL);
    v0 = dword_180142060;
    if ( InformationJobObject < 0 )
      v0 = 0;
    dword_180142060 = v0;
  }
  return v0;
}
