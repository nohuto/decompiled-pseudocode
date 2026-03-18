/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1404CA78C
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(PCUNICODE_STRING String2, unsigned int *a2)
{
  __int64 SiloDriverState; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int *v7; // rax
  unsigned int *v8; // rsi

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v5 = 0;
  v6 = -1073741162;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v5, 0);
    v8 = v7;
    if ( v7 )
      break;
LABEL_3:
    if ( ++v5 >= 0x40 )
      goto LABEL_4;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 38), String2, 1u) )
  {
    EtwpReleaseLoggerContext(SiloDriverState, v8, 0);
    goto LABEL_3;
  }
  EtwpReleaseLoggerContext(SiloDriverState, v8, 0);
  v6 = 0;
  *a2 = v5;
LABEL_4:
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
  return v6;
}
