/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C00CB180
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  MONITOR_MGR *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  MONITOR_MGR *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  MONITOR_MGR **Blink; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !VIDPN_MGR::_MonitorEventHandler )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  *a4 = 0LL;
  v6 = (MONITOR_MGR *)operator new[](0x20uLL, 0x4D677844u, PagedPool);
  v11 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 2) = VIDPN_MGR::_MonitorEventHandler;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v20);
    }
    KeAcquireGuardedMutex(this + 4);
    Blink = (MONITOR_MGR **)this[2].Event.Header.WaitListHead.Blink;
    *(_QWORD *)v11 = (char *)this + 144;
    *((_QWORD *)v11 + 1) = Blink;
    if ( *Blink != (MONITOR_MGR *)&this[2].Event.Header.WaitListHead )
      __fastfail(3u);
    *Blink = v11;
    this[2].Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v11;
    *a4 = v11;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v21 = WdLogNewEntry5_WdAssertion(Blink, v12, v13, v14);
      WdLogEvent5_WdAssertion(v21);
    }
    KeReleaseGuardedMutex(this + 4);
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    WdLogEvent5_WdError(v19);
    return 3221225495LL;
  }
}
