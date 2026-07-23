/*
 * XREFs of PopUmpoInitializeChannel @ 0x14076F050
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PopUmpoProcessMessages @ 0x140092198 (PopUmpoProcessMessages.c)
 *     ExRegisterCallback @ 0x14012577C (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140151500 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x140151740 (ZwAlpcSetInformation.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 */

__int64 PopUmpoInitializeChannel()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v5; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-81h] BYREF
  _QWORD PortInformation[2]; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-31h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PopBrightnessNotifyMutex.Event.Header.Size = 6;
  PopAlpcServerPort = 0LL;
  PopBrightnessNotifyMutex.Event.Header.WaitListHead.Blink = &PopBrightnessNotifyMutex.Event.Header.WaitListHead;
  PopBrightnessNotifyMutex.Event.Header.WaitListHead.Flink = &PopBrightnessNotifyMutex.Event.Header.WaitListHead;
  qword_1402DD108 = (__int64)&PopBrightnessChangeWorkList;
  PopBrightnessChangeWorkList = &PopBrightnessChangeWorkList;
  PopNotifyBrightnessWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopNotifyBrightnessChangesWorker;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  PopBrightnessNotifyMutex.Count = 1;
  PopBrightnessNotifyMutex.Owner = 0LL;
  PopBrightnessNotifyMutex.Contention = 0;
  LOWORD(PopBrightnessNotifyMutex.Event.Header.Lock) = 1;
  PopBrightnessNotifyMutex.Event.Header.SignalState = 0;
  PopNotifyBrightnessWorkItem.Parameter = 0LL;
  PopNotifyBrightnessWorkItem.List.Flink = 0LL;
  v0 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  PopUmpoAlpcClientConnected = 0;
  CallbackObject = 0LL;
  PopBrightnessWorkItemQueued = 0;
  v1 = 4 * v0 + 28;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x6F706D55u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            memset(&PortAttributes, 0, sizeof(PortAttributes));
            PortAttributes.MaxMessageLength = 512LL;
            ObjectAttributes.ObjectName = &DestinationString;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 512;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            Acl = ZwAlpcCreatePort(&PopAlpcServerPort, &ObjectAttributes, &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 512;
              ObjectAttributes.ObjectName = 0LL;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 0);
              if ( Acl >= 0 )
              {
                v5 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation[0] = v5;
                  PortInformation[1] = 0LL;
                  Acl = ZwAlpcSetInformation(PopAlpcServerPort, AlpcRegisterCallbackInformation, PortInformation, 0x10u);
                  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
