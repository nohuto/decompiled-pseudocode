/*
 * XREFs of EtwpAcquireLoggerContext @ 0x14040EDC0
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0xFFFFFFFFLL;
  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  v6 = (unsigned __int16)EtwpSystemLogger[0];
  if ( !v5 )
    v4 = (unsigned __int16)EtwpSystemLogger[0];
  if ( (_DWORD)v4 == (unsigned __int16)EtwpSystemLogger[0] || !*(_WORD *)(a1 + 144) )
  {
    if ( (_DWORD)v4 == -1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 8);
      if ( (_DWORD)v4 == 0xFFFF )
        v4 = (unsigned __int16)EtwpSystemLogger[0];
      if ( (unsigned int)v4 >= 0x40 )
        return 3221225480LL;
    }
    LOBYTE(v6) = 1;
    v7 = EtwpAcquireLoggerContextByLoggerId(v4, v6);
    *a2 = v7;
    return v7 == 0 ? 0xC0000296 : 0;
  }
  result = EtwpCaptureString(a1 + 144, &UnicodeString);
  if ( (int)result >= 0 )
  {
    *a2 = EtwpAcquireLoggerContextByLoggerName(&UnicodeString);
    RtlFreeAnsiString(&UnicodeString);
    v7 = *a2;
    return v7 == 0 ? 0xC0000296 : 0;
  }
  return result;
}
