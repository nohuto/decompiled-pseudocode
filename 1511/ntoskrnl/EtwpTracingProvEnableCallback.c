/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x14054B854
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 SiloDriverState; // rdi
  unsigned int i; // ebx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rsi

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  if ( ControlCode == 2 )
  {
    for ( i = 0; i < 0x40; ++i )
    {
      v7 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, i, 0);
      v9 = v7;
      if ( v7 )
      {
        EtwpEventWriteTemplateSession(v8, &ETW_EVENT_SESSION_INFO, v7);
        EtwpReleaseLoggerContext(SiloDriverState, v9, 0);
      }
    }
  }
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
}
