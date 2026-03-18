/*
 * XREFs of EtwpGetDisallowList @ 0x14055CFB0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetDisallowList(unsigned __int16 *a1, void *a2, unsigned int *a3)
{
  unsigned int v4; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // esi

  v4 = *a3;
  v6 = 0;
  v7 = EtwpAcquireLoggerContextByLoggerId(*a1, 0);
  if ( v7 )
  {
    KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
    memset(a2, 0, *a3);
    v8 = 16 * *(unsigned __int16 *)(v7 + 896);
    if ( v8 > v4 )
      v6 = -1073741789;
    else
      memmove(a2, *(const void **)(v7 + 904), v8);
    *a3 = v8;
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    EtwpReleaseLoggerContext((unsigned int *)v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
