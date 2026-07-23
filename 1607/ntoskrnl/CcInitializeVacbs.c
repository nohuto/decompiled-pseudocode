/*
 * XREFs of CcInitializeVacbs @ 0x1407B499C
 * Callers:
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 * Callees:
 *     CcAllocateInitializeVacbArray @ 0x1401369F0 (CcAllocateInitializeVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x140148130 (CcBuildUpHighPriorityMappings.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcInitializeVacbs()
{
  PVOID PoolWithTag; // rax
  char *InitializeVacbArray; // rax
  char *v2; // rbx

  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2800uLL, 0x61566343u);
  CcVacbArrays = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x34u, 0x90418uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x2800uLL);
  CcMinimumFreeHighPriorityVacbs = 64;
  qword_140322F28 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  qword_140322F38 = (__int64)&CcVacbFreeHighPriorityList;
  CcVacbFreeHighPriorityList = (__int64)&CcVacbFreeHighPriorityList;
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v2 = InitializeVacbArray;
  if ( !InitializeVacbArray )
    KeBugCheckEx(0x34u, 0x90431uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  *((_DWORD *)InitializeVacbArray + 1) = 1;
  CcBuildUpHighPriorityMappings((__int64)InitializeVacbArray);
  return CcInsertVacbArray(v2);
}
