/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x1404ED934
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(*(_DWORD *)(a1 + 4088) + 1), 0x76456D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = *(unsigned int *)(a1 + 4088);
  if ( (_DWORD)v5 )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 4096), 8 * v5);
    ExFreePoolWithTag(*(PVOID *)(a1 + 4096), 0);
  }
  v6 = *(unsigned int *)(a1 + 4088);
  *(_QWORD *)(a1 + 4096) = PoolWithTag;
  *((_QWORD *)PoolWithTag + v6) = a2;
  ++*(_DWORD *)(a1 + 4088);
  ObfReferenceObject(a2);
  return 0LL;
}
