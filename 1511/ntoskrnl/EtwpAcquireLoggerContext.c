/*
 * XREFs of EtwpAcquireLoggerContext @ 0x1404CC0A0
 * Callers:
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpCaptureString @ 0x1404CC270 (EtwpCaptureString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, unsigned int **a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned int *v6; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v4 = -1;
  *a2 = 0LL;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v3 )
    v4 = (unsigned __int16)EtwpSystemLogger[0];
  if ( v4 == (unsigned __int16)EtwpSystemLogger[0] || !*(_WORD *)(a1 + 144) )
  {
    if ( v4 == -1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 8);
      if ( v4 == 0xFFFF )
        v4 = (unsigned __int16)EtwpSystemLogger[0];
      if ( v4 >= 0x40 )
        return 3221225480LL;
    }
    v6 = EtwpAcquireLoggerContextByLoggerId(0LL, v4, 1);
    *a2 = v6;
  }
  else
  {
    result = EtwpCaptureString(a1 + 144, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    *a2 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(&UnicodeString);
    RtlFreeAnsiString(&UnicodeString);
    v6 = *a2;
  }
  return v6 == 0LL ? 0xC0000296 : 0;
}
