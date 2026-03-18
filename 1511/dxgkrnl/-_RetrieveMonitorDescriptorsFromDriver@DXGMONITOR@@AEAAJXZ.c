/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00DFDFC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetMonitorDescriptor @ 0x1C00E252C (DpiGetMonitorDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(DXGMONITOR *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r14
  int MonitorDescriptor; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  SIZE_T v16; // rax
  PVOID v17; // rax
  _QWORD *v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rcx

  if ( !*((_QWORD *)this + 5) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  v2 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
    v7 = v4;
    if ( !v4 )
    {
      v31 = WdLogNewEntry5_WdError(v5);
      WdLogEvent5_WdError(v31);
      LODWORD(v13) = -1073741801;
      goto LABEL_40;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(*((_QWORD *)this + 5), v3 << 7, v6, v4 + 24);
    v13 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v3 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v26 + 24) = this;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v24 + 24) = v13;
      WdLogEvent5_WdError(v24);
      goto LABEL_18;
    }
    *(_QWORD *)v7 = v2;
    v14 = -v3;
    v7[2] = 2;
    *((_QWORD *)v7 + 2) = 128LL;
    v2 = v7;
    v15 = -(v3++ != 0);
    v7[3] = (v15 & 0xFE) + 1;
    if ( v3 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v3;
LABEL_18:
  LODWORD(v13) = 0;
  operator delete(v7);
LABEL_19:
  if ( (int)v13 < 0 )
  {
LABEL_40:
    while ( v2 )
    {
      v32 = v2;
      v2 = (_QWORD *)*v2;
      operator delete(v32);
    }
    return (unsigned int)v13;
  }
  if ( v2 )
  {
    if ( !v3 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v27);
    }
    v16 = 8LL * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v16 = -1LL;
    v17 = operator new[](v16, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v17;
    if ( v17 )
    {
      for ( *((_DWORD *)this + 28) = v3; v3; *v18 = 0LL )
      {
        if ( !v2 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v29);
        }
        *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * --v3) = v2;
        v2 = (_QWORD *)*v2;
        v18 = *(_QWORD **)(*((_QWORD *)this + 15) + 8LL * v3);
      }
      if ( v2 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v30);
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v18);
      WdLogEvent5_WdError(v28);
      LODWORD(v13) = -1073741801;
    }
  }
  return (unsigned int)v13;
}
