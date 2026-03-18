/*
 * XREFs of ACPIRootIrpQueryCapabilities @ 0x1C0071BA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0020F2C (ACPISystemPowerInitializeRootMapping.c)
 */

__int64 __fastcall ACPIRootIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v5; // rax
  int Status; // ebx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  int SecurityQos_high; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v5[-1].Context = &Event;
  v5[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 )
  {
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
    LODWORD(SecurityContext[2].SecurityQos) = 0;
    SecurityContext[1].FullCreateOptions = 0;
    HIDWORD(SecurityContext->AccessState) = -1;
    LODWORD(SecurityContext->AccessState) = -1;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFFCA3 | 0x40;
    Status = ACPISystemPowerInitializeRootMapping(DeviceExtension, (__int64)SecurityContext);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
