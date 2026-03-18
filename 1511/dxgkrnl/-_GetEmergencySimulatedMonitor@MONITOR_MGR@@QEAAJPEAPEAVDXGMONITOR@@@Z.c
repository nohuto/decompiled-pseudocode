/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF080
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002C6C8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR **a2)
{
  __int64 v4; // rax
  struct _FAST_MUTEX *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  ULONG *p_Contention; // rax
  DXGMONITOR *i; // rdi
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(DXGMONITOR **)&this[2].Contention; ; i = *(DXGMONITOR **)i )
  {
    if ( i == (DXGMONITOR *)p_Contention || !i )
    {
      *a2 = 0LL;
      v10 = -1073741275;
      goto LABEL_11;
    }
    if ( *((_DWORD *)i + 94) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor(i) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v13);
  }
  *a2 = i;
  v10 = 0;
LABEL_11:
  if ( !v5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(v5);
  return v10;
}
