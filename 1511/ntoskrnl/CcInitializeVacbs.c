/*
 * XREFs of CcInitializeVacbs @ 0x1407677BC
 * Callers:
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 * Callees:
 *     CcBuildUpHighPriorityMappings @ 0x14013789C (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x140137910 (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
  qword_1402FD8E8 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  qword_1402FD8F8 = (__int64)&CcVacbFreeHighPriorityList;
  CcVacbFreeHighPriorityList = (__int64)&CcVacbFreeHighPriorityList;
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v2 = InitializeVacbArray;
  if ( !InitializeVacbArray )
    KeBugCheckEx(0x34u, 0x90431uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  *((_DWORD *)InitializeVacbArray + 1) = 1;
  CcBuildUpHighPriorityMappings((__int64)InitializeVacbArray);
  return CcInsertVacbArray(v2);
}
