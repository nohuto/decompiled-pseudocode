/*
 * XREFs of MonitorGetDeviceObject @ 0x1C00A9050
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00A8F40 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C000800C (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DXGMONITOR *v19; // rbx
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v21; // rcx
  unsigned int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  DXGMONITOR *v34; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v24);
  }
  v14 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v14 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v34 = 0LL;
  LOBYTE(v12) = 1;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v5, v12, (ULONG **)&v34) < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v27[4] = this;
    v22 = -1073741275;
    v27[5] = -1073741275LL;
    v27[3] = v5;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    v19 = v34;
    if ( !v34 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v28);
      v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      WdLogEvent5_WdAssertion(v33);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v19, a3, a4);
    v21 = (struct _ERESOURCE *)((char *)v19 + 240);
    v22 = DeviceObject;
    ExReleaseResourceLite(v21);
    KeLeaveCriticalRegion();
  }
  return v22;
}
