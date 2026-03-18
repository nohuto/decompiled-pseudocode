/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C00EEF30
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C00F1A2C (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
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
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rsi
  unsigned int NextMonitorDescriptorEnumerator; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7029);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a1;
  v7[4] = a2;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v22);
    if ( MonitorFromHandle == -1073741816 )
    {
      v17 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      NextMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v18);
      }
      v11 = v22;
      if ( !v22 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v19);
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
      NextMonitorDescriptorEnumerator = DXGMONITOR::_GetNextMonitorDescriptorEnumerator(v11, a2, a3);
      ExReleaseResourceLite((PERESOURCE)((char *)v11 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v16[3] = 0LL;
    v16[4] = a2;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    NextMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7029);
  return NextMonitorDescriptorEnumerator;
}
