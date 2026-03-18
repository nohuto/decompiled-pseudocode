/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C00DE4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C00C99CC (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireNextDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int MonitorFromHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v14; // rsi
  __int64 v15; // r9
  unsigned int NextMonitorDescriptorEnumerator; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct DXGMONITOR *v29; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7029);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a1;
  v7[4] = a2;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v21 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdError(v21);
      NextMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v22);
      }
      v14 = v29;
      if ( !v29 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v23);
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
      NextMonitorDescriptorEnumerator = DXGMONITOR::_GetNextMonitorDescriptorEnumerator(v14, a2, a3, v15);
      ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v20[3] = 0LL;
    v20[4] = a2;
    v20[5] = a1;
    WdLogEvent5_WdError(v20);
    NextMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7029);
  return NextMonitorDescriptorEnumerator;
}
