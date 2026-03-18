/*
 * XREFs of EtwpGetDisallowList @ 0x1406601A0
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetDisallowList(unsigned __int16 *a1, void *a2, unsigned int *a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // esi
  __int64 SiloDriverState; // r14
  unsigned int *v9; // rbp
  __int64 v10; // rdi
  unsigned int v11; // edi

  v3 = *a3;
  v5 = 0;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v9 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, *a1, 0);
  if ( v9 )
  {
    memset(a2, 0, *a3);
    v10 = KeAbPreAcquire((ULONG_PTR)(v9 + 176), 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 88, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v9 + 88, v10, (ULONG_PTR)(v9 + 176));
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = 16 * *((unsigned __int16 *)v9 + 448);
    if ( v11 > v3 )
      v5 = -1073741789;
    else
      memmove(a2, *((const void **)v9 + 113), v11);
    *a3 = v11;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 88, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9 + 88);
    KeAbPostRelease((ULONG_PTR)(v9 + 176));
    EtwpReleaseLoggerContext(SiloDriverState, v9, 0);
  }
  else
  {
    v5 = -1073741811;
  }
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
  return v5;
}
