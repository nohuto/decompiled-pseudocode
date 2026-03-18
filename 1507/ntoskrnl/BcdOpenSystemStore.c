/*
 * XREFs of BcdOpenSystemStore @ 0x14056DC50
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
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
