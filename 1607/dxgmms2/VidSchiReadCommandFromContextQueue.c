/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x1C0024A48
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0023E58 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000D4D0 (VidSchiSetNextRunPacket.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(v4 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1856), &LockHandle);
  *a3 = *(_BYTE *)(a1 + 176) & 1;
  v9 = *(_QWORD *)(a1 + 648);
  if ( v9 )
  {
    --*(_DWORD *)(a1 + 780);
    --*(_DWORD *)(v4 + 2752);
    --*(_DWORD *)(v8 + 936);
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 == a1 + 664 )
    {
      *(_QWORD *)(a1 + 648) = 0LL;
      *(_DWORD *)(a1 + 644) &= 0xFFFFFFF0;
      VidSchiUpdateContextStatus(a1, (_QWORD *)1, 15527LL, a4);
    }
    else
    {
      VidSchiSetNextRunPacket(a1, v10 - 32);
    }
    VidSchiProfilePerformanceTick(5LL, v8, 0LL, v11, 0LL, v9, 0LL, 0LL);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
