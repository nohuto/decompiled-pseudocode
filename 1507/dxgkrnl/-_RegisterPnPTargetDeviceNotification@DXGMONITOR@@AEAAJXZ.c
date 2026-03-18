/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00C8E90
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  struct _DEVICE_OBJECT *v13; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v15; // r9
  PVOID v16; // r8
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGMONITOR *v25; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 6) )
  {
    v27 = WdLogNewEntry5_WdDmmEvent(v5);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdDmmEvent(v27);
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
    v12 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v9);
      *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 12);
      WdLogEvent5_WdDmmEvent(v28);
    }
    else if ( DeviceObjectPointer < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 12);
      *(_QWORD *)(v29 + 32) = v12;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      if ( !*v6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
        WdLogEvent5_WdAssertion(v30);
      }
      v13 = DeviceObject;
      if ( !DeviceObject )
      {
        v31 = WdLogNewEntry5_WdAssertion(0LL, v8, v10, v11);
        WdLogEvent5_WdAssertion(v31);
        v13 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v13);
      v15 = g_pDriverObject;
      v16 = *v6;
      *((_QWORD *)this + 7) = AttachedDeviceReference;
      v17 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v16,
              v15,
              DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 6);
      v12 = v17;
      if ( v17 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v32 + 24) = *((unsigned int *)this + 7);
        *(_QWORD *)(v32 + 32) = v12;
        WdLogEvent5_WdError(v32);
        ObfDereferenceObject(*v6);
        *v6 = 0LL;
      }
      else
      {
        v19 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 5),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 72));
        v12 = v19;
        if ( v19 < 0 || (v21 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 1u), v12 = v21, v21 < 0) )
        {
          v33 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v33 + 24) = *((unsigned int *)this + 7);
          *(_QWORD *)(v33 + 32) = v12;
          WdLogEvent5_WdError(v33);
        }
        v25 = this;
        if ( *((_DWORD *)this + 94) != 1 && *((_QWORD *)this + 48) )
          v25 = (DXGMONITOR *)*((_QWORD *)this + 48);
        if ( !v25 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v20, v22, v23, v24);
          WdLogEvent5_WdAssertion(v34);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v25 + 240), 1u);
        DXGMONITOR::_MonitorTelemetry((__int64)v25, ((unsigned __int8)~*((_BYTE *)this + 24) >> 6) & 1);
        ExReleaseResourceLite((PERESOURCE)((char *)v25 + 240));
        KeLeaveCriticalRegion();
      }
    }
    return (unsigned int)v12;
  }
}
