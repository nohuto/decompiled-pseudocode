/*
 * XREFs of RtlReportSilentProcessExit @ 0x180044890
 * Callers:
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800C0E8C (LdrpFatalExceptionFilter.c)
 * Callees:
 *     SendMessageToWERService @ 0x180001D58 (SendMessageToWERService.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x180045EA0 (WerpProcessId.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlReportSilentProcessExit(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  int v4; // ebx
  unsigned int UniqueProcess; // edi
  unsigned int UniqueThread; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int NtGlobalFlag; // eax
  int v10; // eax
  void *v11; // rdi
  NTSTATUS v12; // eax
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+50h] [rbp-B0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(SendMessageA, 0, sizeof(SendMessageA));
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  TargetHandle = 0LL;
  if ( !ProcessHandle )
    return -1073741811;
  if ( ProcessHandle == (HANDLE)-1LL && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v4 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1000u,
         0,
         0);
  if ( v4 < 0 )
    goto LABEL_13;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  v7 = WerpProcessId(TargetHandle);
  v8 = v7;
  if ( !UniqueProcess || !UniqueThread || !v7 )
    return -1073741811;
  if ( UniqueProcess == v7 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(TargetHandle);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    memset(SendMessageA, 0, sizeof(SendMessageA));
    SendMessageA[0].u1.Length = 91751760;
    SendMessageA[1].u1.Length = 805306368;
    SendMessageA[1].ClientId.UniqueProcess = (void *)__PAIR64__(UniqueProcess, UniqueThread);
    SendMessageA[1].ClientId.UniqueThread = (void *)__PAIR64__(ExitStatus, v8);
    memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
    ReceiveMessage[0].u1.Length = 91751760;
    v10 = SendMessageToWERService(SendMessageA, ReceiveMessage);
    if ( v10 >= 0 )
    {
      if ( v10 == 258 )
      {
        v4 = -1073741248;
      }
      else
      {
        v11 = ReceiveMessage[1].ClientId.UniqueProcess;
        while ( 1 )
        {
          v12 = NtWaitForSingleObject(v11, 1u, 0LL);
          v4 = v12;
          if ( v12 == 258 || v12 < 0 )
            break;
          if ( v12 != 192 && v12 != 257 )
          {
            v4 = 0;
            break;
          }
        }
        if ( v11 )
          NtClose(v11);
      }
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_13:
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v4;
}
