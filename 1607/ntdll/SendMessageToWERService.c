/*
 * XREFs of SendMessageToWERService @ 0x180008BA0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x180008880 (ReportExceptionInternal.c)
 *     RtlReportSqmEscalation @ 0x1800D8B20 (RtlReportSqmEscalation.c)
 * Callees:
 *     SignalStartWerSvc @ 0x1800089AC (SignalStartWerSvc.c)
 *     WaitForWerSvc @ 0x180008B04 (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DA0 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x180008E8C (WerpFreeSid.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x1800A72B0 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A7510 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall SendMessageToWERService(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int started; // ebx
  NTSTATUS v5; // eax
  int v6; // eax
  PSID v7; // rdi
  char v8; // si
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v10; // eax
  LARGE_INTEGER *v11; // rax
  NTSTATUS v12; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h]
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v26; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PortHandle = 0LL;
  v24 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v5 = WaitForWerSvc(SystemInformation);
      started = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 1400LL;
        v6 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               Flags,
               RequiredServerSid,
               ConnectionMessage,
               BufferLength,
               OutMessageAttributes,
               InMessageAttributes,
               (__int64)&v24);
        v7 = v24;
        started = v6;
        if ( v6 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( v22 == -1 )
          {
            v8 = 1;
            Timeout = 0LL;
          }
          else
          {
            v8 = 0;
            Timeout = (LARGE_INTEGER *)&v25;
            v25 = -10000LL * v22;
          }
          v10 = NtAlpcConnectPort(
                  &PortHandle,
                  &DestinationString,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v24,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          started = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v11 = (LARGE_INTEGER *)&v25;
            v26 = 1400LL;
            if ( v8 )
              v11 = 0LL;
            v12 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v26, 0LL, v11);
            started = v12;
            if ( v12 >= 0 && v12 != 258 )
            {
              started = 0;
              if ( SLODWORD(ReceiveMessage[1].DoNotUseThisField) < 0 )
                started = LODWORD(ReceiveMessage[1].DoNotUseThisField);
            }
          }
        }
        if ( v7 )
          WerpFreeSid(v7);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return (unsigned int)started;
}
