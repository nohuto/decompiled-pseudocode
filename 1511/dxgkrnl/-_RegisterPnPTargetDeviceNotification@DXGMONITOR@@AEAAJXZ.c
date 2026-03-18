/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00E04E0
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  PVOID *v6; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct _DEVICE_OBJECT *v10; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v12; // r9
  PVOID v13; // r8
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  DXGMONITOR *v19; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 6) )
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v5);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdDmmEvent(v21);
    return 0LL;
  }
  else
  {
    DeviceObject = 0LL;
    v6 = (PVOID *)((char *)this + 64);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 88),
                            0x80000000,
                            (PFILE_OBJECT *)this + 8,
                            &DeviceObject);
    v9 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v8);
      *(_QWORD *)(v22 + 24) = *((_QWORD *)this + 12);
      WdLogEvent5_WdDmmEvent(v22);
    }
    else if ( DeviceObjectPointer < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v23 + 24) = *((_QWORD *)this + 12);
      *(_QWORD *)(v23 + 32) = v9;
      WdLogEvent5_WdError(v23);
    }
    else
    {
      if ( !*v6 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v24);
      }
      v10 = DeviceObject;
      if ( !DeviceObject )
      {
        v25 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v25);
        v10 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v10);
      v12 = g_pDriverObject;
      v13 = *v6;
      *((_QWORD *)this + 7) = AttachedDeviceReference;
      v14 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v13,
              v12,
              DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 6);
      v9 = v14;
      if ( v14 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v26 + 24) = *((unsigned int *)this + 7);
        *(_QWORD *)(v26 + 32) = v9;
        WdLogEvent5_WdError(v26);
        ObfDereferenceObject(*v6);
        *v6 = 0LL;
      }
      else
      {
        v16 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 5),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 72));
        v9 = v16;
        if ( v16 < 0 || (v18 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 1u), v9 = v18, v18 < 0) )
        {
          v27 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v27 + 24) = *((unsigned int *)this + 7);
          *(_QWORD *)(v27 + 32) = v9;
          WdLogEvent5_WdError(v27);
        }
        v19 = this;
        if ( *((_DWORD *)this + 94) != 1 && *((_QWORD *)this + 48) )
          v19 = (DXGMONITOR *)*((_QWORD *)this + 48);
        if ( !v19 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v28);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
        DXGMONITOR::_MonitorTelemetry(v19, ((unsigned __int8)~*((_BYTE *)this + 24) >> 6) & 1);
        ExReleaseResourceLite((PERESOURCE)((char *)v19 + 240));
        KeLeaveCriticalRegion();
      }
    }
    return (unsigned int)v9;
  }
}
