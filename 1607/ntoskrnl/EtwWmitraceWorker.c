/*
 * XREFs of EtwWmitraceWorker @ 0x1406A5180
 * Callers:
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwEnableTrace @ 0x1404C7C18 (EtwEnableTrace.c)
 *     EtwpStartTrace @ 0x1404D0FB8 (EtwpStartTrace.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1406A5438 (EtwpPrepareWmitraceLoggerInfo.c)
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
  _STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v9[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v10; // [rsp+98h] [rbp-70h]
  int v11; // [rsp+9Ch] [rbp-6Ch]
  UNICODE_STRING v12; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-20h] BYREF

  v0 = EtwpHostSiloState;
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v9);
    RtlInitAnsiString(&DestinationString, qword_1402FD848);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v9[13] = dword_1402FD910;
    v9[14] = dword_1402FD914;
    v9[12] = dword_1402FD918;
    v10 = dword_1402FD91C;
    v11 = dword_1402FD920;
    v9[15] = dword_1402FD90C;
    if ( byte_1402FD889 )
    {
      RtlInitAnsiString(&DestinationString, &byte_1402FD889);
      RtlAnsiStringToUnicodeString(&v12, &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v9);
    v3 = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_1402FD889 )
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
                 (__int64)&unk_1402FD85C,
                 0LL,
                 (unsigned int)EtwpWmitraceParams,
                 v1,
                 byte_1402FD86C,
                 *(__int64 *)qword_1402FD848,
                 qword_1402FD850,
                 dword_1402FD858);
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
  dword_1402FD928 = v3;
  EtwWmitraceWork = 0;
}
