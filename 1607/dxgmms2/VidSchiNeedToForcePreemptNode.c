/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C0001114
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // r9d
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1856), &LockHandle);
  if ( *(_DWORD *)(a1 + 2760) && !*(_DWORD *)(a1 + 2768) )
  {
    v6 = *(_QWORD *)(a1 + 96);
    if ( v6 == *(_QWORD *)(a1 + 136) )
    {
      v8 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      *(_QWORD *)(a1 + 232) = v8;
      VidSchiIncrementContextReference(v8);
      v3 = 1;
      VidSchiProfilePerformanceTick(1, v1, a1, v9, v8, 0LL, 0LL, -18LL);
    }
    else if ( v6 == *(_QWORD *)(a1 + 144) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      if ( v7 )
      {
        LOBYTE(v4) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v7, 0LL, v4);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
