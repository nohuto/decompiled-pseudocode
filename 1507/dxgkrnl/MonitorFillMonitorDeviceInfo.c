/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C009FA5C
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009FBA4 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C00089F8 (RtlStringCchCopyW.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00981D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PZZWSTR v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _DEVICE_OBJECT *v12; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v8 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v20 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      WdLogEvent5_WdAssertion(v20);
      v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v8 + 120), 1u);
    if ( *((_DWORD *)v8 + 94) == 1 && (v8[12] & 0x10) == 0 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v9);
      *(_QWORD *)(v26 + 24) = v8;
      WdLogEvent5_WdDmmEvent(v26);
      v18 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 5);
      if ( !v12 )
      {
LABEL_12:
        v18 = DXGMONITOR::_FillMonitorDeviceInfo(
                (DXGMONITOR *)v8,
                (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2,
                v10,
                v11);
        if ( v18 == -1071841279 )
          v18 = 0;
        if ( v18 >= 0 )
        {
          v19 = *(_DWORD *)(a2 + 20);
          if ( (v19 & 1) == 0 && !*(_WORD *)(a2 + 36) )
            *(_DWORD *)(a2 + 20) = v19 | 2;
        }
        goto LABEL_16;
      }
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v12, 0, &SymbolicLinkList);
      v18 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = DeviceInterfaces;
      }
      else
      {
        v18 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v18 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
          goto LABEL_12;
        }
      }
    }
LABEL_16:
    ExReleaseResourceLite((PERESOURCE)(v8 + 120));
    KeLeaveCriticalRegion();
    return (unsigned int)v18;
  }
  return result;
}
