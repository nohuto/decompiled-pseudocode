/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01AEF48
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01AF880 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00F31A8 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01AFAE0 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  MONITOR_MGR *v7; // rcx
  __int64 v8; // rax
  int result; // eax
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned int)a2;
  if ( v4 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v7, v4, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0xF003Fu, (void **)&Path);
    if ( result >= 0 )
    {
      v11 = Path;
      if ( !Path )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v12);
        v11 = Path;
      }
      v13 = RtlDeleteRegistryValue(0x40000000u, v11, ValueName);
      v15 = v13;
      if ( v13 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v16 + 24) = v6;
        *(_QWORD *)(v16 + 32) = v15;
        WdLogEvent5_WdError(v16);
      }
      ZwClose((HANDLE)Path);
      return v15;
    }
  }
  return result;
}
