/*
 * XREFs of DriverEntry @ 0x1C0188018
 * Callers:
 *     GsDriverEntry @ 0x1C0188000 (GsDriverEntry.c)
 * Callees:
 *     McGenEventRegister @ 0x1C000F5E8 (McGenEventRegister.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C001DBC4 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     MonitorCleanupGlobal @ 0x1C002CD40 (MonitorCleanupGlobal.c)
 *     ?TdrInit@@YAXXZ @ 0x1C00D5BC8 (-TdrInit@@YAXXZ.c)
 *     DxgkSqmInit @ 0x1C00D5FAC (DxgkSqmInit.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C00D609C (-DxgDbgInit@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C00D6108 (MonitorInitializeGlobal.c)
 *     DxgkInitialPower @ 0x1C00D66C0 (DxgkInitialPower.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00D7400 (WdmlibIoCreateDeviceSecure.c)
 *     TraceLoggingRegisterEx @ 0x1C00D76E0 (TraceLoggingRegisterEx.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00D7774 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00D78AC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C013F010 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkSqmShutdown @ 0x1C014BA84 (DxgkSqmShutdown.c)
 *     DxgkCleanupPower @ 0x1C016D128 (DxgkCleanupPower.c)
 *     DpiInitializeGlobalState @ 0x1C0188250 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  ETWENABLECALLBACK *v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  void *v14; // r8
  PETWENABLECALLBACK v15; // rdx
  LPCGUID v16; // rcx
  PVOID v17; // r8
  PREGHANDLE v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  PDEVICE_OBJECT v46; // rcx
  _QWORD v47[2]; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  __int64 SystemInformation; // [rsp+88h] [rbp+10h] BYREF

  SystemInformation = (__int64)RegistryPath;
  rbc_InitializeFeatureStaging();
  g_pDriverObject = DriverObject;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (g_OSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
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
      result = CCD_BTL::CreateGlobal(v9, v8, v10, v11);
      if ( result >= 0 )
      {
        TraceLoggingRegisterEx(v13, v12, v14);
        bTracingEnabled = 0;
        McGenEventRegister(v16, v15, v17, v18);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v19, &EventProfilerEnter, v20, 0);
        v47[0] = &DxgkControlGuid;
        v47[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v47);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        v21 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                0,
                &SDDL_DEVOBJ_KERNEL_ONLY,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                &g_pDeviceObject);
        v26 = v21;
        if ( v21 < 0
          || (v32 = DxgkInitialPower(), v26 = v32, v32 < 0)
          || (v33 = MonitorInitializeGlobal(v23, v22, v24, v25), v26 = v33, v33 < 0)
          || (DxgDbgInit(v23, v22, v24, v25), v34 = DxgkSqmInit(), v26 = v34, v34 < 0) )
        {
          v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
          *(_QWORD *)(v27 + 24) = v26;
          WdLogEvent5_WdWarning(v27);
        }
        else
        {
          TdrInit();
          v35 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v26 = v35;
          if ( v35 >= 0 )
          {
            LODWORD(v26) = 0;
LABEL_21:
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(v36, &EventProfilerExit, v37, 0);
            return v26;
          }
          v38 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v38 + 24) = v26;
          WdLogEvent5_WdError(v38);
        }
        DxgkSqmShutdown(v29, v28, v30, v31);
        DxgkCleanupPower();
        MonitorCleanupGlobal(v40, v39, v41, v42);
        v46 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice(g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v46, v43, v44, v45);
        goto LABEL_21;
      }
    }
  }
  return result;
}
