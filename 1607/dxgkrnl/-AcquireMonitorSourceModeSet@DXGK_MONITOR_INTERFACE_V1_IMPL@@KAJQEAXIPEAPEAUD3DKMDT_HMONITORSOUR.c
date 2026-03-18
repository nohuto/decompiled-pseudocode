/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01B0F60
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int MonitorHandle; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7052);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
    v15 = DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_11;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *((_QWORD *)v15 + 266) )
    {
      LOBYTE(v16) = 1;
      MonitorHandle = MonitorGetMonitorHandle(
                        v15,
                        (unsigned int)v6,
                        v16,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        &v26);
      v7 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        v22 = WdLogNewEntry5_WdWarning(v11, v20, v12, v21);
        *(_QWORD *)(v22 + 24) = v6;
        WdLogEvent5_WdWarning(v22);
        LODWORD(v7) = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v7 = v26;
        if ( !v26 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v24);
        }
        *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v7;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        LODWORD(v7) = 0;
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v23 + 24) = v6;
        *(_QWORD *)(v23 + 32) = v7;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
LABEL_11:
      v18 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v18 + 24) = v7;
      WdLogEvent5_WdError(v18);
      LODWORD(v7) = -1071775742;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = v7;
    WdLogEvent5_WdError(v10);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 7052);
  return (unsigned int)v7;
}
