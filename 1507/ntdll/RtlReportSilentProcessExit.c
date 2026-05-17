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

__int64 __fastcall RtlReportSilentProcessExit(__int64 a1, int a2)
{
  int v4; // ebx
  int UniqueProcess; // edi
  int UniqueThread; // esi
  int v7; // eax
  int v8; // ebx
  unsigned int NtGlobalFlag; // eax
  int v10; // eax
  HANDLE v11; // rdi
  NTSTATUS v12; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v14[176]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v15[352]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(v15, 0, 1400);
  memset(v14, 0, 1400);
  Handle[0] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0LL;
  v4 = ZwDuplicateObject(-1LL, a1, -1LL, Handle, 4096, 0, 0);
  if ( v4 < 0 )
    goto LABEL_13;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  v7 = WerpProcessId(Handle[0]);
  v8 = v7;
  if ( !UniqueProcess || !UniqueThread || !v7 )
    return 3221225485LL;
  if ( UniqueProcess == v7 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(Handle[0]);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    memset(v15, 0, 0x578uLL);
    v15[0] = 91751760;
    v15[10] = 805306368;
    v15[12] = UniqueThread;
    v15[13] = UniqueProcess;
    v15[14] = v8;
    v15[15] = a2;
    memset(v14, 0, 0x578uLL);
    LODWORD(v14[0]) = 91751760;
    v10 = SendMessageToWERService((__int64)v15, (__int64)v14);
    if ( v10 >= 0 )
    {
      if ( v10 == 258 )
      {
        v4 = -1073741248;
      }
      else
      {
        v11 = v14[6];
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
  if ( Handle[0] )
    NtClose(Handle[0]);
  return (unsigned int)v4;
}
