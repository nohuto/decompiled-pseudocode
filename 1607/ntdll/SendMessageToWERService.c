/*
 * XREFs of SendMessageToWERService @ 0x180008BB0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x180008890 (ReportExceptionInternal.c)
 *     RtlReportSqmEscalation @ 0x1800D8A60 (RtlReportSqmEscalation.c)
 * Callees:
 *     SignalStartWerSvc @ 0x1800089BC (SignalStartWerSvc.c)
 *     WaitForWerSvc @ 0x180008B14 (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DB0 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x180008E9C (WerpFreeSid.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x1800A72B0 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A7510 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall SendMessageToWERService(__int64 a1, __int64 a2)
{
  int started; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdi
  char v11; // si
  __int64 *v12; // rax
  int v13; // eax
  __int64 *v14; // rax
  int v15; // eax
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+64h] [rbp-9Ch]
  int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  __int128 v30; // [rsp+C0h] [rbp-40h]
  _QWORD v31[10]; // [rsp+D0h] [rbp-30h] BYREF

  v18 = 1280;
  Handle = 0LL;
  v22 = 0LL;
  v17 = 0;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(
                SystemExceptionInformation|SystemPerformanceInformation|0x50,
                &SystemInformation,
                8u,
                0LL);
    if ( started >= 0 )
    {
      v5 = WaitForWerSvc(SystemInformation);
      started = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v31, 0, 0x48uLL);
        v31[2] = 1400LL;
        v9 = WerpAllocateAndInitializeSid((unsigned int)&v17, v6, v7, v8);
        v10 = v22;
        started = v9;
        if ( v9 >= 0 )
        {
          v30 = 0LL;
          v26 = 48;
          v27 = 0LL;
          v29 = 0;
          v28 = 0LL;
          if ( v20 == -1 )
          {
            v11 = 1;
            v12 = 0LL;
          }
          else
          {
            v11 = 0;
            v12 = &v23;
            v23 = -10000LL * v20;
          }
          v13 = NtAlpcConnectPort(&Handle, &DestinationString, &v26, v31, 0x20000, v22, 0LL, 0LL, 0LL, 0LL, v12);
          started = v13;
          if ( v13 >= 0 && v13 != 258 )
          {
            v14 = &v23;
            v24 = 1400LL;
            if ( v11 )
              v14 = 0LL;
            v15 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, a1, 0LL, a2, &v24, 0LL, v14);
            started = v15;
            if ( v15 >= 0 && v15 != 258 )
            {
              started = 0;
              if ( *(int *)(a2 + 48) < 0 )
                started = *(_DWORD *)(a2 + 48);
            }
          }
        }
        if ( v10 )
          WerpFreeSid(v10);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
