/*
 * XREFs of DriverEntry @ 0x1C00137A0
 * Callers:
 *     GsDriverEntry @ 0x1C0022000 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C00010F8 (WPP_RECORDER_SF_qZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     DriverCopyRegistryString @ 0x1C0013B08 (DriverCopyRegistryString.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  PVOID SystemRoutineAddress; // rax
  PDEVICE_OBJECT v9; // rax
  struct _DEVICE_OBJECT *v10; // rbx
  void (__fastcall *v11)(struct _DRIVER_OBJECT *, _QWORD, _QWORD, struct _DEVICE_OBJECT *); // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // ecx
  int v15; // [rsp+20h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF

  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_EXBUSAUD;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  v17 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  v7 = 2;
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
  {
    pfnWppGetVersion(&v17, 0LL, 0LL, 0LL);
    v7 = WPPTraceSuite;
  }
  if ( v17 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    pfnEtwRegisterClassicProvider = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( pfnEtwRegisterClassicProvider )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      v7 = 4;
      pfnEtwUnregister = (__int64)SystemRoutineAddress;
      WPPTraceSuite = 4;
    }
    else
    {
      v7 = WPPTraceSuite;
    }
  }
  v9 = WPP_GLOBAL_Control;
  v10 = &WPP_MAIN_CB;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( v7 == 4 )
    {
      do
      {
        v11 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, _QWORD, struct _DEVICE_OBJECT *))pfnEtwRegisterClassicProvider;
        v10->Vpb = 0LL;
        v15 = (_DWORD)v10 + 56;
        v11(v10->DriverObject, 0LL, WppClassicProviderCallback, v10);
        v10 = v10->NextDevice;
      }
      while ( v10 );
    }
    else if ( v7 == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, DriverObject, RegistryPath);
    v9 = WPP_GLOBAL_Control;
  }
  WPP_RECORDER_SF_qZ((__int64)v9->DeviceExtension, v4, v5, v6, v15, (char)DriverObject, &RegistryPath->Length);
  pExtBusDeviceDispatchTable = (__int64)&USBDeviceDispatchTable;
  v12 = KsInitializeDriver(DriverObject, RegistryPath, &KsDeviceDescriptor);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v13 = DriverCopyRegistryString((unsigned int)v12, RegistryPath);
    if ( v13 >= 0 )
    {
      PerfSystemControlDispatch = (__int64)DriverObject->MajorFunction[23];
      DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmiDispatchSystemControl;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)DriverUnload;
    }
  }
  return v13;
}
