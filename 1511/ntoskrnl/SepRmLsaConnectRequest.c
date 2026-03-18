/*
 * XREFs of SepRmLsaConnectRequest @ 0x14053C6C0
 * Callers:
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x140150660 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenProcess @ 0x140150AE0 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x140151900 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x140151940 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x14053CA14 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x14064D2C0 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(PPORT_MESSAGE ConnectionRequest)
{
  _QWORD *ProcessServerSilo; // rsi
  unsigned int *v3; // rdi
  PVOID v4; // rcx
  __int64 v5; // rdx
  NTSTATUS Section; // r14d
  __int64 v7; // rbx
  void *v8; // rcx
  unsigned int v10; // ebx
  PVOID PortHandle; // [rsp+40h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-81h] BYREF
  ULONG MaxMessageLength; // [rsp+50h] [rbp-79h] BYREF
  struct _PORT_VIEW v14; // [rsp+58h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  struct _REMOTE_PORT_VIEW ClientView; // [rsp+C8h] [rbp-1h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+E0h] [rbp+17h] BYREF

  ObjectAttributes.Length = 48;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ProcessServerSilo = 0LL;
  v3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, &ConnectionRequest->ClientId) >= 0 )
  {
    if ( ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &PortHandle, 0LL) >= 0 )
    {
      ProcessServerSilo = PsGetProcessServerSilo((__int64)PortHandle);
      ObfDereferenceObject(PortHandle);
      PsGetMonitorContextServerSilo(SeRmSiloMonitor, ProcessServerSilo, &PortHandle);
      v3 = (unsigned int *)PortHandle;
      if ( !*(_QWORD *)PortHandle )
      {
        v4 = PortHandle;
        *(_QWORD *)PortHandle = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v4);
        ClientView.Length = 24;
        v5 = (__int64)ProcessServerSilo;
        if ( !ProcessServerSilo )
          v5 = -8LL;
        Section = ZwAcceptConnectPort((PHANDLE)v3 + 3, (PVOID)v5, ConnectionRequest, 1u, 0LL, &ClientView);
        if ( Section >= 0 )
        {
          Section = ZwCompleteConnectPort(*((HANDLE *)v3 + 3));
          if ( Section >= 0 )
          {
            SecurityQos.ImpersonationLevel = SecurityImpersonation;
            *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
            v3[12] = 4096;
            v3[13] = 0;
            Section = ZwCreateSection((PHANDLE)v3 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v3 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              v14.Length = 48;
              v14.SectionHandle = (HANDLE)*((_QWORD *)v3 + 5);
              v14.SectionOffset = 0;
              v14.ViewSize = v3[12];
              *(_OWORD *)&v14.ViewBase = 0LL;
              SecurityQos.ImpersonationLevel = SecurityImpersonation;
              *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
              v7 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v3 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &v14,
                          0LL,
                          &MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v7);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength == 512 )
                {
                  *((_QWORD *)v3 + 8) = v14.ViewBase;
                  v3[18] = LODWORD(v14.ViewRemoteBase) - LODWORD(v14.ViewBase);
                  *((_QWORD *)v3 + 7) = v14.ViewRemoteBase;
LABEL_12:
                  v8 = (void *)*((_QWORD *)v3 + 5);
                  if ( v8 )
                  {
                    ZwClose(v8);
                    *((_QWORD *)v3 + 5) = 0LL;
                  }
                  if ( ProcessServerSilo )
                    ObfDereferenceObject(ProcessServerSilo);
                  PsDereferenceMonitorContextServerSilo((__int64)v3);
                  return (unsigned int)Section;
                }
                Section = -1073741823;
              }
            }
          }
        }
        SepRmCleanupRmLsaState(v3);
        goto LABEL_12;
      }
    }
    ZwClose(ProcessHandle);
  }
  v10 = ZwAcceptConnectPort(&PortHandle, 0LL, ConnectionRequest, 0, 0LL, 0LL);
  if ( ProcessServerSilo )
    ObfDereferenceObject(ProcessServerSilo);
  if ( v3 )
    PsDereferenceMonitorContextServerSilo((__int64)v3);
  return v10;
}
