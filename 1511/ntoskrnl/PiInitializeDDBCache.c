/*
 * XREFs of PiInitializeDDBCache @ 0x140755DA8
 * Callers:
 *     PpInitializeBootDDB @ 0x140756EE4 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400909E4 (RtlInitializeGenericTableAvl.c)
 */

__int64 PiInitializeDDBCache()
{
  RtlInitializeGenericTableAvl(
    &PiDDBCacheTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiCompareDDBCacheEntries,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  qword_1406FBFE8 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = &PiDDBCacheList;
  return 0LL;
}
