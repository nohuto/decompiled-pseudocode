/*
 * XREFs of CcInitializeVacbs @ 0x1407DB71C
 * Callers:
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 * Callees:
 *     CcBuildUpHighPriorityMappings @ 0x140166A18 (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x140166A8C (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 *CcInitializeVacbs()
{
  PVOID PoolWithTag; // rax
  char *InitializeVacbArray; // rax
  char *v2; // rbx

  CcDbgNumberOfFailedMappingsDueToVacbSpace = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  CcDbgNumberOfFailedHighPriorityMappings = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2800uLL, 0x61566343u);
  CcVacbArrays = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x34u, 0x90418uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x2800uLL);
  CcMinimumFreeHighPriorityVacbs = 64;
  qword_14034DD68 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  qword_14034DD78 = (__int64)&CcVacbFreeHighPriorityList;
  CcVacbFreeHighPriorityList = (__int64)&CcVacbFreeHighPriorityList;
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v2 = InitializeVacbArray;
  if ( !InitializeVacbArray )
    KeBugCheckEx(0x34u, 0x90431uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  *((_DWORD *)InitializeVacbArray + 1) = 1;
  CcBuildUpHighPriorityMappings((__int64)InitializeVacbArray);
  return CcInsertVacbArray(v2);
}
