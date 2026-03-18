/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C00035EC
 * Callers:
 *     VidSchFlushContext @ 0x1C002F270 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
