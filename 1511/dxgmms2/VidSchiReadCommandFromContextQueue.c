/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x1C00211F4
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0020D60 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000E548 (VidSchiSetNextRunPacket.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(v3 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1824), &LockHandle);
  *a3 = *(_BYTE *)(a1 + 176) & 1;
  v8 = *(_QWORD *)(a1 + 648);
  if ( v8 )
  {
    --*(_DWORD *)(a1 + 756);
    --*(_DWORD *)(v3 + 2712);
    --*(_DWORD *)(v7 + 900);
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 == a1 + 664 )
    {
      *(_QWORD *)(a1 + 648) = 0LL;
      *(_DWORD *)(a1 + 644) &= 0xFFFFFFF0;
      VidSchiUpdateContextStatus(a1, (_QWORD *)1, (__int64 *)0x382A);
    }
    else
    {
      VidSchiSetNextRunPacket(a1, v9 - 32);
    }
    VidSchiProfilePerformanceTick(5LL, v7, 0LL, v10, 0LL, v8, 0LL, 0LL);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
