/*
 * XREFs of MonitorGetMonitorEldInformation @ 0x1C00DCB94
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00DC890 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00C9CA8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorEldInformation(
        DXGADAPTER *this,
        __int64 a2,
        struct _MONITOR_PACKED_ELD_INFORMATION *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int MonitorInstance; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGMONITOR *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  struct DXGMONITOR *v33; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v13 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v33 = 0LL;
  LOBYTE(v10) = 1;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v5, v10, (ULONG **)&v33);
  if ( MonitorInstance >= 0 )
  {
    v19 = v33;
    if ( !v33 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
      WdLogEvent5_WdAssertion(v27);
      v32 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
      WdLogEvent5_WdAssertion(v32);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
    MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(v19, a3, v20, v21);
    v23 = (struct _ERESOURCE *)((char *)v19 + 240);
    MonitorInstance = MonitorEldInformation;
    ExReleaseResourceLite(v23);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
