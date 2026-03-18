/*
 * XREFs of ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01862BC
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C0185404 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01857A4 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        unsigned int a2,
        unsigned __int16 *const a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  if ( a2 == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  *a3 = 0;
  *(_DWORD *)&String.Length = 4063232;
  String.Buffer = a3;
  v7 = RtlIntegerToUnicodeString(v3, 0x10u, &String);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v3;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    a3[String.Length] = 0;
  }
  return (unsigned int)v9;
}
