/*
 * XREFs of EtwShutdown @ 0x1404F87F0
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     EtwpServerSiloTerminateNotify @ 0x140663CF0 (EtwpServerSiloTerminateNotify.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpTraceSystemShutdown @ 0x1406625C8 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 SiloDriverState; // rdi
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // bp
  __int16 v5; // bx
  unsigned int *v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_BYTE *)(SiloDriverState + 5025) = 1;
  }
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = 63;
  HIDWORD(v7[5]) = 0x20000;
  do
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v5, 0);
    if ( !v6 )
      goto LABEL_4;
    if ( a1 )
    {
      if ( !v4 && (v6[3] & 0x400000) == 0 )
        goto LABEL_11;
    }
    else if ( !v4 && (v6[3] & 0x400) != 0 )
    {
LABEL_11:
      EtwpReleaseLoggerContext(SiloDriverState, v6, 0);
      goto LABEL_4;
    }
    if ( v5 )
      LOWORD(v7[1]) = v5;
    else
      LOWORD(v7[1]) = -1;
    *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 73);
    EtwpReleaseLoggerContext(SiloDriverState, v6, 0);
    if ( !a1 )
      ++EtwpStopTraceCount;
    EtwpStopTrace((__int64)v7, 1);
LABEL_4:
    --v5;
  }
  while ( v5 >= 0 );
  if ( !a1 )
    EtwpStopTraceCount = 0;
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
}
