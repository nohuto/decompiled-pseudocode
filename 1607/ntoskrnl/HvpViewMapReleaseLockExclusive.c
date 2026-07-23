/*
 * XREFs of HvpViewMapReleaseLockExclusive @ 0x1401B69A0
 * Callers:
 *     HvViewMapPinFile @ 0x1401B65E8 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401B6620 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x14060FB84 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FF34 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
