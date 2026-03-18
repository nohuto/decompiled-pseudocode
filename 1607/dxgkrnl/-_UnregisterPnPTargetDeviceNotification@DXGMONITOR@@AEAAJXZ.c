/*
 * XREFs of ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01B3C24
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01B3510 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_UnregisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  LODWORD(v5) = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 10) )
  {
    v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = *((unsigned int *)this + 7);
      *(_QWORD *)(v8 + 32) = v5;
      WdLogEvent5_WdError(v8);
    }
  }
  v9 = (void *)*((_QWORD *)this + 6);
  if ( v9 )
  {
    IoUnregisterPlugPlayNotification(v9);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((_QWORD *)this + 10) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 72));
    *((_QWORD *)this + 10) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 7);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 7) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 8);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *((_QWORD *)this + 8) = 0LL;
  }
  return (unsigned int)v5;
}
