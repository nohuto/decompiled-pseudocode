/*
 * XREFs of MonitorInitializeGlobal @ 0x1C00F964C
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F2F60 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F9C40 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
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
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v31; // [rsp+68h] [rbp-A0h] BYREF
  GUID v32; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v33[10]; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+128h] [rbp+20h]
  _OWORD v35[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v36; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_DWORD *)&v30.Length = 10748066;
  byte_1C00573E8 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v33[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v33[6] = v9;
  v33[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v33[8] = v10;
  v33[9] = v11;
  v34 = v12;
  v30.Buffer = (wchar_t *)v33;
  if ( DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &v30) >= 0 )
  {
    byte_1C00573E8 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C0057F50 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v32 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &v32,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v15 = v13;
  if ( v13 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
  }
  qword_1C0058108 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  *(_DWORD *)&v31.Length = 11010214;
  qword_1C0057F68 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v16 = *(_OWORD *)(0x1C0000000LL + 1050672);
  v35[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x1C0000000LL + 1050688);
  v35[1] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 1050704);
  v35[2] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 1050720);
  v35[3] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 1050736);
  v35[4] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 1050752);
  v35[5] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 1050768);
  v35[6] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 1050784);
  v35[7] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 1050800);
  v25 = *(_QWORD *)(0x1C0000000LL + 1050816);
  v35[8] = v23;
  v35[9] = v24;
  v36 = v25;
  v31.Buffer = (wchar_t *)v35;
  if ( (int)DxgkCreateRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v31) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v15;
}
