/*
 * XREFs of EtwpGetCompressionSettings @ 0x14022A858
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  _DWORD *v7; // rbp
  unsigned __int64 *v8; // rbx
  __int64 v9; // rsi

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[106], v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (unsigned __int64 *)(v6 + 952);
    v9 = KeAbPreAcquire(v6 + 952, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    a2[1] = v7[246];
    a2[2] = v7[245];
    a2[3] = v7[247];
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
