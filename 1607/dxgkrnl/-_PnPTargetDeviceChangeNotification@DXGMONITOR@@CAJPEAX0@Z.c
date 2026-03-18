/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01B3510
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00F9B34 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B34A0 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01B3C24 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _FAST_MUTEX *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  PERESOURCE v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v40; // rdx
  void *v41; // rcx
  __int64 v42; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  PERESOURCE Resource; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v53[2]; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+68h] [rbp-A0h]
  _QWORD v55[18]; // [rsp+78h] [rbp-90h] BYREF

  memset(&v55[10], 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[11]);
  v55[17] = MEMORY[0xFFFFF78000000014];
  LODWORD(v55[13]) = 3;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    *(_QWORD *)v53 = 0LL;
    v54 = 0LL;
    InputBuffer = 0LL;
    v10 = DxgkCallDriverIoControl(Context, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, 1u, 0LL);
    v15 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = Context;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdWarning(v16);
      return 0LL;
    }
    v18 = InputBuffer;
    v19 = v53[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, InputBuffer, 0LL);
    v20 = COREADAPTERACCESS::AcquireExclusive(v55);
    if ( v20 >= 0 )
    {
      if ( !*((_QWORD *)v18 + 266) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = *(struct _FAST_MUTEX **)(*((_QWORD *)v18 + 266) + 96LL);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v26);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v25, v19, 1, (ULONG **)&Resource) >= 0 )
      {
        v28 = Resource;
        if ( !Resource )
        {
          v29 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v29);
        }
        if ( v28[3].ActiveEntries != 1 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v30);
        }
        LODWORD(v31) = 0;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)((char *)v28 + 240);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v28 + 240), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v34 = WdLogNewEntry5_WdAssertion(v32);
          WdLogEvent5_WdAssertion(v34);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == v28->ExclusiveWaiters )
        {
          v39 = *(_QWORD *)(NotificationStructure + 4);
          v40 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v39);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v39 )
            v40 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v40 )
          {
            v42 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v39;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v39 )
              v42 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v42 )
            {
              v48 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v39;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v39 )
                v48 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v48 )
              {
                LODWORD(v31) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v28, v40, v36, v37);
                v49 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v28);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 6, v19, v49, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 5, v19, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v28->Address,
                                      0x80000000,
                                      (PFILE_OBJECT *)&v28->ActiveEntries,
                                      &DeviceObject);
              v31 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v44);
                *(_QWORD *)(v45 + 24) = v28->SpinLock;
                *(_QWORD *)(v45 + 32) = v31;
                WdLogEvent5_WdError(v45);
              }
              if ( !*(_QWORD *)&v28->ActiveEntries )
              {
                v46 = WdLogNewEntry5_WdAssertion(v44);
                WdLogEvent5_WdAssertion(v46);
              }
              if ( !DeviceObject )
              {
                v47 = WdLogNewEntry5_WdAssertion(v44);
                WdLogEvent5_WdAssertion(v47);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 4, v19, 0, 0LL);
            v41 = *(void **)&v28->ActiveEntries;
            if ( v41 )
            {
              ObfDereferenceObject(v41);
              *(_QWORD *)&v28->ActiveEntries = 0LL;
            }
          }
          v9 = v31;
        }
        else
        {
          v38 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v38 + 24) = v19;
          WdLogEvent5_WdError(v38);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v23 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v23 + 24) = v19;
    }
    else
    {
      if ( v20 != -1073741130 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = WdLogNewEntry5_WdError(v21);
    }
    WdLogEvent5_WdError(v23);
LABEL_45:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
    return v9;
  }
  return 3221225485LL;
}
