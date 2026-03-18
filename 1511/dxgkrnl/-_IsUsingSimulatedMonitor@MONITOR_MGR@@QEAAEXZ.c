/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C0098510
 * Callers:
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00ADB10 (MonitorIsUsingSimulatedMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this)
{
  struct _FAST_MUTEX *v1; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  char *v5; // rax
  char v6; // di
  __int64 v7; // rax

  v1 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v3 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v3);
  }
  KeAcquireGuardedMutex(v1);
  v4 = (char *)this + 128;
  v5 = (char *)*((_QWORD *)this + 16);
  if ( v5 == (char *)this + 128 || !v5 )
  {
LABEL_9:
    v6 = 0;
  }
  else
  {
    v6 = 1;
    while ( *((_DWORD *)v5 + 94) == 1 )
    {
      v5 = *(char **)v5;
      if ( v5 == v4 || !v5 )
        goto LABEL_9;
    }
  }
  if ( !v1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeReleaseGuardedMutex(v1);
  return v6;
}
