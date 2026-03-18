/*
 * XREFs of DriverEntry @ 0x1C004B5C0
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0007828 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister @ 0x1C000792C (McGenEventRegister.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Counter_Register @ 0x1C004B8D8 (Counter_Register.c)
 *     WppInitKm @ 0x1C004BA30 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C004BAC4 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C004F928 (WppCleanupKm.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID SystemRoutineAddress; // rax
  _QWORD *v5; // rax
  int v6; // ebx
  PETWENABLECALLBACK v7; // rdx
  LPCGUID v8; // rcx
  PVOID v9; // r8
  PREGHANDLE v10; // r9
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  char v14; // [rsp+4Ch] [rbp-B4h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 512;
    *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 0x40000000;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = SystemRoutineAddress;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  v13 = 8;
  v14 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v13);
  memset(v19, 0, 0x38uLL);
  v19[6] = off_1C0040040;
  LODWORD(v19[0]) = 56;
  v19[1] = DriverCleanup;
  v19[3] = 0x100000001LL;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = 32;
  v18[1] = Controller_WdfEvtDeviceAdd;
  HIDWORD(v18[3]) = 1464027224;
  if ( (*(int (__fastcall **)(_LIST_ENTRY *, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         DriverObject,
         RegistryPath,
         v19,
         v18,
         &v15) < 0 )
    WppCleanupKm(DriverObject);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   v15,
                   off_1C0040040);
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)v5;
  v5[1] = v5;
  *v5 = v5;
  KeInitializeSpinLock(v5 + 2);
  *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24) = 0;
  SystemInformation = 8LL;
  v6 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v6 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) = 1;
  }
  else
  {
    v6 = 0;
    *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C0040388 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C004038C = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C0040394 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C0040398 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C00403B0 = (*(__int64 (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 3448))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  McGenEventRegister(v8, v7, v9, v10);
  EtwSetInformation(
    (REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v6;
}
