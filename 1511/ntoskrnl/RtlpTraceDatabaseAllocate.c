/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1401FBC20
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1401FB8DC (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1401FBC38 (RtlpTraceDatabaseInternalAdd.c)
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
