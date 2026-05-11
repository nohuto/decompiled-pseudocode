/*
 * XREFs of DriverEntry @ 0x1C00147A0
 * Callers:
 *     GsDriverEntry @ 0x1C0024000 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C00010F8 (WPP_RECORDER_SF_qZ.c)
 *     rbc_InitializeFeatureStaging @ 0x1C00019D8 (rbc_InitializeFeatureStaging.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     DriverCopyRegistryString @ 0x1C0014B08 (DriverCopyRegistryString.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // ecx
  PVOID SystemRoutineAddress; // rax
  struct _DEVICE_OBJECT *v6; // rbx
  void (__fastcall *v7)(struct _DRIVER_OBJECT *, _QWORD, _QWORD, struct _DEVICE_OBJECT *); // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // eax
  NTSTATUS v12; // ecx
  int v14; // [rsp+20h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF

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
  v16 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  v4 = 2;
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
  {
    pfnWppGetVersion(&v16, 0LL, 0LL, 0LL);
    v4 = WPPTraceSuite;
  }
  if ( v16 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    pfnEtwRegisterClassicProvider = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( pfnEtwRegisterClassicProvider )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      v4 = 4;
      pfnEtwUnregister = (__int64)SystemRoutineAddress;
      WPPTraceSuite = 4;
    }
    else
    {
      v4 = WPPTraceSuite;
    }
  }
  v6 = &WPP_MAIN_CB;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( v4 == 4 )
    {
      do
      {
        v7 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, _QWORD, struct _DEVICE_OBJECT *))pfnEtwRegisterClassicProvider;
        v6->Vpb = 0LL;
        v14 = (_DWORD)v6 + 56;
        v7(v6->DriverObject, 0LL, WppClassicProviderCallback, v6);
        v6 = v6->NextDevice;
      }
      while ( v6 );
    }
    else if ( v4 == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, DriverObject, RegistryPath);
  }
  rbc_InitializeFeatureStaging();
  WPP_RECORDER_SF_qZ(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v8,
    v9,
    v10,
    v14,
    (char)DriverObject,
    &RegistryPath->Length);
  pExtBusDeviceDispatchTable = (__int64)&USBDeviceDispatchTable;
  v11 = KsInitializeDriver(DriverObject, RegistryPath, &KsDeviceDescriptor);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = DriverCopyRegistryString((unsigned int)v11, RegistryPath);
    if ( v12 >= 0 )
    {
      PerfSystemControlDispatch = (__int64)DriverObject->MajorFunction[23];
      DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmiDispatchSystemControl;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)DriverUnload;
    }
  }
  return v12;
}
