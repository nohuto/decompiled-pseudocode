/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00C882C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetMonitorDescriptor @ 0x1C00C8010 (DpiGetMonitorDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // r14
  int MonitorDescriptor; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  SIZE_T v19; // rax
  PVOID v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rcx

  if ( !*((_QWORD *)this + 5) )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
    v10 = v7;
    if ( !v7 )
    {
      v37 = WdLogNewEntry5_WdError(v8);
      WdLogEvent5_WdError(v37);
      LODWORD(v16) = -1073741801;
      goto LABEL_40;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(*((_QWORD *)this + 5), v6 << 7, v9, (__int64)(v7 + 6));
    v16 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v6 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v30 + 24) = v16;
      WdLogEvent5_WdError(v30);
      goto LABEL_18;
    }
    *(_QWORD *)v10 = v5;
    v17 = -v6;
    v10[2] = 2;
    *((_QWORD *)v10 + 2) = 128LL;
    v5 = v10;
    v18 = -(v6++ != 0);
    v10[3] = (v18 & 0xFE) + 1;
    if ( v6 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v6;
LABEL_18:
  LODWORD(v16) = 0;
  operator delete(v10);
LABEL_19:
  if ( (int)v16 < 0 )
  {
LABEL_40:
    while ( v5 )
    {
      v38 = v5;
      v5 = (_QWORD *)*v5;
      operator delete(v38);
    }
    return (unsigned int)v16;
  }
  if ( v5 )
  {
    if ( !v6 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v17, v12, v14, v15);
      WdLogEvent5_WdAssertion(v33);
    }
    v19 = 8LL * v6;
    if ( !is_mul_ok(v6, 8uLL) )
      v19 = -1LL;
    v20 = operator new[](v19, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v20;
    if ( v20 )
    {
      for ( *((_DWORD *)this + 28) = v6; v6; *v22 = 0LL )
      {
        if ( !v5 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
          WdLogEvent5_WdAssertion(v35);
        }
        *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * --v6) = v5;
        v5 = (_QWORD *)*v5;
        v22 = *(_QWORD **)(*((_QWORD *)this + 15) + 8LL * v6);
      }
      if ( v5 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        WdLogEvent5_WdAssertion(v36);
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v22);
      WdLogEvent5_WdError(v34);
      LODWORD(v16) = -1073741801;
    }
  }
  return (unsigned int)v16;
}
