/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00ABB60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C009806C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     MonitorIsMonitorConnected @ 0x1C00ABCE0 (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
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
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  MONITOR_MGR *v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-60h]
  _QWORD v28[8]; // [rsp+40h] [rbp-40h] BYREF
  int v29; // [rsp+B8h] [rbp+38h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+40h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireExclusive(v28);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v16[3] = this;
      v16[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v16[5] = *((unsigned int *)this + 63);
    }
    else
    {
      v9 = v4;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 248);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 104) )
      {
        do
        {
          v30 = -1;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = DmmEnumClientVidPnPathTargetsFromSource(this, v11, v12++, &v30);
            if ( v13 < 0 || v30 == -1 )
              break;
            v29 = -2;
            DmmGetVideoOutputTechnology(this, v30, 0LL, &v29);
            if ( v29 == 15 )
            {
              if ( *a2 || a2[1] )
              {
                v24 = WdLogNewEntry5_WdAssertion(v18);
                *(_QWORD *)(v24 + 24) = 5733LL;
                WdLogEvent5_WdAssertion(v24);
              }
              *(_QWORD *)a2 = *(_QWORD *)((char *)this + 252);
            }
            LOBYTE(v29) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v30, 0) >= 0 && !(_BYTE)v29 )
            {
              v25 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
              *(_QWORD *)(v25 + 24) = this;
              *(_QWORD *)(v25 + 32) = v30;
              MonitorCreateSimulatedMonitor(this, v27, 0);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(*((_QWORD *)this + 248) + 104LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v26);
      }
      v15 = (MONITOR_MGR *)*((_QWORD *)this + 248);
      if ( v15 && (v15 = (MONITOR_MGR *)*((_QWORD *)v15 + 15)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v15);
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v23 + 24) = this;
        WdLogEvent5_WdError(v23);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  return v9;
}
