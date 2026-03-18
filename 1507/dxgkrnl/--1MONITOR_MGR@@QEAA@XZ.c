/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C0180D24
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C002CBE4 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000942C (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0181444 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGMONITOR **v5; // rsi
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rbx
  struct DXGMONITOR **v8; // rax
  struct DXGMONITOR *v9; // rdx
  __int64 **v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KEVENT *v14; // rcx

  v5 = (struct DXGMONITOR **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  while ( *v5 != (struct DXGMONITOR *)v5 )
  {
    v7 = *v5;
    v8 = *(struct DXGMONITOR ***)*v5;
    if ( *((struct DXGMONITOR ***)*v5 + 1) != v5 || v8[1] != v7 )
      __fastfail(3u);
    *v5 = (struct DXGMONITOR *)v8;
    v8[1] = (struct DXGMONITOR *)v5;
    if ( *((_DWORD *)v7 + 94) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v7);
    }
    else
    {
      v9 = (struct DXGMONITOR *)*((_QWORD *)v7 + 48);
      if ( v9 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v9);
        *((_QWORD *)v7 + 48) = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v7);
    }
  }
  v10 = (__int64 **)((char *)this + 144);
  while ( *v10 != (__int64 *)v10 )
  {
    v11 = *v10;
    v12 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = v11[2];
    *(_QWORD *)(v13 + 32) = v11[3];
    WdLogEvent5_WdError(v13);
    operator delete(v11);
  }
  v14 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v14 )
  {
    KeSetEvent(v14 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
