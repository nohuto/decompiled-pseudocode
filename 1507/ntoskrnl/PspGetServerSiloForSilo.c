/*
 * XREFs of PspGetServerSiloForSilo @ 0x1400CEE80
 * Callers:
 *     PspGetThreadServerSilo @ 0x1400CE9B0 (PspGetThreadServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloForSilo(__int64 a1)
{
  while ( a1 && !*(_QWORD *)(a1 + 256) )
    a1 = *(_QWORD *)(a1 + 152);
  return a1;
}
