/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00D6350
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     memcmp @ 0x1C0010840 (memcmp.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00D6540 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rdi
  int MonitorInstance; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGMONITOR *v29; // r15
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int8 v42; // [rsp+30h] [rbp-39h]
  unsigned __int64 *v43; // [rsp+38h] [rbp-31h]
  struct DXGADAPTER *InputBuffer; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v45[2]; // [rsp+48h] [rbp-21h]
  __int64 v46; // [rsp+50h] [rbp-19h]
  _QWORD v47[13]; // [rsp+58h] [rbp-11h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGMONITOR *v50; // [rsp+E8h] [rbp+7Fh] BYREF

  WdLogNewEntry5_WdTrace(NotificationStructure, Context, a3, a4);
  if ( !NotificationStructure )
    return 3221225485LL;
  v5 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v5 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v5 )
  {
    v32 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v32 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v32);
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
      v34 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v34 + 24) = v6->Buffer;
      *(_QWORD *)(v34 + 32) = v9;
      WdLogEvent5_WdError(v34);
      return (unsigned int)v9;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    InputBuffer = 0LL;
    *(_QWORD *)v45 = 0LL;
    v46 = 0LL;
    v9 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, v42, v43);
    ObfDereferenceObject(FileObject);
    if ( (int)v9 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v35 + 24) = v6->Buffer;
      *(_QWORD *)(v35 + 32) = v9;
      WdLogEvent5_WdWarning(v35);
      return (unsigned int)v9;
    }
    v15 = InputBuffer;
    v16 = v45[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, InputBuffer, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive(v47);
    LODWORD(v9) = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741130 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v36);
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    }
    else
    {
      if ( !*((_QWORD *)v15 + 247) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = *(struct _FAST_MUTEX **)(*((_QWORD *)v15 + 247) + 96LL);
      if ( !v23 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v38);
      }
      v50 = 0LL;
      LOBYTE(v20) = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, (unsigned int)v16, v20, (ULONG **)&v50);
      v9 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v29 = v50;
        if ( !v50 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
          WdLogEvent5_WdAssertion(v39);
        }
        if ( *((PDEVICE_OBJECT *)v29 + 5) == DeviceAttachmentBaseRef )
        {
          v30 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v30 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v30 )
          {
            LODWORD(v9) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                        ? 0xC000000D
                        : 0;
            goto LABEL_22;
          }
          DXGMONITOR::_OnMonitorFunctionDriverArrival(v29, v6, 0LL, v28);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 3LL, (unsigned int)v16, (unsigned int)v9, 0LL);
        }
        else
        {
          v40 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
          *(_QWORD *)(v40 + 24) = v23;
          WdLogEvent5_WdWarning(v40);
        }
        LODWORD(v9) = 0;
LABEL_22:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
        return (unsigned int)v9;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v41 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        *(_QWORD *)(v41 + 24) = v16;
        *(_QWORD *)(v41 + 32) = v23;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v9) = 0;
        goto LABEL_22;
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v37[3] = v16;
      v37[4] = v23;
      v37[5] = v9;
    }
    WdLogEvent5_WdError(v37);
    goto LABEL_22;
  }
  v33 = WdLogNewEntry5_WdDmmEvent(v8);
  *(_QWORD *)(v33 + 24) = v6->Buffer;
  WdLogEvent5_WdDmmEvent(v33);
  return 3221225524LL;
}
