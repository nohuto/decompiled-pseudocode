/*
 * XREFs of EtwpLogger @ 0x180052AF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpStopLoggerInstance @ 0x180051DA0 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x180051E5C (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x180052C70 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x180053C98 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
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
  void *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v18 = 2;
  NtSetInformationThread(-2LL, 3LL, &v18);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 344) )
      v3 = (LARGE_INTEGER *)(a1 + 344);
    v4 = NtWaitForSingleObject(*(HANDLE *)(a1 + 128), 0, v3);
    v5 = v4 == 258 || !v4 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v5);
    v8 = active;
    if ( (*(_BYTE *)(a1 + 332) & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(a1, 1LL);
    v9 = *(_DWORD *)(a1 + 332);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v15 = *(void **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v16 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v16;
      v8 = v16;
      if ( v16 >= 0 )
      {
        NtClose(v15);
        if ( (*(_BYTE *)(a1 + 332) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1LL, 0LL);
      }
      else
      {
        v14 = (*(_BYTE *)(a1 + 332) & 4) == 0;
        *(_QWORD *)(a1 + 144) = v15;
        if ( !v14 )
          v8 = 0;
      }
      *(_DWORD *)(a1 + 332) &= ~1u;
    }
    v10 = *(_DWORD *)(a1 + 332);
    if ( (v10 & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 144) == 0LL;
      *(_DWORD *)(a1 + 332) = v10 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(a1, v7);
      }
    }
    v11 = *(_DWORD *)(a1 + 332);
    if ( (v11 & 6) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 332) = v11 & 0xFFFFFFF9;
      ZwSetEvent(v17, 0LL);
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
  RtlExitUserThread(0);
}
