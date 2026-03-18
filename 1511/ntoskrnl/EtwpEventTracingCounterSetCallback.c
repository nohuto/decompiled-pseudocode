/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x1406A10C4
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PcwAddInstance @ 0x1404B070C (PcwAddInstance.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  struct _PCW_BUFFER *v4; // r15
  ULONG_PTR v5; // rcx
  unsigned __int64 *NextGuidEntry; // rax
  NTSTATUS v7; // esi
  __int64 SiloDriverState; // r14
  unsigned int v9; // edi
  unsigned int *v10; // rbx
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v14; // [rsp+60h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+Fh] BYREF
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  __int64 v18; // [rsp+88h] [rbp+27h] BYREF
  __int64 TraceInformation; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+37h]

  *(_DWORD *)&Name.Length = 3014700;
  Name.Buffer = L"EventTracingCounterSet";
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v4 = *(struct _PCW_BUFFER **)(a2 + 24);
  if ( a3 == 1 )
  {
    v16 = 0;
    v17 = 0;
    v15 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v5, 0);
      v5 = (ULONG_PTR)NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      if ( *((_DWORD *)NextGuidEntry + 20) )
      {
        if ( (unsigned __int64 *)NextGuidEntry[5] == NextGuidEntry + 5 )
          ++v17;
        else
          ++HIDWORD(v15);
      }
      else
      {
        ++v16;
      }
    }
    LODWORD(v15) = dword_1402D84DC;
    *(_QWORD *)((char *)&v15 + 4) = qword_1402D84D4;
    Data.Data = &v15;
    Data.Size = 24;
    return (unsigned int)PcwAddInstance(v4, &Name, 0, 1u, &Data);
  }
  else
  {
    v7 = 0;
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v9 = 0;
    Buffer = 0;
    while ( 1 )
    {
      v10 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v9, 0);
      if ( v10 )
      {
        v18 = 0LL;
        TraceInformation = 0LL;
        v20 = 0LL;
        if ( v10[79] == 1 )
          LODWORD(v18) = v10[1] * v10[62];
        else
          HIDWORD(v18) = v10[1] * v10[62];
        LODWORD(v20) = v10[64];
        HIDWORD(v20) = v10[90];
        WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
        v9 = Buffer;
        v14.Data = &v18;
        v14.Size = 24;
        v7 = PcwAddInstance(v4, (PCUNICODE_STRING)(v10 + 38), Buffer, 1u, &v14);
        EtwpReleaseLoggerContext(SiloDriverState, v10, 0);
        if ( v7 < 0 )
          break;
      }
      Buffer = ++v9;
      if ( v9 >= 0x40 )
      {
        PsDereferenceMonitorContextServerSilo(SiloDriverState);
        return (unsigned int)v7;
      }
    }
  }
  return (unsigned int)v7;
}
