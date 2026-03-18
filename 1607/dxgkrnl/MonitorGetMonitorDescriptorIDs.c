/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C00EF1CC
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00EE780 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00F1D0C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
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
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_QWORD *)this + 266) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 266) + 96LL);
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v22 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, v5, 1, (ULONG **)&v22);
  if ( MonitorInstance >= 0 )
  {
    v13 = v22;
    if ( !v22 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v19);
      v21 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v13, a3);
    v15 = (struct _ERESOURCE *)((char *)v13 + 240);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v15);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
