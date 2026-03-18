/*
 * XREFs of PiInitializeDDBCache @ 0x1407E8E4C
 * Callers:
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 */

__int64 PiInitializeDDBCache()
{
  RtlInitializeGenericTableAvl(
    &PiDDBCacheTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiCompareDDBCacheEntries,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  qword_14077F000 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = &PiDDBCacheList;
  return 0LL;
}
