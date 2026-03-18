/*
 * XREFs of DriverEntry @ 0x1C0025208
 * Callers:
 *     GsDriverEntry @ 0x1C0071000 (GsDriverEntry.c)
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     USBHUB_InitBugCheck @ 0x1C00253D4 (USBHUB_InitBugCheck.c)
 *     UsbhInitializeHighResTimer @ 0x1C0025444 (UsbhInitializeHighResTimer.c)
 *     UsbhInitGlobal @ 0x1C00254FC (UsbhInitGlobal.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     WppInitKm @ 0x1C007019C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0070230 (WppLoadTracingSupport.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  NTSTATUS v7; // edi
  NTSTATUS result; // eax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-148h] BYREF

  VersionInformation.dwOSVersionInfoSize = 276;
  v4 = 1;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_usbhub;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  HubInit = 1;
  UsbhInitGlobal();
  WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)DriverObject;
  if ( (unsigned __int8)UsbhInitializeHighResTimer() )
    dword_1C0067694 = 1;
  DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))UsbhDriverUnload;
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))UsbhAddDevice;
  DriverObject->MajorFunction[16] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&UsbhDeviceShutdown;
  v7 = UsbhModuleDispatch(1, v5, 0LL, 3, (__int64)RegistryPath, 0LL);
  if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong > 1 )
  {
    do
    {
      if ( v4 > 0x10 )
        break;
      v4 *= 2;
    }
    while ( v4 < WPP_MAIN_CB.Dpc.TargetInfoAsUlong );
  }
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = v4;
  if ( (v7 & 0xC0000000) == 0xC0000000 )
    UsbhModuleDispatch(0, v6, 0LL, 4, 0LL, 0LL);
  USBHUB_BugCheckPortArray = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSavePortArrayData);
  USBHUB_BugCheckHubExt = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSaveHubExtData);
  result = v7;
  USBHUB_CurrentFdo = 0LL;
  return result;
}
