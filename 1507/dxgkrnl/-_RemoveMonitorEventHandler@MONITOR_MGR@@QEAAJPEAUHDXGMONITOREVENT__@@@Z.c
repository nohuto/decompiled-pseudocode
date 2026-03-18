/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C0181D2C
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C0182B74 (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(
        struct _FAST_MUTEX *this,
        struct HDXGMONITOREVENT__ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  struct HDXGMONITOREVENT__ **p_WaitListHead; // rcx
  struct HDXGMONITOREVENT__ *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v18; // rcx
  struct HDXGMONITOREVENT__ **v19; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(this + 4);
  p_WaitListHead = (struct HDXGMONITOREVENT__ **)&this[2].Event.Header.WaitListHead;
  if ( a2 && (v9 = *p_WaitListHead, *p_WaitListHead != (struct HDXGMONITOREVENT__ *)p_WaitListHead) )
  {
    while ( v9 != a2 )
    {
      if ( p_WaitListHead == (struct HDXGMONITOREVENT__ **)v9 )
        goto LABEL_7;
      v9 = *(struct HDXGMONITOREVENT__ **)v9;
    }
    v18 = *(_QWORD *)a2;
    v19 = (struct HDXGMONITOREVENT__ **)*((_QWORD *)a2 + 1);
    if ( *(struct HDXGMONITOREVENT__ **)(*(_QWORD *)a2 + 8LL) != a2 || *v19 != a2 )
      __fastfail(3u);
    *v19 = (struct HDXGMONITOREVENT__ *)v18;
    *(_QWORD *)(v18 + 8) = v19;
    operator delete(a2);
    v15 = 0;
  }
  else
  {
LABEL_7:
    v10 = WdLogNewEntry5_WdError(p_WaitListHead);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    v15 = -1073741811;
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v16);
  }
  KeReleaseGuardedMutex(this + 4);
  return v15;
}
