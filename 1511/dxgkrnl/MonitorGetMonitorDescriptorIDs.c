/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C00E2FD4
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00E3D50 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00E166C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rcx
  int MonitorInstance; // edi
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_QWORD *)this + 248) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 248) + 120LL);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v24 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, v5, 1, (ULONG **)&v24);
  if ( MonitorInstance >= 0 )
  {
    v13 = v24;
    if ( !v24 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v21);
      v23 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v13, a3, v14, v15);
    v17 = (struct _ERESOURCE *)((char *)v13 + 240);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v17);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
