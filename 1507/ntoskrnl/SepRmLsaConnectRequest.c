/*
 * XREFs of SepRmLsaConnectRequest @ 0x1405A79A8
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x14017F030 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenProcess @ 0x14017F4B0 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x1401802D0 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x140180310 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x1405A7D84 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x1406D0420 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(PPORT_MESSAGE ConnectionRequest)
{
  _QWORD *ProcessServerSilo; // rsi
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  PVOID v8; // rcx
  __int64 v9; // rdx
  NTSTATUS Section; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  void *v15; // rcx
  unsigned int v17; // ebx
  PVOID PortHandle; // [rsp+40h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-81h] BYREF
  ULONG MaxMessageLength; // [rsp+50h] [rbp-79h] BYREF
  struct _PORT_VIEW v21; // [rsp+58h] [rbp-71h] BYREF
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
      ProcessServerSilo = PsGetProcessServerSilo((__int64)PortHandle, v4, v5, v6);
      ObfDereferenceObject(PortHandle);
      PsGetMonitorContextServerSilo(SeRmSiloMonitor, ProcessServerSilo, &PortHandle, v7);
      v3 = (unsigned int *)PortHandle;
      if ( !*(_QWORD *)PortHandle )
      {
        v8 = PortHandle;
        *(_QWORD *)PortHandle = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v8);
        ClientView.Length = 24;
        v9 = (__int64)ProcessServerSilo;
        if ( !ProcessServerSilo )
          v9 = -8LL;
        Section = ZwAcceptConnectPort((PHANDLE)v3 + 3, (PVOID)v9, ConnectionRequest, 1u, 0LL, &ClientView);
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
              v21.Length = 48;
              v21.SectionHandle = (HANDLE)*((_QWORD *)v3 + 5);
              v21.SectionOffset = 0;
              v21.ViewSize = v3[12];
              *(_OWORD *)&v21.ViewBase = 0LL;
              SecurityQos.ImpersonationLevel = SecurityImpersonation;
              *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
              v14 = PsAttachSiloToCurrentThread((__int64)ProcessServerSilo, v11, v12, v13);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v3 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &v21,
                          0LL,
                          &MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v14);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength == 512 )
                {
                  *((_QWORD *)v3 + 8) = v21.ViewBase;
                  v3[18] = LODWORD(v21.ViewRemoteBase) - LODWORD(v21.ViewBase);
                  *((_QWORD *)v3 + 7) = v21.ViewRemoteBase;
LABEL_12:
                  v15 = (void *)*((_QWORD *)v3 + 5);
                  if ( v15 )
                  {
                    ZwClose(v15);
                    *((_QWORD *)v3 + 5) = 0LL;
                  }
                  if ( ProcessServerSilo )
                    PspDereferenceSiloObject(ProcessServerSilo);
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
  v17 = ZwAcceptConnectPort(&PortHandle, 0LL, ConnectionRequest, 0, 0LL, 0LL);
  if ( ProcessServerSilo )
    PspDereferenceSiloObject(ProcessServerSilo);
  if ( v3 )
    PsDereferenceMonitorContextServerSilo((__int64)v3);
  return v17;
}
