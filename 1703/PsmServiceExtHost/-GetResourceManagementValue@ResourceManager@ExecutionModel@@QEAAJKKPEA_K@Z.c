/*
 * XREFs of ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002B408
 * Callers:
 *     RmgrSrv_SHGetResourceManagementValue @ 0x180029840 (RmgrSrv_SHGetResourceManagementValue.c)
 * Callees:
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800102CC (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180018D40 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18002B37C (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceManagementValue(
        ExecutionModel::ResourceManager *this,
        int a2,
        int a3,
        unsigned __int64 *a4)
{
  ExecutionModel::ResourceManager *v4; // rbp
  int ProcessMemoryCaps; // r14d
  ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  BOOL v10; // r15d
  int v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  bool v18; // zf
  unsigned __int64 v19; // rax
  void *Block; // [rsp+50h] [rbp+8h] BYREF

  Block = this;
  v4 = g_pResourceManager;
  ProcessMemoryCaps = 0;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(
                         *((struct _RM_SERVICE_GLOBALS **)g_pResourceManager + 26),
                         a2);
  if ( ProcessResourceSet )
  {
    Block = 0LL;
    ExecutionModel::ResourceSet::GetResourceSetInfo(
      ProcessResourceSet,
      (struct ExecutionModel::_ResourceSetInfo **)&Block);
    v11 = *((_DWORD *)Block + 88);
    operator delete(Block);
    v10 = v11 == 1;
  }
  else
  {
    v10 = 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = a3 - 1;
  if ( !v12 )
  {
    if ( v10 )
      v19 = *((_QWORD *)v4 + 6);
    else
      v19 = *((_QWORD *)v4 + 7);
    goto LABEL_26;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( v10 )
      v19 = *((_QWORD *)v4 + 4);
    else
      v19 = *((_QWORD *)v4 + 5);
    goto LABEL_26;
  }
  v14 = v13 - 1;
  if ( !v14 || (v15 = v14 - 1) == 0 )
  {
    v19 = *((unsigned int *)v4 + 22);
    goto LABEL_26;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v19 = (unsigned int)(3 * *((_DWORD *)v4 + 22));
LABEL_26:
    *a4 = v19;
    goto LABEL_27;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 != 2 )
    {
      ProcessMemoryCaps = -2147024809;
      goto LABEL_27;
    }
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(
                          (struct _RM_SERVICE_GLOBALS **)v4,
                          a2,
                          a4,
                          0LL);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v18 = *a4 == 0;
  }
  else
  {
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(
                          (struct _RM_SERVICE_GLOBALS **)v4,
                          a2,
                          0LL,
                          a4);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_27;
    v18 = a4 == 0LL;
  }
  if ( v18 )
    ProcessMemoryCaps = 1;
LABEL_27:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)ProcessMemoryCaps;
}
