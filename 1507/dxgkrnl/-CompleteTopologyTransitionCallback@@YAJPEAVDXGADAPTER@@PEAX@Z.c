/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C005FDB4 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C005FEF0 (MonitorIsMonitorConnected.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C008CE38 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  MONITOR_MGR *v18; // rcx
  _QWORD *v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD v33[8]; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+40h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireExclusive(v33);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v19[3] = this;
      v19[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v19[5] = *((unsigned int *)this + 63);
    }
    else
    {
      v9 = v4;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 247);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 80) )
      {
        do
        {
          v35 = -1;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = DmmEnumClientVidPnPathTargetsFromSource(this, v11, v12++, &v35);
            if ( v13 < 0 || v35 == -1 )
              break;
            v34 = -2;
            DmmGetVideoOutputTechnology(this, v35, 0LL, &v34);
            if ( v34 == 15 )
            {
              if ( *a2 || a2[1] )
              {
                v30 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
                *(_QWORD *)(v30 + 24) = 5331LL;
                WdLogEvent5_WdAssertion(v30);
              }
              *(_QWORD *)a2 = *(_QWORD *)((char *)this + 252);
            }
            LOBYTE(v34) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v35, 0) >= 0 && !(_BYTE)v34 )
            {
              v31 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
              *(_QWORD *)(v31 + 24) = this;
              *(_QWORD *)(v31 + 32) = v35;
              MonitorCreateSimulatedMonitor(this);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(*((_QWORD *)this + 247) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v32);
      }
      v18 = (MONITOR_MGR *)*((_QWORD *)this + 247);
      if ( v18 && (v18 = (MONITOR_MGR *)*((_QWORD *)v18 + 12)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v18);
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v29 + 24) = this;
        WdLogEvent5_WdError(v29);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  return v9;
}
