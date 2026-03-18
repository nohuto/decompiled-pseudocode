/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C00ABA10
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00AB7BC (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C000A4DC (RtlStringCchCopyW.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009C9BC (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  PZZWSTR v5; // rbx
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *v7; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // edi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v5 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v15 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v15);
      v17 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5 + 120), 1u);
    if ( *((_DWORD *)v5 + 94) == 1 && (v5[12] & 0x10) == 0 )
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v18 + 24) = v5;
      WdLogEvent5_WdDmmEvent(v18);
      v13 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 5);
      if ( !v7 )
      {
LABEL_12:
        v13 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v5, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
        if ( v13 == -1071841279 )
          v13 = 0;
        if ( v13 >= 0 )
        {
          v14 = *(_DWORD *)(a2 + 20);
          if ( (v14 & 1) == 0 && !*(_WORD *)(a2 + 36) )
            *(_DWORD *)(a2 + 20) = v14 | 2;
        }
        goto LABEL_16;
      }
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v7, 0, &SymbolicLinkList);
      v13 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = DeviceInterfaces;
      }
      else
      {
        v13 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v13 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
          goto LABEL_12;
        }
      }
    }
LABEL_16:
    ExReleaseResourceLite((PERESOURCE)(v5 + 120));
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
  return result;
}
