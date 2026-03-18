/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0185310
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00D6540 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ @ 0x1C01852A0 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0185988 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _FAST_MUTEX *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  PDEVICE_OBJECT v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  PVOID DeviceExtension; // rcx
  __int64 v49; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // eax
  struct DXGADAPTER *InputBuffer; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v61[2]; // [rsp+48h] [rbp-21h]
  __int64 v62; // [rsp+50h] [rbp-19h]
  _QWORD v63[13]; // [rsp+58h] [rbp-11h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+67h] BYREF
  PERESOURCE Resource; // [rsp+D8h] [rbp+6Fh]

  v6 = WdLogNewEntry5_WdTrace(NotificationStructure, Context, a3, a4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    InputBuffer = 0LL;
    *(_QWORD *)v61 = 0LL;
    v62 = 0LL;
    v8 = DxgkCallDriverIoControl(Context, 2302983LL, &InputBuffer, 24LL, &InputBuffer, 0x18u);
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
    v17 = v61[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, InputBuffer, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(v63);
    if ( v18 >= 0 )
    {
      if ( !*((_QWORD *)v16 + 247) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = *(struct _FAST_MUTEX **)(*((_QWORD *)v16 + 247) + 96LL);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v27);
      }
      DeviceObject = 0LL;
      LOBYTE(v21) = 1;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v26, (unsigned int)v17, v21, (ULONG **)&DeviceObject) >= 0 )
      {
        v32 = DeviceObject;
        if ( !DeviceObject )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( LODWORD(v32[1].Timer) != 1 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          WdLogEvent5_WdAssertion(v34);
        }
        LODWORD(v35) = 0;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)&v32->Dpc.SystemArgument1;
        ExAcquireResourceExclusiveLite((PERESOURCE)&v32->Dpc.SystemArgument1, 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v41 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
          WdLogEvent5_WdAssertion(v41);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == (PDEVICE_OBJECT)v32->Timer )
        {
          v46 = *(_QWORD *)(NotificationStructure + 4);
          v47 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v46;
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v46 )
            v47 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
          if ( v47 )
          {
            v49 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v46;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v46 )
              v49 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v49 )
            {
              v58 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v46;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v46 )
                v58 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v58 )
              {
                LODWORD(v35) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v32, v47, v43, v44);
                v59 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v32);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 6LL, (unsigned int)v17, v59, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 5LL, (unsigned int)v17, 0LL, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v32->Queue.Wcb.DmaWaitEntry.Blink,
                                      0x80000000,
                                      (PFILE_OBJECT *)&v32->DeviceExtension,
                                      &DeviceObject);
              v35 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v55 = WdLogNewEntry5_WdError(v52);
                *(_QWORD *)(v55 + 24) = *(_QWORD *)&v32->Queue.Wcb.NumberOfChannels;
                *(_QWORD *)(v55 + 32) = v35;
                WdLogEvent5_WdError(v55);
              }
              if ( !v32->DeviceExtension )
              {
                v56 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
                WdLogEvent5_WdAssertion(v56);
              }
              if ( !DeviceObject )
              {
                v57 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
                WdLogEvent5_WdAssertion(v57);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 4LL, (unsigned int)v17, 0LL, 0LL);
            DeviceExtension = v32->DeviceExtension;
            if ( DeviceExtension )
            {
              ObfDereferenceObject(DeviceExtension);
              v32->DeviceExtension = 0LL;
            }
          }
          v7 = v35;
        }
        else
        {
          v45 = WdLogNewEntry5_WdError(v42);
          *(_QWORD *)(v45 + 24) = v17;
          WdLogEvent5_WdError(v45);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v24 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v24 + 24) = v17;
    }
    else
    {
      if ( v18 != -1073741130 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = WdLogNewEntry5_WdError(v20);
    }
    WdLogEvent5_WdError(v24);
LABEL_45:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
    return v7;
  }
  return 3221225485LL;
}
