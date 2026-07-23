/*
 * XREFs of EtwWmitraceWorker @ 0x1406E7908
 * Callers:
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     EtwEnableTrace @ 0x1405531FC (EtwEnableTrace.c)
 *     EtwpStartTrace @ 0x140559FF0 (EtwpStartTrace.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1406E7B98 (EtwpPrepareWmitraceLoggerInfo.c)
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
    RtlInitAnsiString(&DestinationString, qword_1403275A8);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v10 = dword_140327670;
    v11 = dword_140327674;
    v9 = dword_140327678;
    v13 = dword_14032767C;
    v14 = dword_140327680;
    v12 = dword_14032766C;
    if ( byte_1403275E9 )
    {
      RtlInitAnsiString(&DestinationString, &byte_1403275E9);
      RtlAnsiStringToUnicodeString(&v15, &DestinationString, 1u);
    }
    started = EtwpStartTrace((__int64)v8);
    v2 = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_1403275E9 )
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
                 &xmmword_1403275BC,
                 0LL,
                 EtwpWmitraceParams,
                 v0,
                 byte_1403275CC,
                 *(__int64 *)qword_1403275A8,
                 qword_1403275B0,
                 dword_1403275B8);
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
  dword_140327688 = v2;
  EtwWmitraceWork = 0;
}
