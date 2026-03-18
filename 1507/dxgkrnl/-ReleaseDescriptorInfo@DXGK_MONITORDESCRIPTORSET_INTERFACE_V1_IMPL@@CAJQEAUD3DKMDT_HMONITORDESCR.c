/*
 * XREFs of ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00DE680
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00C9A6C (-_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::ReleaseDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int MonitorFromHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  struct _ERESOURCE *v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGMONITOR *v31; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7030);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v31);
    if ( MonitorFromHandle == -1073741816 )
    {
      v23 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdError(v23);
      v18 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v24);
      }
      v13 = v31;
      if ( !v31 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v25);
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v30);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
      v16 = DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(v13, a2, v14, v15);
      v17 = (struct _ERESOURCE *)((char *)v13 + 240);
      v18 = v16;
      ExReleaseResourceLite(v17);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v22 + 24) = 0LL;
    WdLogEvent5_WdError(v22);
    v18 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7030);
  return v18;
}
