/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140505BCC (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(PCUNICODE_STRING String2, char a2)
{
  __int64 SiloDriverState; // rsi
  unsigned int i; // edi
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  char v8; // r8

  if ( !String2 )
    return 0LL;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  for ( i = 0; i < 0x40; ++i )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, i, 0);
    v7 = v6;
    if ( v6 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 38), String2, 1u) )
      {
        if ( a2 == 1 )
          KeWaitForSingleObject(v7 + 162, Executive, 0, 0, 0LL);
        if ( v7[84] )
          goto LABEL_12;
        v8 = a2;
      }
      else
      {
        v8 = 0;
      }
      EtwpReleaseLoggerContext(SiloDriverState, v7, v8);
    }
  }
  v7 = 0LL;
LABEL_12:
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
  return v7;
}
