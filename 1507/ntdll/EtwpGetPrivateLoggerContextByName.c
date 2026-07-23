/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x18000A490
 * Callers:
 *     EtwpGetPrivateLoggerContext @ 0x18000A408 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi

  *a2 = 0LL;
  if ( !String2 )
    return 4201LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4 & 0xFFFF7FFF;
    if ( (v4 & 0xFFFF7FFF) >= 0x40 || !EtwpLoggerArray )
      goto LABEL_5;
    v7 = 2LL * v5;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
    if ( (v8 & 1) == 0 )
      break;
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
LABEL_5:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v8 + 152), String2, 1u) )
  {
    v7 = 2LL * v4;
    goto LABEL_8;
  }
  *a2 = v8;
  return 0LL;
}
