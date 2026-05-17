/*
 * XREFs of EtwpLogger @ 0x18005BCF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpSendSessionNotification @ 0x180044FB8 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     EtwpFlushActiveBuffers @ 0x18005BE98 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     EtwpStopLoggerInstance @ 0x18005C910 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(unsigned __int64 a1)
{
  void *UniqueThread; // rdx
  LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // eax
  BOOL v5; // esi
  int active; // eax
  __int64 v7; // rdx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  signed int v12; // edi
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  void *v16; // rsi
  int v17; // eax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v18 = 2;
  NtSetInformationThread(-2LL, 3LL, &v18);
  while ( *(_DWORD *)(a1 + 336) )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 352) )
      v3 = (LARGE_INTEGER *)(a1 + 352);
    v4 = NtWaitForSingleObject(*(HANDLE *)(a1 + 128), 0, v3);
    v5 = v4 == 258 || !v4 && (*(_BYTE *)(a1 + 340) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v5);
    v8 = active;
    if ( (*(_BYTE *)(a1 + 340) & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(a1, 1LL);
    v9 = *(_DWORD *)(a1 + 340);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v16 = *(void **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v17 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0, 0);
      *(_DWORD *)(a1 + 40) = v17;
      v8 = v17;
      if ( v17 >= 0 )
      {
        NtClose(v16);
        if ( (*(_BYTE *)(a1 + 340) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1u, 0);
      }
      else
      {
        v14 = (*(_BYTE *)(a1 + 340) & 4) == 0;
        *(_QWORD *)(a1 + 144) = v16;
        if ( !v14 )
          v8 = 0;
      }
      *(_DWORD *)(a1 + 340) &= ~1u;
    }
    v10 = *(_DWORD *)(a1 + 340);
    if ( (v10 & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 144) == 0LL;
      *(_DWORD *)(a1 + 340) = v10 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(a1, v7);
      }
    }
    v11 = *(_DWORD *)(a1 + 340);
    if ( (v11 & 6) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 340) = v11 & 0xFFFFFFF9;
      ZwSetEvent(v15, 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v12 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v12 > 0 )
    v12 = (unsigned __int16)v12 | 0xC0070000;
  v13 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v12;
  ZwSetEvent(v13, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0LL);
}
