/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB248
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002CCB8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  struct _FAST_MUTEX *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG *p_Contention; // rax
  DXGMONITOR *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( LODWORD(this[2].Owner) != 1 )
    goto LABEL_4;
  v8 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v15 = *(DXGMONITOR **)&this[2].Contention;
  if ( v15 == (DXGMONITOR *)p_Contention )
    v15 = 0LL;
  if ( *((_DWORD *)v15 + 94) != 5 )
  {
    if ( !v8 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v22);
    }
    KeReleaseGuardedMutex(v8);
LABEL_4:
    *a2 = 0LL;
    return 3221226021LL;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor(v15, v10, v12, v13) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v20);
  }
  *a2 = v15;
  if ( !v8 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeReleaseGuardedMutex(v8);
  return 0LL;
}
