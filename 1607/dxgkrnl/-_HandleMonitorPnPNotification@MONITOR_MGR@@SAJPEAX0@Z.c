/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00F9890
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0012360 (memcmp.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00F9B34 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  UNICODE_STRING *v8; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _FAST_MUTEX *v22; // rdi
  int MonitorInstance; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGMONITOR *v28; // r14
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v43; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v45[2]; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  _QWORD v47[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v48[8]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v48, 0, sizeof(v48));
  EtwActivityIdControl(3u, (LPGUID)&v48[1]);
  v48[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v48[3]) = 2;
  WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
  if ( !NotificationStructure )
    return 3221225485LL;
  v7 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v7 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v7 )
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
  v8 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v8, 0x80000000, &FileObject, &DeviceObject);
  v11 = DeviceObjectPointer;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v33 + 24) = v8->Buffer;
      *(_QWORD *)(v33 + 32) = v11;
      WdLogEvent5_WdError(v33);
      return (unsigned int)v11;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    *(_QWORD *)v45 = 0LL;
    v46 = 0LL;
    InputBuffer = 0LL;
    v11 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v11 < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v34 + 24) = v8->Buffer;
      *(_QWORD *)(v34 + 32) = v11;
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v11;
    }
    v17 = InputBuffer;
    v18 = v45[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, InputBuffer, 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive(v47);
    LODWORD(v11) = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741130 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    }
    else
    {
      if ( !*((_QWORD *)v17 + 266) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = *(struct _FAST_MUTEX **)(*((_QWORD *)v17 + 266) + 96LL);
      if ( !v22 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v37);
      }
      v43 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v22, v18, 1, (ULONG **)&v43);
      v11 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v28 = v43;
        if ( !v43 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v38);
        }
        if ( *((PDEVICE_OBJECT *)v28 + 5) == DeviceAttachmentBaseRef )
        {
          v29 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v29 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v29 )
          {
            LODWORD(v11) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                         ? 0xC000000D
                         : 0;
LABEL_21:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
            return (unsigned int)v11;
          }
          DXGMONITOR::_OnMonitorFunctionDriverArrival(v28, v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v48, v27);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v22, 3, v18, v11, 0LL);
        }
        else
        {
          v39 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
          *(_QWORD *)(v39 + 24) = v22;
          WdLogEvent5_WdWarning(v39);
        }
        LODWORD(v11) = 0;
        goto LABEL_21;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v40 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v40 + 24) = v18;
        *(_QWORD *)(v40 + 32) = v22;
        WdLogEvent5_WdWarning(v40);
        LODWORD(v11) = 0;
        goto LABEL_21;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v36[3] = v18;
      v36[4] = v22;
      v36[5] = v11;
    }
    WdLogEvent5_WdError(v36);
    goto LABEL_21;
  }
  v32 = WdLogNewEntry5_WdDmmEvent(v10);
  *(_QWORD *)(v32 + 24) = v8->Buffer;
  WdLogEvent5_WdDmmEvent(v32);
  return 3221225524LL;
}
