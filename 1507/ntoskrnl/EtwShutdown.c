/*
 * XREFs of EtwShutdown @ 0x1405674D4
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     EtwpServerSiloTerminateNotify @ 0x1406E6DD0 (EtwpServerSiloTerminateNotify.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpTraceSystemShutdown @ 0x1406E56E0 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  bool IsCurrentThreadInServerSilo; // si
  __int16 i; // bx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v8[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !a1 )
  {
    EtwpTraceSystemShutdown();
    PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v7, v5);
    v6 = v7;
    *(_BYTE *)(v7 + 425) = 1;
    PsDereferenceMonitorContextServerSilo(v6);
  }
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[0]) = 176;
  HIDWORD(v8[5]) = 0x20000;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  for ( i = 63; i >= 0; --i )
  {
    v4 = EtwpAcquireLoggerContextByLoggerId(i, 0);
    if ( !v4 )
      continue;
    if ( a1 )
    {
      if ( !IsCurrentThreadInServerSilo && (*(_DWORD *)(v4 + 12) & 0x400000) == 0 )
      {
LABEL_12:
        EtwpReleaseLoggerContext((unsigned int *)v4, 0);
        continue;
      }
    }
    else if ( (*(_DWORD *)(v4 + 12) & 0x400) != 0 )
    {
      goto LABEL_12;
    }
    if ( i )
      LOWORD(v8[1]) = i;
    else
      LOWORD(v8[1]) = -1;
    *(_OWORD *)&v8[3] = *(_OWORD *)(v4 + 292);
    EtwpReleaseLoggerContext((unsigned int *)v4, 0);
    if ( !a1 )
      ++EtwpStopTraceCount;
    EtwpStopTrace((__int64)v8, 1);
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
