/*
 * XREFs of MiPersistMemory @ 0x140230CF4
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 * Callees:
 *     <none>
 */

void __fastcall MiPersistMemory(PVOID BaseAddress, __int64 Length)
{
  if ( (KeFeatureBits & 0x3000000000LL) == 0x3000000000LL )
    KePersistMemory((__int64)BaseAddress, Length);
  else
    KeInvalidateRangeAllCaches(BaseAddress, Length);
}
