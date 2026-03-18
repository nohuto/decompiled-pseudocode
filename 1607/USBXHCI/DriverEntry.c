/*
 * XREFs of DriverEntry @ 0x1C004E8C0
 * Callers:
 *     DriverEntry_0 @ 0x1C000FAC0 (DriverEntry_0.c)
 * Callees:
 *     McGenEventRegister @ 0x1C0009FEC (McGenEventRegister.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Counter_Register @ 0x1C004EBE0 (Counter_Register.c)
 *     WppInitKm @ 0x1C004ED38 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C004EDCC (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C0052A98 (WppCleanupKm.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rax
  int v5; // ebx
  PETWENABLECALLBACK v6; // rdx
  LPCGUID v7; // rcx
  PVOID v8; // r8
  PREGHANDLE v9; // r9
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  char v13; // [rsp+4Ch] [rbp-B4h]
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 512;
    WPP_MAIN_CB.AlignmentRequirement = 0x40000000;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  v12 = 8;
  v13 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v12);
  memset(v18, 0, 0x38uLL);
  v18[6] = off_1C00431D8;
  LODWORD(v18[0]) = 56;
  v18[3] = 0x100000001LL;
  v18[1] = DriverCleanup;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = 32;
  v17[1] = Controller_WdfEvtDeviceAdd;
  HIDWORD(v17[3]) = 1464027224;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v18,
         v17,
         &v15) < 0 )
    WppCleanupKm(DriverObject);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v15,
         off_1C00431D8);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 16));
  LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v5 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) = 1;
  }
  else
  {
    v5 = 0;
    BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C00433B8 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C00433BC = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C00433C4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C00433C8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C00433E0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
  McGenEventRegister(v7, v6, v8, v9);
  EtwSetInformation(
    (REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
