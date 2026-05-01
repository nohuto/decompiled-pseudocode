/*
 * XREFs of ?GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z @ 0x1800360A0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18003601C (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceManagementValue(
        ExecutionModel::ResourceManager *this,
        int a2,
        int a3,
        unsigned __int64 *a4)
{
  int ProcessMemoryCaps; // r15d
  __int64 ProcessResourceSet; // rax
  bool v10; // bl
  __int64 v11; // rsi
  __int64 v12; // rbx
  void **v13; // rdi
  ExecutionModel::ResourceManager *v14; // rcx
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  bool v21; // zf
  unsigned __int64 v22; // rax
  void *Block; // [rsp+20h] [rbp-38h] BYREF

  ProcessMemoryCaps = 0;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  if ( ProcessResourceSet )
  {
    Block = 0LL;
    v11 = ProcessResourceSet + 1368;
    v12 = *(_QWORD *)(ProcessResourceSet + 1368);
    v13 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    (*(void (__fastcall **)(__int64, void **))(v12 + 56))(v11, v13);
    v10 = *((_DWORD *)Block + 82) == 1;
    operator delete(Block);
  }
  else
  {
    v10 = 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v15 = a3 - 1;
  if ( !v15 )
  {
    if ( v10 )
      v22 = *((_QWORD *)this + 8);
    else
      v22 = *((_QWORD *)this + 9);
    goto LABEL_26;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( v10 )
      v22 = *((_QWORD *)this + 6);
    else
      v22 = *((_QWORD *)this + 7);
    goto LABEL_26;
  }
  v17 = v16 - 1;
  if ( !v17 || (v18 = v17 - 1) == 0 )
  {
    v22 = *((unsigned int *)this + 26);
    goto LABEL_26;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v22 = (unsigned int)(3 * *((_DWORD *)this + 26));
LABEL_26:
    *a4 = v22;
    goto LABEL_27;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    if ( v20 != 2 )
    {
      ProcessMemoryCaps = -2147024809;
      goto LABEL_27;
    }
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(v14, a2, a4, 0LL);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v21 = *a4 == 0;
  }
  else
  {
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(v14, a2, 0LL, a4);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v21 = a4 == 0LL;
  }
  if ( v21 )
    ProcessMemoryCaps = 1;
LABEL_27:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)ProcessMemoryCaps;
}
