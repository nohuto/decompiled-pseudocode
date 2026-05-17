/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x18000A490
 * Callers:
 *     EtwpGetPrivateLoggerContext @ 0x18000A408 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi

  *a2 = 0LL;
  if ( !a1 )
    return 4201LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 & 0xFFFF7FFF;
    if ( (v5 & 0xFFFF7FFF) >= 0x40 || !EtwpLoggerArray )
      goto LABEL_5;
    v8 = 2LL * v6;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
    v9 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
    if ( (v9 & 1) == 0 )
      break;
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v8 + 8));
LABEL_5:
    if ( ++v5 >= 0x40 )
      return 4201LL;
  }
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v9 + 152, a1, a3) )
  {
    v8 = 2LL * v5;
    goto LABEL_8;
  }
  *a2 = v9;
  return 0LL;
}
