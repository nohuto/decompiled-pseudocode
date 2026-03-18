/*
 * XREFs of HvpViewMapReleaseLockExclusive @ 0x1401AAFD0
 * Callers:
 *     HvViewMapPinFile @ 0x1401AAC18 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401AAC50 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x1405EB02C (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1405EB3DC (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall HvpViewMapReleaseLockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
