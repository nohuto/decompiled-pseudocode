/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1800801B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationJobObject @ 0x1800A7730 (NtQueryInformationJobObject.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  ULONG v0; // ecx
  NTSTATUS InformationJobObject; // eax

  v0 = dword_180142060;
  if ( dword_180142060 == -1 )
  {
    InformationJobObject = NtQueryInformationJobObject(
                             0LL,
                             JobObjectServerSiloServiceSessionId,
                             &dword_180142060,
                             4u,
                             0LL);
    v0 = dword_180142060;
    if ( InformationJobObject < 0 )
      v0 = 0;
    dword_180142060 = v0;
  }
  return v0;
}
