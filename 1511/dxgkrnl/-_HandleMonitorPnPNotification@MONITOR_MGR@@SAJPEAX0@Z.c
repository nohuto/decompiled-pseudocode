/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00E3E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     memcmp @ 0x1C0011FB0 (memcmp.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00E4030 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(
        _QWORD *NotificationStructure,
        PVOID Context,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  UNICODE_STRING *v6; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _FAST_MUTEX *v20; // rdi
  int MonitorInstance; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGMONITOR *v26; // r15
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // [rsp+30h] [rbp-39h]
  unsigned __int64 *v40; // [rsp+38h] [rbp-31h]
  struct DXGADAPTER *InputBuffer; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v42[2]; // [rsp+48h] [rbp-21h]
  __int64 v43; // [rsp+50h] [rbp-19h]
  _QWORD v44[13]; // [rsp+58h] [rbp-11h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGMONITOR *v47; // [rsp+E8h] [rbp+7Fh] BYREF

  WdLogNewEntry5_WdTrace(NotificationStructure, Context, a3, a4);
  if ( !NotificationStructure )
    return 3221225485LL;
  v5 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v5 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v5 )
  {
    v29 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v29 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v6 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v6, 0x80000000, &FileObject, &DeviceObject);
  v9 = DeviceObjectPointer;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v31 + 24) = v6->Buffer;
      *(_QWORD *)(v31 + 32) = v9;
      WdLogEvent5_WdError(v31);
      return (unsigned int)v9;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    InputBuffer = 0LL;
    *(_QWORD *)v42 = 0LL;
    v43 = 0LL;
    v9 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, v39, v40);
    ObfDereferenceObject(FileObject);
    if ( (int)v9 < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v32 + 24) = v6->Buffer;
      *(_QWORD *)(v32 + 32) = v9;
      WdLogEvent5_WdWarning(v32);
      return (unsigned int)v9;
    }
    v15 = InputBuffer;
    v16 = v42[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, InputBuffer, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive(v44);
    LODWORD(v9) = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741130 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    }
    else
    {
      if ( !*((_QWORD *)v15 + 248) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = *(struct _FAST_MUTEX **)(*((_QWORD *)v15 + 248) + 120LL);
      if ( !v20 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v35);
      }
      v47 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, v16, 1, (ULONG **)&v47);
      v9 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v26 = v47;
        if ( !v47 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v36);
        }
        if ( *((PDEVICE_OBJECT *)v26 + 5) == DeviceAttachmentBaseRef )
        {
          v27 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v27 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v27 )
          {
            LODWORD(v9) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                        ? 0xC000000D
                        : 0;
            goto LABEL_22;
          }
          DXGMONITOR::_OnMonitorFunctionDriverArrival(v26, v6, 0LL, v25);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v20, 3, v16, v9, 0LL);
        }
        else
        {
          v37 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
          *(_QWORD *)(v37 + 24) = v20;
          WdLogEvent5_WdWarning(v37);
        }
        LODWORD(v9) = 0;
LABEL_22:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        return (unsigned int)v9;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v38 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        *(_QWORD *)(v38 + 24) = v16;
        *(_QWORD *)(v38 + 32) = v20;
        WdLogEvent5_WdWarning(v38);
        LODWORD(v9) = 0;
        goto LABEL_22;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v34[3] = v16;
      v34[4] = v20;
      v34[5] = v9;
    }
    WdLogEvent5_WdError(v34);
    goto LABEL_22;
  }
  v30 = WdLogNewEntry5_WdDmmEvent(v8);
  *(_QWORD *)(v30 + 24) = v6->Buffer;
  WdLogEvent5_WdDmmEvent(v30);
  return 3221225524LL;
}
