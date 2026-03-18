/*
 * XREFs of ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C0181C84
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00CADB4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C0180F10 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01812B0 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        __int64 a2,
        unsigned __int16 *const a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0;
  *(_DWORD *)&String.Length = 4063232;
  String.Buffer = a3;
  v8 = RtlIntegerToUnicodeString(v4, 0x10u, &String);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    a3[String.Length] = 0;
  }
  return (unsigned int)v10;
}
