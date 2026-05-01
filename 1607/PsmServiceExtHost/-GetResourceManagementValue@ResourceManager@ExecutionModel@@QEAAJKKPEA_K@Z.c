/*
 * XREFs of ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002C728
 * Callers:
 *     RmgrSrv_SHGetResourceManagementValue @ 0x180028C00 (RmgrSrv_SHGetResourceManagementValue.c)
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x180001E70 (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18002C698 (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceManagementValue(
        ExecutionModel::ResourceManager *this,
        int a2,
        int a3,
        unsigned __int64 *a4)
{
  ExecutionModel::ResourceManager *v4; // rbp
  int ProcessMemoryCaps; // r15d
  __int64 ProcessResourceSet; // rax
  bool v10; // bl
  __int64 v11; // rdi
  __int64 v12; // rbx
  void **v13; // rax
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  bool v20; // zf
  unsigned __int64 v21; // rax
  void *Block; // [rsp+50h] [rbp+8h] BYREF

  Block = this;
  v4 = g_pResourceManager;
  ProcessMemoryCaps = 0;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(*((_QWORD *)g_pResourceManager + 28), a2);
  if ( ProcessResourceSet )
  {
    Block = 0LL;
    v11 = ProcessResourceSet + 1368;
    v12 = *(_QWORD *)(ProcessResourceSet + 1368);
    v13 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    (*(void (__fastcall **)(__int64, void **))(v12 + 48))(v11, v13);
    v10 = *((_DWORD *)Block + 88) == 1;
    operator delete(Block);
  }
  else
  {
    v10 = 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v14 = a3 - 1;
  if ( !v14 )
  {
    if ( v10 )
      v21 = *((_QWORD *)v4 + 8);
    else
      v21 = *((_QWORD *)v4 + 9);
    goto LABEL_26;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( v10 )
      v21 = *((_QWORD *)v4 + 6);
    else
      v21 = *((_QWORD *)v4 + 7);
    goto LABEL_26;
  }
  v16 = v15 - 1;
  if ( !v16 || (v17 = v16 - 1) == 0 )
  {
    v21 = *((unsigned int *)v4 + 26);
    goto LABEL_26;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = (unsigned int)(3 * *((_DWORD *)v4 + 26));
LABEL_26:
    *a4 = v21;
    goto LABEL_27;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 2 )
    {
      ProcessMemoryCaps = -2147024809;
      goto LABEL_27;
    }
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(v4, a2, a4, 0LL);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v20 = *a4 == 0;
  }
  else
  {
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(v4, a2, 0LL, a4);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v20 = a4 == 0LL;
  }
  if ( v20 )
    ProcessMemoryCaps = 1;
LABEL_27:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)ProcessMemoryCaps;
}
