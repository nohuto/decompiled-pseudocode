/*
 * XREFs of BcdOpenSystemStore @ 0x14053BF2C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdOpenSystemStore(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  result = BiAcquireBcdSyncMutant(0LL);
  if ( (int)result >= 0 )
  {
    v3 = BiOpenSystemStore(a1);
    BiReleaseBcdSyncMutant(0LL);
    return v3;
  }
  return result;
}
