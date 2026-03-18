/*
 * XREFs of MiPersistMemory @ 0x1401EDA3C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1401ED6C8 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     <none>
 */

void __fastcall MiPersistMemory(PVOID BaseAddress, __int64 Length)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)BaseAddress, Length);
  else
    KeInvalidateRangeAllCaches(BaseAddress, Length);
}
