/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C01AFB88
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C01B0BBC (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(struct _FAST_MUTEX *this, struct HDXGMONITOREVENT__ *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  struct HDXGMONITOREVENT__ **p_WaitListHead; // rcx
  struct HDXGMONITOREVENT__ *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v13; // rcx
  struct HDXGMONITOREVENT__ **v14; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 4);
  p_WaitListHead = (struct HDXGMONITOREVENT__ **)&this[2].Event.Header.WaitListHead;
  if ( a2 && (v7 = *p_WaitListHead, *p_WaitListHead != (struct HDXGMONITOREVENT__ *)p_WaitListHead) )
  {
    while ( v7 != a2 )
    {
      if ( p_WaitListHead == (struct HDXGMONITOREVENT__ **)v7 )
        goto LABEL_7;
      v7 = *(struct HDXGMONITOREVENT__ **)v7;
    }
    v13 = *(_QWORD *)a2;
    v14 = (struct HDXGMONITOREVENT__ **)*((_QWORD *)a2 + 1);
    if ( *(struct HDXGMONITOREVENT__ **)(*(_QWORD *)a2 + 8LL) != a2 || *v14 != a2 )
      __fastfail(3u);
    *v14 = (struct HDXGMONITOREVENT__ *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    operator delete(a2);
    v10 = 0;
  }
  else
  {
LABEL_7:
    v8 = WdLogNewEntry5_WdError(p_WaitListHead);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdError(v8);
    v10 = -1073741811;
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(this + 4);
  return v10;
}
