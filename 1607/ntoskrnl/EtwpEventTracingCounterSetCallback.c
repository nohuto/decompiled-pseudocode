/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x1406E8624
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     WmiQueryTraceInformation @ 0x1404C71EC (WmiQueryTraceInformation.c)
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  struct _PCW_BUFFER *v4; // r15
  __int64 v5; // r14
  unsigned __int64 **v6; // rdx
  unsigned __int64 *NextGuidEntry; // rax
  NTSTATUS v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rbx
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v14; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h] BYREF
  __int64 TraceInformation; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+37h]

  *(_DWORD *)&Name.Length = 3014700;
  Name.Buffer = L"EventTracingCounterSet";
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v4 = *(struct _PCW_BUFFER **)(a2 + 24);
  v5 = EtwpHostSiloState;
  if ( a3 == 1 )
  {
    v15 = 0LL;
    v6 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    while ( 1 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v5, v6, 0);
      if ( !NextGuidEntry )
        break;
      if ( *((_DWORD *)NextGuidEntry + 20) )
      {
        if ( (unsigned __int64 *)NextGuidEntry[5] == NextGuidEntry + 5 )
          ++HIDWORD(v17);
        else
          ++HIDWORD(v16);
      }
      else
      {
        LODWORD(v17) = v17 + 1;
      }
      v6 = (unsigned __int64 **)NextGuidEntry;
    }
    v15 = __PAIR64__(dword_1402FD814[0], dword_1402FD81C);
    LODWORD(v16) = dword_1402FD818;
    Data.Data = &v15;
    Data.Size = 24;
    return (unsigned int)PcwAddInstance(v4, &Name, 0, 1u, &Data);
  }
  else
  {
    v8 = 0;
    v9 = 0;
    Buffer = 0;
    do
    {
      v10 = EtwpAcquireLoggerContextByLoggerId(v5, v9, 0);
      if ( v10 )
      {
        v18 = 0LL;
        TraceInformation = 0LL;
        v20 = 0LL;
        if ( *(_DWORD *)(v10 + 300) == 1 )
          LODWORD(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
        else
          HIDWORD(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
        LODWORD(v20) = *(_DWORD *)(v10 + 240);
        HIDWORD(v20) = *(_DWORD *)(v10 + 344);
        WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
        v9 = Buffer;
        v14.Data = &v18;
        v14.Size = 24;
        v8 = PcwAddInstance(v4, (PCUNICODE_STRING)(v10 + 136), Buffer, 1u, &v14);
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
