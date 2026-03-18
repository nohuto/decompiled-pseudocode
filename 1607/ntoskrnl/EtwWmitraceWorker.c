/*
 * XREFs of EtwWmitraceWorker @ 0x1406A5048
 * Callers:
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     EtwpQueryTrace @ 0x14048DD54 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwEnableTrace @ 0x1404E4F60 (EtwEnableTrace.c)
 *     EtwpStartTrace @ 0x1404EEEF0 (EtwpStartTrace.c)
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1406A5300 (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rsi
  unsigned int v1; // r14d
  int Trace; // eax
  int v3; // ebx
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int started; // eax
  STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v9[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v10; // [rsp+98h] [rbp-70h]
  int v11; // [rsp+9Ch] [rbp-6Ch]
  UNICODE_STRING v12; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-20h] BYREF

  v0 = EtwpHostSiloState;
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v9);
    RtlInitAnsiString(&DestinationString, qword_1402FD868);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v9[13] = dword_1402FD930;
    v9[14] = dword_1402FD934;
    v9[12] = dword_1402FD938;
    v10 = dword_1402FD93C;
    v11 = dword_1402FD940;
    v9[15] = dword_1402FD92C;
    if ( byte_1402FD8A9 )
    {
      RtlInitAnsiString(&DestinationString, &byte_1402FD8A9);
      RtlAnsiStringToUnicodeString(&v12, &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v9);
    v3 = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_1402FD8A9 )
      RtlFreeAnsiString(&v12);
  }
  else
  {
    v1 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v9);
      Trace = EtwpQueryTrace(v0, (__int64)v9);
      v3 = Trace;
      if ( Trace < 0 )
        goto LABEL_17;
      v6 = EtwpStopTrace(v0, v9, 0);
      v3 = v6;
      if ( v6 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v6);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          v3 = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_27;
        }
        EtwpPrepareWmitraceLoggerInfo(v9);
        Trace = EtwpQueryTrace(v0, (__int64)v9);
        v3 = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v1 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v1 = 0;
          }
          v4 = EtwEnableTrace(
                 (__int64)&unk_1402FD87C,
                 0LL,
                 (unsigned int)EtwpWmitraceParams,
                 v1,
                 byte_1402FD88C,
                 *(__int64 *)qword_1402FD868,
                 qword_1402FD870,
                 dword_1402FD878);
          v3 = v4;
          if ( v4 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v4);
          goto LABEL_27;
        }
LABEL_17:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_27;
      }
      EtwpPrepareWmitraceLoggerInfo(v9);
      Trace = EtwpQueryTrace(v0, (__int64)v9);
      v3 = Trace;
      if ( Trace < 0 )
        goto LABEL_17;
      v10 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v9);
      v3 = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_27:
  dword_1402FD948 = v3;
  EtwWmitraceWork = 0;
}
