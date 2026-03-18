/*
 * XREFs of EtwpUpdateDisallowList @ 0x1405513E4
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int *v5; // rdi
  unsigned int updated; // ebx

  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, 0);
  if ( v5 )
  {
    KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
    updated = EtwpUpdateDisallowedGuids(v5 + 224, a2, a3);
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    EtwpReleaseLoggerContext(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
