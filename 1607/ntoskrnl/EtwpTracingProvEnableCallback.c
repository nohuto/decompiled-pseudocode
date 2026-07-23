/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x140581C7C
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A4518 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdi

  if ( ControlCode == 2 )
  {
    for ( i = 0; i < 0x40; ++i )
    {
      v5 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, i, 0);
      v7 = (unsigned int *)v5;
      if ( v5 )
      {
        EtwpEventWriteTemplateSession(v6, &ETW_EVENT_SESSION_INFO, v5);
        EtwpReleaseLoggerContext(v7, 0);
      }
    }
  }
}
