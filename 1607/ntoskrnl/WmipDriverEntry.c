/*
 * XREFs of WmipDriverEntry @ 0x14079CA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     KiInitializeMutant @ 0x140085B84 (KiInitializeMutant.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     IoCreateSymbolicLink @ 0x1404EEF88 (IoCreateSymbolicLink.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 *     IoRegisterShutdownNotification @ 0x140550FA0 (IoRegisterShutdownNotification.c)
 *     WmipInitializeRegistration @ 0x14079C5A8 (WmipInitializeRegistration.c)
 *     WmipInitializeDataStructs @ 0x14079C638 (WmipInitializeDataStructs.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 */

int __fastcall WmipDriverEntry(PDRIVER_OBJECT DriverObject)
{
  int result; // eax
  NTSTATUS v3; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  KiInitializeMutant((__int64)&WmipSMMutex, 0, 1);
  WmipInitializeRegistration(0);
  WmipEventWorkQueueItem.Parameter = 0LL;
  WmipEventWorkQueueItem.List.Flink = 0LL;
  WmipNPNotificationSpinlock = 0LL;
  WmipEventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WmipEventNotification;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&WmipRegistryPath, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &WmipServiceDeviceObject);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v3 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v3 < 0 )
        {
          IoDeleteDevice(WmipServiceDeviceObject);
        }
        else
        {
          WmipServiceDeviceObject->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          WmipServiceDeviceObject->Flags &= ~0x80u;
          IoWMIRegistrationControl(WmipServiceDeviceObject, 1u);
          IoRegisterShutdownNotification(WmipServiceDeviceObject);
        }
        return v3;
      }
    }
  }
  return result;
}
