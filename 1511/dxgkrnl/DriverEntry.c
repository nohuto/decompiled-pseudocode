/*
 * XREFs of DriverEntry @ 0x1C018D79C
 * Callers:
 *     GsDriverEntry @ 0x1C018D030 (GsDriverEntry.c)
 * Callees:
 *     McGenEventRegister @ 0x1C000DAD0 (McGenEventRegister.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     MonitorCleanupGlobal @ 0x1C002C750 (MonitorCleanupGlobal.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00CD560 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00CD5C0 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     TraceLoggingRegisterEx @ 0x1C00CD6F8 (TraceLoggingRegisterEx.c)
 *     DxgkInitialPower @ 0x1C00CD790 (DxgkInitialPower.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C00CD7E4 (-DxgDbgInit@@YAXXZ.c)
 *     DxgkSqmInit @ 0x1C00CD850 (DxgkSqmInit.c)
 *     ?TdrInit@@YAXXZ @ 0x1C00CD940 (-TdrInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00CF8C0 (WdmlibIoCreateDeviceSecure.c)
 *     MonitorInitializeGlobal @ 0x1C00E410C (MonitorInitializeGlobal.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0145488 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkSqmShutdown @ 0x1C01507D4 (DxgkSqmShutdown.c)
 *     DxgkCleanupPower @ 0x1C0171938 (DxgkCleanupPower.c)
 *     DpiInitializeGlobalState @ 0x1C018D050 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ETWENABLECALLBACK *v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  void *v11; // r8
  PETWENABLECALLBACK v12; // rdx
  LPCGUID v13; // rcx
  PVOID v14; // r8
  PREGHANDLE v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  PDEVICE_OBJECT v36; // rcx
  _QWORD v37[2]; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  int v39; // [rsp+88h] [rbp+10h] BYREF
  int v40; // [rsp+8Ch] [rbp+14h]

  v40 = 0;
  g_pDriverObject = DriverObject;
  v39 = 8;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v39, 8u, 0LL) < 0
    || (g_OSTestSigningEnabled = 1, (v40 & 2) == 0) )
  {
    g_OSTestSigningEnabled = 0;
  }
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v5, v4, v6, v7);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v8);
      if ( result >= 0 )
      {
        TraceLoggingRegisterEx(v10, v9, v11);
        bTracingEnabled = 0;
        McGenEventRegister(v13, v12, v14, v15);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v16, &EventProfilerEnter, v17, 0);
        v37[0] = &DxgkControlGuid;
        v37[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v37);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        v18 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                0,
                &SDDL_DEVOBJ_KERNEL_ONLY,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                &g_pDeviceObject);
        v23 = v18;
        if ( v18 < 0
          || (v24 = DxgkInitialPower(), v23 = v24, v24 < 0)
          || (v25 = MonitorInitializeGlobal(v20, v19, v21, v22), v23 = v25, v25 < 0)
          || (DxgDbgInit(v20), v26 = DxgkSqmInit(), v23 = v26, v26 < 0) )
        {
          v30 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
          *(_QWORD *)(v30 + 24) = v23;
          WdLogEvent5_WdWarning(v30);
        }
        else
        {
          TdrInit();
          v27 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v23 = v27;
          if ( v27 >= 0 )
          {
            LODWORD(v23) = 0;
LABEL_13:
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(v28, &EventProfilerExit, v29, 0);
            return v23;
          }
          v31 = WdLogNewEntry5_WdError(v28);
          *(_QWORD *)(v31 + 24) = v23;
          WdLogEvent5_WdError(v31);
        }
        DxgkSqmShutdown();
        DxgkCleanupPower();
        MonitorCleanupGlobal(v33, v32, v34, v35);
        v36 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice(g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v36);
        goto LABEL_13;
      }
    }
  }
  return result;
}
