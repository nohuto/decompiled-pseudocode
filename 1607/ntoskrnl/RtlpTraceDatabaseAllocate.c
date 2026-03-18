/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x140215EC8
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x140215B84 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140215EE0 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(SIZE_T a1, char a2, ULONG a3)
{
  bool v3; // zf
  POOL_TYPE v5; // ecx

  v3 = (a2 & 4) == 0;
  v5 = NonPagedPoolNx;
  if ( v3 )
    v5 = PagedPool;
  return ExAllocatePoolWithTag(v5, a1, a3);
}
