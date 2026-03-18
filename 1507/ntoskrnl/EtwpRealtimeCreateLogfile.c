/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x1404A13F4
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpDelayCreate @ 0x1404AC7C0 (EtwpDelayCreate.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     EtwpExpandFileName @ 0x14055903C (EtwpExpandFileName.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140564418 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeRestoreState @ 0x1405BC764 (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405C13D0 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1406EAE28 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // eax
  WCHAR *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1 + 376;
  if ( *(_QWORD *)(a1 + 376) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 384) )
    goto LABEL_20;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 160) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = RtlStringCbPrintfW(PoolWithTag, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 160));
  v9 = v7;
  if ( !v8 )
  {
    if ( *v7 )
    {
      do
      {
        v10 = *v9;
        if ( v10 == 34
          || v10 == 47
          || v10 == 58
          || v10 == 60
          || *v9 > 0x3Du && (*v9 <= 0x3Fu || v10 == 92 || v10 == 124) )
        {
          *v9 = 95;
        }
        ++v9;
      }
      while ( *v9 );
    }
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 384), EtwpRTBacklogFileRoot) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      LOBYTE(v11) = 1;
      updated = EtwpExpandFileName(v11, a1 + 384, 0LL, &DestinationString);
      if ( updated >= 0 )
      {
LABEL_20:
        updated = EtwpDelayCreate(v1, 1, 1);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 408) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          *(_QWORD *)(a1 + 416) = 72LL;
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0 )
              goto LABEL_32;
            if ( *(_DWORD *)(a1 + 440) )
              updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 320);
            if ( updated < 0 )
            {
LABEL_32:
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
              *(_DWORD *)(a1 + 464) = 3;
              *(_DWORD *)(a1 + 440) = 0;
              EtwpSendSessionNotification(a1, 4u, 0xC0000102);
              updated = 0;
            }
          }
        }
      }
    }
    else
    {
      updated = -1073741801;
    }
    RtlFreeAnsiString(&DestinationString);
    return (unsigned int)updated;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
