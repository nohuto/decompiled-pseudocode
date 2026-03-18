/*
 * XREFs of PspGetNextSilo @ 0x1405269DC
 * Callers:
 *     PspStartMonitorDeferred @ 0x140526910 (PspStartMonitorDeferred.c)
 *     PsRootSiloInformation @ 0x14063FBD4 (PsRootSiloInformation.c)
 *     PspUnregisterMonitorDeferred @ 0x140640C04 (PspUnregisterMonitorDeferred.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 * Callees:
 *     PspGetNextJob @ 0x1403E9A68 (PspGetNextJob.c)
 */

__int64 *__fastcall PspGetNextSilo(__int64 *a1, char a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  while ( 1 )
  {
    result = PspGetNextJob(a1);
    if ( !result )
      break;
    v4 = result[156];
    if ( v4 )
    {
      if ( !a2 || *(_QWORD *)(v4 + 136) )
        break;
    }
    a1 = result;
  }
  return result;
}
