/*
 * XREFs of PopUmpoInitializeChannel @ 0x1407E46C0
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PopUmpoProcessMessages @ 0x1400EE0C4 (PopUmpoProcessMessages.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14017FED0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x140180110 (ZwAlpcSetInformation.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 */

__int64 PopUmpoInitializeChannel()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // eax
  NTSTATUS v5; // ebx
  PCALLBACK_OBJECT v6; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-81h] BYREF
  _QWORD PortInformation[2]; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-31h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  LODWORD(PopBrightnessNotifyMutex) = 1;
  PopAlpcServerPort = 0LL;
  qword_14032D4E8 = (__int64)&qword_14032D4E0;
  qword_14032D4E0 = (__int64)&qword_14032D4E0;
  qword_14032D508 = (__int64)&PopBrightnessChangeWorkList;
  PopBrightnessChangeWorkList = &PopBrightnessChangeWorkList;
  PopNotifyBrightnessWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopNotifyBrightnessChangesWorker;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  qword_14032D4C8 = 0LL;
  dword_14032D4D0 = 0;
  word_14032D4D8 = 1;
  byte_14032D4DA = 6;
  dword_14032D4DC = 0;
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
    v5 = Acl;
    if ( Acl < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("%s: RtlCreateAcl failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)Acl);
    }
    else
    {
      v5 = RtlAddAccessAllowedAce(v3, 2u, 0x10000000u, SeLocalSystemSid);
      if ( v5 < 0 )
      {
        if ( (PoDebug & 1) != 0 )
          DbgPrint("%s: RtlAddAccessAllowedAce failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
      }
      else
      {
        v5 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( v5 < 0 )
        {
          if ( (PoDebug & 1) != 0 )
            DbgPrint("%s: RtlCreateSecurityDescriptor failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
        }
        else
        {
          v5 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( v5 < 0 )
          {
            if ( (PoDebug & 1) != 0 )
              DbgPrint("%s: RtlSetDaclSecurityDescriptor failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
          }
          else
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
            v5 = ZwAlpcCreatePort(&PopAlpcServerPort, &ObjectAttributes, &PortAttributes);
            if ( v5 < 0 )
            {
              if ( (PoDebug & 1) != 0 )
                DbgPrint("%s: ZwAlpcCreatePort failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
            }
            else
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 512;
              ObjectAttributes.ObjectName = 0LL;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v5 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 0);
              if ( v5 < 0 )
              {
                if ( (PoDebug & 1) != 0 )
                  DbgPrint("%s: ExCreateCallback failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
              }
              else
              {
                v6 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation[0] = v6;
                  PortInformation[1] = 0LL;
                  v5 = ZwAlpcSetInformation(PopAlpcServerPort, AlpcRegisterCallbackInformation, PortInformation, 0x10u);
                  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
                  if ( v5 < 0 )
                  {
                    if ( (PoDebug & 1) != 0 )
                      DbgPrint("%s: ZwAlpcSetInformation failed: 0x%x\n", "PopUmpoInitializeChannel", (unsigned int)v5);
                  }
                  else
                  {
                    PopUmpoProcessMessages();
                    v5 = 0;
                  }
                }
                else
                {
                  if ( (PoDebug & 1) != 0 )
                    DbgPrint("%s: ExRegisterCallback failed\n", "PopUmpoInitializeChannel");
                  v5 = -1073741670;
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
  return (unsigned int)v5;
}
