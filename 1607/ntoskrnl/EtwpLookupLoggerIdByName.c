/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1404904F8
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi

  v6 = -1073741162;
  v7 = 0;
  while ( 1 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 0LL);
    v9 = v8;
    if ( v8 )
      break;
LABEL_3:
    if ( ++v7 >= 0x40 )
      return v6;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 136), a2, 1u) )
  {
    EtwpReleaseLoggerContext(v9, 0LL);
    goto LABEL_3;
  }
  EtwpReleaseLoggerContext(v9, 0LL);
  v6 = 0;
  *a3 = v7;
  return v6;
}
