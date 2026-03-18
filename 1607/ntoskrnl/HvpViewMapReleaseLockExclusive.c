/*
 * XREFs of HvpViewMapReleaseLockExclusive @ 0x1401B6ABC
 * Callers:
 *     HvViewMapPinFile @ 0x1401B6704 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401B673C (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x14060FAD0 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x14060FC6C (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FE80 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall HvpViewMapReleaseLockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
