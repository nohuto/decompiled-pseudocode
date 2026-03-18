/*
 * XREFs of DriverEntry @ 0x1C0072000
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0030898 (FxDriverEntryWorker.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     McGenEventRegister @ 0x1C00011AC (McGenEventRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     UsbSleepStudy_Initialize @ 0x1C00326FC (UsbSleepStudy_Initialize.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     WppLoadTracingSupport @ 0x1C0061000 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C006134C (WppInitKm.c)
 *     WppCleanupKm @ 0x1C00613FC (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C006AD70 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C006BF24 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v3; // rbx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  ETWENABLECALLBACK *v7; // rdx
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  char v14; // [rsp+5Ch] [rbp-A4h]
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[7]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-40h] BYREF
  int v19; // [rsp+C8h] [rbp-38h]
  int v20; // [rsp+CCh] [rbp-34h]
  __int64 v21; // [rsp+D0h] [rbp-30h]
  char v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+DCh] [rbp-24h]
  char pszDest[16]; // [rsp+E0h] [rbp-20h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F0h] [rbp-10h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  v3 = 0LL;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  v13 = 8;
  v14 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v13);
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = 32;
  v17[1] = HUBFDO_EvtDeviceAdd;
  HIDWORD(v17[3]) = 1999849557;
  memset(v16, 0, sizeof(v16));
  v16[6] = off_1C0057090;
  v16[1] = DriverCleanup;
  LODWORD(v16[0]) = 56;
  v16[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v16,
         v17,
         &v15);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v15,
           off_1C0057090);
    v18 = 48LL;
    v23 = 16;
    pszDest[0] = 0;
    v3 = v6;
    v21 = 0LL;
    v22 = 0;
    v19 = 1024;
    v20 = 512;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v5 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v18, v3 + 64);
    if ( v5 < 0 )
      return v5;
    memset(v16, 0, sizeof(v16));
    v16[4] = v15;
    LODWORD(v16[0]) = 56;
    v16[3] = 0x100000001LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v16,
           v3 + 32);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v16,
           v3 + 56);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v3 + 48) = v3 + 40;
    *(_QWORD *)(v3 + 40) = v3 + 40;
    McGenEventRegister(
      &MS_USBHUB3_ETW_PROVIDER,
      v7,
      &MS_USBHUB3_ETW_PROVIDER_Context,
      &Microsoft_Windows_USB_USBHUB3Handle);
    v8 = UsbSleepStudy_Initialize();
    if ( v8 < 0 )
    {
      *(_BYTE *)(v3 + 92) = 0;
      LODWORD(v10) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        4u,
        2u,
        0xAu,
        (__int64)&WPP_f98bc7b9038939e63944204aad2f2889_Traceguids,
        v10);
    }
    else
    {
      *(_BYTE *)(v3 + 92) = 1;
    }
    EtwSetInformation(
      Microsoft_Windows_USB_USBHUB3Handle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    HUBREG_QueryGlobalHubValues(v3);
    HUBREG_QueryGlobalUsb20HardwareLpmSettings(v3);
    RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
    v12 = 0LL;
    if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
    {
      ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
        L"USBHUB:GLOBAL_FLAGS",
        L"USBHUB",
        &v12);
      if ( (v12 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x20000u);
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    qword_1C005A470 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
    dword_1C005A440 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C005A444 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C005A44C = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C005A450 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  if ( v5 >= 0 && v3 )
  {
    LODWORD(v10) = *(_DWORD *)(v3 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 64),
      4u,
      2u,
      0xBu,
      (__int64)&WPP_f98bc7b9038939e63944204aad2f2889_Traceguids,
      v10);
  }
  return v5;
}
