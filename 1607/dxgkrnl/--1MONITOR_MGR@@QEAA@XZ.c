/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01AE934
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0034E24 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000C8CC (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01AF0EC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGMONITOR **v6; // rsi
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rbx
  struct DXGMONITOR **v9; // rax
  struct DXGMONITOR *v10; // rdx
  __int64 **v11; // rbx
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rcx
  _QWORD v16[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 24;
  v6 = (struct DXGMONITOR **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2, v4, v5) + 24) = this;
  while ( *v6 != (struct DXGMONITOR *)v6 )
  {
    v8 = *v6;
    v9 = *(struct DXGMONITOR ***)*v6;
    if ( *((struct DXGMONITOR ***)*v6 + 1) != v6 || v9[1] != v8 )
      __fastfail(3u);
    *v6 = (struct DXGMONITOR *)v9;
    v9[1] = (struct DXGMONITOR *)v6;
    if ( *((_DWORD *)v8 + 94) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
    }
    else
    {
      v10 = (struct DXGMONITOR *)*((_QWORD *)v8 + 48);
      if ( v10 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
        *((_QWORD *)v8 + 48) = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v8);
    }
  }
  v11 = (__int64 **)((char *)this + 144);
  while ( *v11 != (__int64 *)v11 )
  {
    v12 = *v11;
    v13 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = v12[2];
    *(_QWORD *)(v14 + 32) = v12[3];
    WdLogEvent5_WdError(v14);
    operator delete(v12);
  }
  v15 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v15 )
  {
    KeSetEvent(v15 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
