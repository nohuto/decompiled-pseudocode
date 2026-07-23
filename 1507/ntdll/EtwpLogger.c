/*
 * XREFs of EtwpLogger @ 0x1800096B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     EtwpFlushActiveBuffers @ 0x180009858 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     EtwpStopLoggerInstance @ 0x18000A740 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x18000A7A8 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
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
  void *v13; // rcx
  bool v14; // zf
  void *v15; // rcx
  void *v16; // rsi
  int v17; // eax
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  *((_QWORD *)BaseAddress + 3) = UniqueThread;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *((_DWORD *)BaseAddress + 84) )
  {
    v3 = 0LL;
    if ( *((_QWORD *)BaseAddress + 44) )
      v3 = (LARGE_INTEGER *)(BaseAddress + 352);
    v4 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 16), 0, v3);
    v5 = v4 == 258 || !v4 && (BaseAddress[340] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v5);
    v8 = active;
    if ( (BaseAddress[340] & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v9 = *((_DWORD *)BaseAddress + 85);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v16 = (void *)*((_QWORD *)BaseAddress + 18);
      *((_QWORD *)BaseAddress + 18) = 0LL;
      v17 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *((_DWORD *)BaseAddress + 10) = v17;
      v8 = v17;
      if ( v17 >= 0 )
      {
        NtClose(v16);
        if ( (BaseAddress[340] & 1) != 0 )
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
      }
      else
      {
        v14 = (BaseAddress[340] & 4) == 0;
        *((_QWORD *)BaseAddress + 18) = v16;
        if ( !v14 )
          v8 = 0;
      }
      *((_DWORD *)BaseAddress + 85) &= ~1u;
    }
    v10 = *((_DWORD *)BaseAddress + 85);
    if ( (v10 & 0x10) != 0 )
    {
      v14 = *((_QWORD *)BaseAddress + 18) == 0LL;
      *((_DWORD *)BaseAddress + 85) = v10 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v7);
      }
    }
    v11 = *((_DWORD *)BaseAddress + 85);
    if ( (v11 & 6) != 0 )
    {
      v15 = (void *)*((_QWORD *)BaseAddress + 17);
      *((_DWORD *)BaseAddress + 85) = v11 & 0xFFFFFFF9;
      ZwSetEvent(v15, 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v12 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*((HANDLE *)BaseAddress + 18));
  *((_QWORD *)BaseAddress + 18) = 0LL;
  if ( v12 > 0 )
    v12 = (unsigned __int16)v12 | 0xC0070000;
  v13 = (void *)*((_QWORD *)BaseAddress + 17);
  *((_DWORD *)BaseAddress + 10) = v12;
  ZwSetEvent(v13, 0LL);
  EtwpFreeLoggerContext((unsigned int *)BaseAddress);
  RtlExitUserThread(0);
}
