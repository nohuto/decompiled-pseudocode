/*
 * XREFs of MonitorInitializeGlobal @ 0x1C00E410C
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E434C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v27; // rax
  struct _UNICODE_STRING v28; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v30; // [rsp+60h] [rbp-A8h] BYREF
  void *EventCategoryData[3]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v32[10]; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+128h] [rbp+20h]
  _OWORD v34[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v35; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_DWORD *)&v30.Length = 10748066;
  byte_1C00471E0 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v32[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v32[6] = v9;
  v32[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v32[8] = v10;
  v32[9] = v11;
  v33 = v12;
  v30.Buffer = (wchar_t *)v32;
  if ( DxgkOpenRegistrySubkey(&Handle, 0x20019u, 0LL, &v30) >= 0 )
  {
    byte_1C00471E0 = 1;
    ZwClose(Handle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  MONITOR_MGR::_MonitorPendingEventTraceHead.Blink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  *(GUID *)&EventCategoryData[1] = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData[1],
          g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v15 = v13;
  if ( v13 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
  }
  qword_1C0047ED8 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  *(_DWORD *)&v28.Length = 11010214;
  qword_1C0047D48 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v16 = *(_OWORD *)(0x1C0000000LL + 977296);
  v34[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x1C0000000LL + 977312);
  v34[1] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 977328);
  v34[2] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 977344);
  v34[3] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 977360);
  v34[4] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 977376);
  v34[5] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 977392);
  v34[6] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 977408);
  v34[7] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 977424);
  v25 = *(_QWORD *)(0x1C0000000LL + 977440);
  v34[8] = v23;
  v34[9] = v24;
  v35 = v25;
  v28.Buffer = (wchar_t *)v34;
  if ( (int)DxgkCreateRegistrySubkey(EventCategoryData, 0xF003Fu, 0LL, &v28) >= 0 )
    ZwClose(EventCategoryData[0]);
  return (unsigned int)v15;
}
