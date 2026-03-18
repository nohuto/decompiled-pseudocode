/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405522A8 (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(PCUNICODE_STRING String2, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int *v6; // rbx
  char v7; // dl

  if ( !String2 )
    return 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = EtwpAcquireLoggerContextByLoggerId(v4, 0);
    v6 = (unsigned int *)v5;
    if ( v5 )
      break;
LABEL_7:
    if ( ++v4 >= 0x40 )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v5 + 152), String2, 1u) )
  {
    v7 = 0;
LABEL_6:
    EtwpReleaseLoggerContext(v6, v7);
    goto LABEL_7;
  }
  if ( a2 == 1 )
    KeWaitForSingleObject(v6 + 162, Executive, 0, 0, 0LL);
  if ( !v6[84] )
  {
    v7 = a2;
    goto LABEL_6;
  }
  return v6;
}
