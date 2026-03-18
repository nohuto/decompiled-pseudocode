/*
 * XREFs of PsGetJobServerSilo @ 0x1400222FC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, _QWORD *a2)
{
  __int64 JobSilo; // rax
  void *ServerSiloForSilo; // rax
  void *v6; // rbx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo();
  if ( JobSilo )
  {
    ServerSiloForSilo = (void *)PspGetServerSiloForSilo(JobSilo);
    v6 = ServerSiloForSilo;
    if ( ServerSiloForSilo )
    {
      ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
      *a2 = v6;
    }
  }
  return 0LL;
}
