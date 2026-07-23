/*
 * XREFs of EtwpAcquireLoggerContext @ 0x14048E8C0
 * Callers:
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140490580 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0xFFFFFFFFLL;
  v7 = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  *a3 = 0LL;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = (unsigned __int16)EtwpSystemLogger[0];
  if ( (_DWORD)v7 == (unsigned __int16)EtwpSystemLogger[0] || !*(_WORD *)(a2 + 144) )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = *(unsigned __int16 *)(a2 + 8);
      if ( (_DWORD)v7 == 0xFFFF )
        v7 = (unsigned __int16)EtwpSystemLogger[0];
      if ( (unsigned int)v7 >= 0x40 )
        return 3221225480LL;
    }
    LOBYTE(v5) = 1;
    v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, v5);
    *a3 = v9;
    return v9 == 0 ? 0xC0000296 : 0;
  }
  result = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &UnicodeString);
  if ( (int)result >= 0 )
  {
    LOBYTE(v11) = 1;
    *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v11);
    RtlFreeAnsiString(&UnicodeString);
    v9 = *a3;
    return v9 == 0 ? 0xC0000296 : 0;
  }
  return result;
}
