/*
 * XREFs of ?IsKillable@ResourceManager@ExecutionModel@@UEAAJKPEA_N@Z @ 0x18003D070
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::IsKillable(ExecutionModel::ResourceManager *this, int a2, bool *a3)
{
  __int64 ProcessResourceSet; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  void **v8; // rdi
  void *v9; // rcx
  void *Block; // [rsp+58h] [rbp+20h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  if ( ProcessResourceSet )
  {
    v6 = ProcessResourceSet + 1368;
    Block = 0LL;
    v7 = *(_QWORD *)(ProcessResourceSet + 1368);
    v8 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    (*(void (__fastcall **)(__int64, void **))(v7 + 56))(v6, v8);
    v9 = Block;
    *a3 = *((_DWORD *)Block + 16) == 1;
    operator delete(v9);
  }
  else
  {
    *a3 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
