/*
 * XREFs of EtwpGetDisallowList @ 0x1406A01C0
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetDisallowList(__int64 a1, unsigned __int16 *a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // edi

  v5 = *a4;
  v6 = 0;
  v8 = EtwpAcquireLoggerContextByLoggerId(a1, *a2, 0);
  if ( v8 )
  {
    memset(a3, 0, *a4);
    v9 = KeAbPreAcquire(v8 + 688, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 688), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 688), v9, v8 + 688);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = 16 * *(unsigned __int16 *)(v8 + 880);
    if ( v10 > v5 )
      v6 = -1073741789;
    else
      memmove(a3, *(const void **)(v8 + 888), v10);
    *a4 = v10;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 688), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 688));
    KeAbPostRelease(v8 + 688);
    EtwpReleaseLoggerContext((unsigned int *)v8, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
