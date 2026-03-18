/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C3980
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0088FA0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C00C3C08 (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r15
  int v14; // eax
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-39h]
  int v29; // [rsp+30h] [rbp-29h]
  _QWORD v30[10]; // [rsp+40h] [rbp-19h] BYREF
  int v31; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+77h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireExclusive(v30);
  v10 = 0;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v18[3] = this;
      v18[4] = *((int *)this + 68);
      v18[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v10 = v5;
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 266);
    if ( v11 )
    {
      v12 = 0;
      if ( *(_DWORD *)(v11 + 80) )
      {
        do
        {
          v32 = -1;
          v13 = 0LL;
          while ( 1 )
          {
            v14 = DmmEnumClientVidPnPathTargetsFromSource(this, v12, v13++, &v32);
            if ( v14 < 0 || v32 == -1 )
              break;
            v31 = -2;
            DmmGetVideoOutputTechnology(this, v32, 0LL, &v31);
            if ( v31 == 15 )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v25 = WdLogNewEntry5_WdAssertion(v19);
                *(_QWORD *)(v25 + 24) = 6066LL;
                WdLogEvent5_WdAssertion(v25);
              }
              *a2 = *(_QWORD *)((char *)this + 268);
            }
            LOBYTE(v31) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v32, 0) >= 0 && !(_BYTE)v31 )
            {
              v26 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
              *(_QWORD *)(v26 + 24) = this;
              *(_QWORD *)(v26 + 32) = v32;
              MonitorCreateSimulatedMonitor(this, v28, 0, v29, (__int64)v2);
            }
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(*((_QWORD *)this + 266) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v27);
      }
      v16 = *((_QWORD *)this + 266);
      if ( v16 && (v15 = *(MONITOR_MGR **)(v16 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v15, v2);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v24 + 24) = this;
        WdLogEvent5_WdError(v24);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  return v10;
}
