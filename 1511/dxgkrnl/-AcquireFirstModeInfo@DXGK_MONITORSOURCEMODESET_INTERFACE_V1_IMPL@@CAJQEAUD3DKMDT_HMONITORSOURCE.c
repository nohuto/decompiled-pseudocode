/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01873E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00E1138 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int MonitorFromHandle; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *p_PixelRate; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  D3DKMDT_COLOR_BASIS *p_ColorBasis; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v26; // rax
  __int64 v27; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v28; // rdx
  __int64 v29; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v30; // rdi
  __int64 v31; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v33; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7018);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v33);
    if ( MonitorFromHandle == -1073741816 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a1;
      WdLogEvent5_WdError(v14);
      v11 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = v33;
      if ( !v33 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v17);
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      KeEnterCriticalRegion();
      p_PixelRate = (struct _ERESOURCE *)&v16[2].VideoSignalInfo.PixelRate;
      ExAcquireResourceSharedLite((PERESOURCE)&v16[2].VideoSignalInfo.PixelRate, 1u);
      if ( v16[1].VideoSignalInfo.AdditionalSignalInfo )
      {
        v33 = 0LL;
        p_ColorBasis = &v16[1].ColorBasis;
        v26 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v16[1].ColorBasis;
        if ( v26 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v16[1].ColorBasis
          || v26 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)96 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v27);
        }
        if ( *(D3DKMDT_COLOR_BASIS **)p_ColorBasis == p_ColorBasis )
          v28 = 0LL;
        else
          v28 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(*(_QWORD *)p_ColorBasis - 96LL);
        v11 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v16, v28, &v33);
        if ( !v11 )
        {
          v30 = v33;
          if ( !v33 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v29);
            WdLogEvent5_WdAssertion(v31);
          }
          *a2 = v30;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = v16;
        v11 = 1075708747;
      }
      ExReleaseResourceLite(p_PixelRate);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a1;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7018);
  return v11;
}
