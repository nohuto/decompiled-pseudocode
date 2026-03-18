/*
 * XREFs of DriverEntry @ 0x1C01B7018
 * Callers:
 *     GsDriverEntry @ 0x1C01B7000 (GsDriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C00102AC (TlgRegisterAggregateProviderEx.c)
 *     McGenEventRegister @ 0x1C0010BE8 (McGenEventRegister.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0022D94 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     MonitorCleanupGlobal @ 0x1C0034F80 (MonitorCleanupGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00ED690 (WdmlibIoCreateDeviceSecure.c)
 *     ?TdrInit@@YAXXZ @ 0x1C00F9200 (-TdrInit@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C00F95E0 (-DxgDbgInit@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C00F964C (MonitorInitializeGlobal.c)
 *     DxgkInitialPower @ 0x1C00F9CE0 (DxgkInitialPower.c)
 *     TraceLoggingRegisterEx @ 0x1C00F9D2C (TraceLoggingRegisterEx.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00F9DB8 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00F9EEC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0168F74 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C019A4C8 (DxgkCleanupPower.c)
 *     LPMDisplayInitializeGlobal @ 0x1C01B736C (LPMDisplayInitializeGlobal.c)
 *     DpiInitializeGlobalState @ 0x1C01B7434 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  PETWENABLECALLBACK v16; // rdx
  LPCGUID v17; // rcx
  PVOID v18; // r8
  PREGHANDLE v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID v40; // rcx
  BOOLEAN v41; // [rsp+30h] [rbp-61h]
  _QWORD v42[2]; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  __int64 v44; // [rsp+78h] [rbp-19h] BYREF
  int v45; // [rsp+80h] [rbp-11h]
  const wchar_t *v46; // [rsp+88h] [rbp-9h]
  PUNICODE_STRING *v47; // [rsp+90h] [rbp-1h]
  int v48; // [rsp+98h] [rbp+7h]
  PUNICODE_STRING *v49; // [rsp+A0h] [rbp+Fh]
  int v50; // [rsp+A8h] [rbp+17h]
  __int64 v51; // [rsp+B0h] [rbp+1Fh]
  int v52; // [rsp+B8h] [rbp+27h]
  _BYTE v53[40]; // [rsp+C0h] [rbp+2Fh] BYREF
  __int64 SystemInformation; // [rsp+F8h] [rbp+67h] BYREF
  PUNICODE_STRING v55; // [rsp+100h] [rbp+6Fh] BYREF

  v55 = RegistryPath;
  rbc_InitializeFeatureStaging();
  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v5 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (g_OSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    g_OSTestSigningEnabled = 0;
  }
  v44 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v46 = L"IsInternalRelease";
  v47 = &v55;
  v49 = &v55;
  LODWORD(v55) = 1;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  memset(v53, 0, sizeof(v53));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v44, 0LL, 0LL);
  g_IsInternalRelease = (_DWORD)v55 != 0;
  g_IsInternalReleaseOrDbg = (_DWORD)v55 != 0;
  if ( RtlGetProductInfo(0xAu, 0, 0, 0, &g_ProductType) )
  {
    g_IsMobileCore = g_ProductType == 104 || g_ProductType == 123;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 300LL;
    WdLogEvent5_WdError(v8);
  }
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v11, v10, v12, v13);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v14);
      if ( result >= 0 )
      {
        TlgRegisterAggregateProviderEx(v15);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
        bTracingEnabled = 0;
        McGenEventRegister(v17, v16, v18, v19);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v20, &EventProfilerEnter, v21, 0);
        v42[0] = &DxgkControlGuid;
        v42[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v42);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        v22 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                v41,
                &SDDL_DEVOBJ_KERNEL_ONLY,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v27 = v22;
        if ( v22 < 0
          || (v29 = DxgkInitialPower(), v27 = v29, v29 < 0)
          || (v30 = MonitorInitializeGlobal(v24, v23, v25, v26), v27 = v30, v30 < 0)
          || (v31 = LPMDisplayInitializeGlobal(), v27 = v31, v31 < 0) )
        {
          v28 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
          *(_QWORD *)(v28 + 24) = v27;
          WdLogEvent5_WdWarning(v28);
        }
        else
        {
          DxgDbgInit(v24);
          TdrInit();
          v32 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v27 = v32;
          if ( v32 >= 0 )
          {
            LODWORD(v27) = 0;
LABEL_29:
            if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v33, &EventProfilerExit, v34, 0);
            return v27;
          }
          v35 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v35 + 24) = v27;
          WdLogEvent5_WdError(v35);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v37, v36, v38, v39);
        v40 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v40);
        goto LABEL_29;
      }
    }
  }
  return result;
}
