/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01812B0
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181B48 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00CAE44 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C0181C84 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  MONITOR_MGR *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int result; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned int)a2;
  if ( v4 == -1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v8, v4, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 983103LL, (void **)&Path, v13);
    if ( result >= 0 )
    {
      v17 = Path;
      if ( !Path )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14, 0LL, v15, v16);
        WdLogEvent5_WdAssertion(v18);
        v17 = Path;
      }
      v19 = RtlDeleteRegistryValue(0x40000000u, v17, ValueName);
      v21 = v19;
      if ( v19 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v22 + 24) = v6;
        *(_QWORD *)(v22 + 32) = v21;
        WdLogEvent5_WdError(v22);
      }
      ZwClose((HANDLE)Path);
      return v21;
    }
  }
  return result;
}
