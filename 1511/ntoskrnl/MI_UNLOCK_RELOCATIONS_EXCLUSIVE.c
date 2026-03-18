/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E30
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14062B9EC (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 24);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
