/*
 * XREFs of EtwWmitraceWorker @ 0x140664830
 * Callers:
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwEnableTrace @ 0x1405060E8 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x140664AC0 (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  int v0; // esi
  int Trace; // eax
  int v2; // ebx
  int v3; // eax
  int updated; // eax
  int v5; // eax
  int started; // eax
  _STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[48]; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+80h] [rbp-80h]
  int v10; // [rsp+84h] [rbp-7Ch]
  int v11; // [rsp+88h] [rbp-78h]
  int v12; // [rsp+8Ch] [rbp-74h]
  int v13; // [rsp+90h] [rbp-70h]
  int v14; // [rsp+94h] [rbp-6Ch]
  UNICODE_STRING v15; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-20h] BYREF

  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v8);
    RtlInitAnsiString(&DestinationString, qword_1402D81C8);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v10 = dword_1402D8290;
    v11 = dword_1402D8294;
    v9 = dword_1402D8298;
    v13 = dword_1402D829C;
    v14 = dword_1402D82A0;
    v12 = dword_1402D828C;
    if ( byte_1402D8209 )
    {
      RtlInitAnsiString(&DestinationString, &byte_1402D8209);
      RtlAnsiStringToUnicodeString(&v15, &DestinationString, 1u);
    }
    started = EtwpStartTrace((__int64)v8);
    v2 = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_1402D8209 )
      RtlFreeAnsiString(&v15);
  }
  else
  {
    v0 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v8);
      Trace = EtwpQueryTrace((__int64)v8);
      v2 = Trace;
      if ( Trace < 0 )
        goto LABEL_17;
      v5 = EtwpStopTrace((__int64)v8, 0);
      v2 = v5;
      if ( v5 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v5);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          v2 = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_27;
        }
        EtwpPrepareWmitraceLoggerInfo(v8);
        Trace = EtwpQueryTrace((__int64)v8);
        v2 = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v0 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v0 = 0;
          }
          v3 = EtwEnableTrace(
                 (int)&unk_1402D81DC,
                 0,
                 EtwpWmitraceParams,
                 v0,
                 byte_1402D81EC,
                 *(__int64 *)qword_1402D81C8,
                 qword_1402D81D0,
                 dword_1402D81D8);
          v2 = v3;
          if ( v3 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v3);
          goto LABEL_27;
        }
LABEL_17:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_27;
      }
      EtwpPrepareWmitraceLoggerInfo(v8);
      Trace = EtwpQueryTrace((__int64)v8);
      v2 = Trace;
      if ( Trace < 0 )
        goto LABEL_17;
      v13 |= 0x80000u;
      updated = EtwpUpdateTrace((__int64)v8);
      v2 = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_27:
  dword_1402D82A8 = v2;
  EtwWmitraceWork = 0;
}
