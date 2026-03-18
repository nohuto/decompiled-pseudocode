/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140721358
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PCW_BUFFER *v5; // r14
  __int64 *v6; // rcx
  unsigned __int64 *NextGuidEntry; // rax
  NTSTATUS v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rbx
  ULONG Buffer; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+38h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+48h] [rbp-11h] BYREF
  struct _PCW_DATA v14; // [rsp+58h] [rbp-1h] BYREF
  __int128 v15; // [rsp+68h] [rbp+Fh] BYREF
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 TraceInformation; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+90h] [rbp+37h]

  *(_DWORD *)&Name.Length = 3014700;
  Name.Buffer = L"EventTracingCounterSet";
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v5 = *(struct _PCW_BUFFER **)(a2 + 24);
  if ( a3 == 1 )
  {
    v16 = 0;
    v17 = 0;
    v15 = 0LL;
    v6 = 0LL;
    while ( 1 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v6, 0, a3, a4);
      v6 = (__int64 *)NextGuidEntry;
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
    LODWORD(v15) = dword_14032780C;
    *(_QWORD *)((char *)&v15 + 4) = qword_140327804;
    Data.Data = &v15;
    Data.Size = 24;
    return (unsigned int)PcwAddInstance(v5, &Name, 0, 1u, &Data);
  }
  else
  {
    v8 = 0;
    v9 = 0;
    Buffer = 0;
    do
    {
      v10 = EtwpAcquireLoggerContextByLoggerId(v9, 0);
      if ( v10 )
      {
        v18 = 0LL;
        TraceInformation = 0LL;
        v20 = 0LL;
        if ( *(_DWORD *)(v10 + 316) == 1 )
          LODWORD(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 248);
        else
          HIDWORD(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 248);
        LODWORD(v20) = *(_DWORD *)(v10 + 256);
        HIDWORD(v20) = *(_DWORD *)(v10 + 360);
        WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
        v9 = Buffer;
        v14.Data = &v18;
        v14.Size = 24;
        v8 = PcwAddInstance(v5, (PCUNICODE_STRING)(v10 + 152), Buffer, 1u, &v14);
        EtwpReleaseLoggerContext((unsigned int *)v10, 0);
        if ( v8 < 0 )
          break;
      }
      Buffer = ++v9;
    }
    while ( v9 < 0x40 );
  }
  return (unsigned int)v8;
}
