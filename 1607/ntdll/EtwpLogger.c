/*
 * XREFs of EtwpLogger @ 0x180052AE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpStopLoggerInstance @ 0x180051D90 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x180052C60 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x180053C88 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
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
  void *v15; // rsi
  int v16; // eax
  void *v17; // rcx
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  *((_QWORD *)BaseAddress + 3) = UniqueThread;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *((_DWORD *)BaseAddress + 82) )
  {
    v3 = 0LL;
    if ( *((_QWORD *)BaseAddress + 43) )
      v3 = (LARGE_INTEGER *)(BaseAddress + 344);
    v4 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 16), 0, v3);
    v5 = v4 == 258 || !v4 && (BaseAddress[332] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v5);
    v8 = active;
    if ( (BaseAddress[332] & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v9 = *((_DWORD *)BaseAddress + 83);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v15 = (void *)*((_QWORD *)BaseAddress + 18);
      *((_QWORD *)BaseAddress + 18) = 0LL;
      v16 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *((_DWORD *)BaseAddress + 10) = v16;
      v8 = v16;
      if ( v16 >= 0 )
      {
        NtClose(v15);
        if ( (BaseAddress[332] & 1) != 0 )
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
      }
      else
      {
        v14 = (BaseAddress[332] & 4) == 0;
        *((_QWORD *)BaseAddress + 18) = v15;
        if ( !v14 )
          v8 = 0;
      }
      *((_DWORD *)BaseAddress + 83) &= ~1u;
    }
    v10 = *((_DWORD *)BaseAddress + 83);
    if ( (v10 & 0x10) != 0 )
    {
      v14 = *((_QWORD *)BaseAddress + 18) == 0LL;
      *((_DWORD *)BaseAddress + 83) = v10 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v7);
      }
    }
    v11 = *((_DWORD *)BaseAddress + 83);
    if ( (v11 & 6) != 0 )
    {
      v17 = (void *)*((_QWORD *)BaseAddress + 17);
      *((_DWORD *)BaseAddress + 83) = v11 & 0xFFFFFFF9;
      ZwSetEvent(v17, 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance((__int64)BaseAddress);
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
