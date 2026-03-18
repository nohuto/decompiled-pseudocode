/*
 * XREFs of DriverEntry @ 0x1C0073000
 * Callers:
 *     DriverEntry_0 @ 0x1C0034BF0 (DriverEntry_0.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     McGenEventRegister @ 0x1C00011AC (McGenEventRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x1C0028498 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     UsbSleepStudy_Initialize @ 0x1C003307C (UsbSleepStudy_Initialize.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     WppLoadTracingSupport @ 0x1C0061000 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C006134C (WppInitKm.c)
 *     WppCleanupKm @ 0x1C00613FC (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C006B9E0 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C006CB94 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v3; // rbx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  PWDF_DRIVER_GLOBALS v7; // rcx
  ETWENABLECALLBACK *v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  char v15; // [rsp+5Ch] [rbp-A4h]
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[7]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h] BYREF
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+CCh] [rbp-34h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  char v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
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
  v14 = 8;
  v15 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v14);
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = 32;
  v18[1] = HUBFDO_EvtDeviceAdd;
  HIDWORD(v18[3]) = 1999849557;
  memset(v17, 0, sizeof(v17));
  v17[6] = off_1C00570E8;
  v17[1] = DriverCleanup;
  LODWORD(v17[0]) = 56;
  v17[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v17,
         v18,
         &v16);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v16,
           off_1C00570E8);
    v19 = 48LL;
    v24 = 16;
    pszDest[0] = 0;
    v3 = v6;
    v22 = 0LL;
    v23 = 0;
    v20 = 1024;
    v21 = 512;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v5 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v19, v3 + 64);
    if ( v5 < 0 )
      return v5;
    memset(v17, 0, sizeof(v17));
    v17[4] = v16;
    LODWORD(v17[0]) = 56;
    v17[3] = 0x100000001LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v17,
           v3 + 32);
    if ( v5 < 0 )
      return v5;
    v7 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           v7,
           v17,
           v3 + 56);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v3 + 48) = v3 + 40;
    *(_QWORD *)(v3 + 40) = v3 + 40;
    McGenEventRegister(
      &MS_USBHUB3_ETW_PROVIDER,
      v8,
      &MS_USBHUB3_ETW_PROVIDER_Context,
      &Microsoft_Windows_USB_USBHUB3Handle);
    v9 = UsbSleepStudy_Initialize();
    if ( v9 < 0 )
    {
      *(_BYTE *)(v3 + 92) = 0;
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        4u,
        2u,
        0xAu,
        (__int64)&WPP_54f1ad0467bdccb109561eb8b6430296_Traceguids,
        v11);
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
    HUBREG_QueryGlobalUsbLtmSettings(v3);
    RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
    v13 = 0LL;
    if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
    {
      ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
        L"USBHUB:GLOBAL_FLAGS",
        L"USBHUB",
        &v13);
      if ( (v13 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x20000u);
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    qword_1C005A4F0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
    dword_1C005A4C0 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C005A4C4 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C005A4CC = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C005A4D0 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  if ( v5 >= 0 && v3 )
  {
    LODWORD(v11) = *(_DWORD *)(v3 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 64),
      4u,
      2u,
      0xBu,
      (__int64)&WPP_54f1ad0467bdccb109561eb8b6430296_Traceguids,
      v11);
  }
  return v5;
}
