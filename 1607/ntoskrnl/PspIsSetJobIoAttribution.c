/*
 * XREFs of PspIsSetJobIoAttribution @ 0x1404D49E4
 * Callers:
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[132];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1340) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1056);
  }
  if ( !a3
    && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (int)PspIsSetJobIoAttributionJobPreCallback, 0, 0, (__int64)a1, 5) < 0 )
  {
    return 1;
  }
  return v4;
}
