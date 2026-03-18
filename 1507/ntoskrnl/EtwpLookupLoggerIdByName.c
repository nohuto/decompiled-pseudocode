/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1404D630C
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(PCUNICODE_STRING String2, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned int *v6; // rdi
  __int64 result; // rax

  v4 = 0;
  while ( 1 )
  {
    v5 = EtwpAcquireLoggerContextByLoggerId(v4, 0);
    v6 = (unsigned int *)v5;
    if ( v5 )
      break;
LABEL_3:
    if ( ++v4 >= 0x40 )
      return 3221226134LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v5 + 152), String2, 1u) )
  {
    EtwpReleaseLoggerContext(v6, 0);
    goto LABEL_3;
  }
  EtwpReleaseLoggerContext(v6, 0);
  result = 0LL;
  *a2 = v4;
  return result;
}
