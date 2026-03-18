/*
 * XREFs of MonitorGetDeviceObject @ 0x1C00BA238
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BA120 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C000183C (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(
        DXGADAPTER *this,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rcx
  DXGMONITOR *v13; // rbx
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGMONITOR *v25; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_QWORD *)this + 266) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v18);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 266) + 96LL);
  if ( !v11 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v25 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, v5, 1, (ULONG **)&v25) < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v21[4] = this;
    v16 = -1073741275;
    v21[5] = -1073741275LL;
    v21[3] = v5;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    v13 = v25;
    if ( !v25 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v22);
      v24 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v13, a3, a4);
    v15 = (struct _ERESOURCE *)((char *)v13 + 240);
    v16 = DeviceObject;
    ExReleaseResourceLite(v15);
    KeLeaveCriticalRegion();
  }
  return v16;
}
