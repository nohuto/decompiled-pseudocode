/*
 * XREFs of EtwShutdown @ 0x140531A30
 * Callers:
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpTraceSystemShutdown @ 0x1406A3060 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // si
  __int16 v5; // bx
  __int64 v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_BYTE *)(v2 + 5025) = 1;
  }
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = 63;
  HIDWORD(v7[5]) = 0x20000;
  do
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( !v6 )
      goto LABEL_8;
    if ( a1 )
    {
      if ( !v4 && (*(_DWORD *)(v6 + 12) & 0x400000) == 0 )
        goto LABEL_7;
    }
    else if ( !v4 && (*(_DWORD *)(v6 + 12) & 0x400) != 0 )
    {
LABEL_7:
      EtwpReleaseLoggerContext((unsigned int *)v6, 0);
      goto LABEL_8;
    }
    if ( v5 )
      LOWORD(v7[1]) = v5;
    else
      LOWORD(v7[1]) = -1;
    *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 276);
    EtwpReleaseLoggerContext((unsigned int *)v6, 0);
    if ( !a1 )
      ++EtwpStopTraceCount;
    EtwpStopTrace(v2, v7, 1);
LABEL_8:
    --v5;
  }
  while ( v5 >= 0 );
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
