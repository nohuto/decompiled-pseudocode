/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0189B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00E4030 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ @ 0x1C0189AB4 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C018A198 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  PDEVICE_OBJECT v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  PVOID DeviceExtension; // rcx
  __int64 v40; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  struct DXGADAPTER *InputBuffer; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v49[2]; // [rsp+48h] [rbp-21h]
  __int64 v50; // [rsp+50h] [rbp-19h]
  _QWORD v51[13]; // [rsp+58h] [rbp-11h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+67h] BYREF
  PERESOURCE Resource; // [rsp+D8h] [rbp+6Fh]

  v6 = WdLogNewEntry5_WdTrace(NotificationStructure, Context, a3, a4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    InputBuffer = 0LL;
    *(_QWORD *)v49 = 0LL;
    v50 = 0LL;
    v8 = DxgkCallDriverIoControl(Context, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u);
    v13 = v8;
    if ( v8 < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = Context;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdWarning(v14);
      return 0LL;
    }
    v16 = InputBuffer;
    v17 = v49[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, InputBuffer, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(v51);
    if ( v18 >= 0 )
    {
      if ( !*((_QWORD *)v16 + 248) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = *(struct _FAST_MUTEX **)(*((_QWORD *)v16 + 248) + 120LL);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v24);
      }
      DeviceObject = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v23, v17, 1, (ULONG **)&DeviceObject) >= 0 )
      {
        v26 = DeviceObject;
        if ( !DeviceObject )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        if ( LODWORD(v26[1].Timer) != 1 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v28);
        }
        LODWORD(v29) = 0;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)&v26->Dpc.SystemArgument1;
        ExAcquireResourceExclusiveLite((PERESOURCE)&v26->Dpc.SystemArgument1, 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == (PDEVICE_OBJECT)v26->Timer )
        {
          v37 = *(_QWORD *)(NotificationStructure + 4);
          v38 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v37;
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v37 )
            v38 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
          if ( v38 )
          {
            v40 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v37;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v37 )
              v40 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v40 )
            {
              v46 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v37;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v37 )
                v46 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v46 )
              {
                LODWORD(v29) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v26, v38, v34, v35);
                v47 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v26);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 6, v17, v47, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 5, v17, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v26->Queue.Wcb.DmaWaitEntry.Blink,
                                      0x80000000,
                                      (PFILE_OBJECT *)&v26->DeviceExtension,
                                      &DeviceObject);
              v29 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v42);
                *(_QWORD *)(v43 + 24) = *(_QWORD *)&v26->Queue.Wcb.NumberOfChannels;
                *(_QWORD *)(v43 + 32) = v29;
                WdLogEvent5_WdError(v43);
              }
              if ( !v26->DeviceExtension )
              {
                v44 = WdLogNewEntry5_WdAssertion(v42);
                WdLogEvent5_WdAssertion(v44);
              }
              if ( !DeviceObject )
              {
                v45 = WdLogNewEntry5_WdAssertion(v42);
                WdLogEvent5_WdAssertion(v45);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 4, v17, 0, 0LL);
            DeviceExtension = v26->DeviceExtension;
            if ( DeviceExtension )
            {
              ObfDereferenceObject(DeviceExtension);
              v26->DeviceExtension = 0LL;
            }
          }
          v7 = v29;
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v36 + 24) = v17;
          WdLogEvent5_WdError(v36);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v21 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v21 + 24) = v17;
    }
    else
    {
      if ( v18 != -1073741130 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = WdLogNewEntry5_WdError(v19);
    }
    WdLogEvent5_WdError(v21);
LABEL_45:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    return v7;
  }
  return 3221225485LL;
}
