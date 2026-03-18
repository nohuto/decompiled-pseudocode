/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C000EB40
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIncrementContextReference @ 0x1C00101E0 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1824), &LockHandle);
  if ( *(_DWORD *)(a1 + 2720) && !*(_DWORD *)(a1 + 2728) )
  {
    v5 = *(_QWORD *)(a1 + 88);
    if ( v5 == *(_QWORD *)(a1 + 128) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1512) + 1520);
      *(_QWORD *)(a1 + 192) = v7;
      VidSchiIncrementContextReference(v7);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, v8, v7, 0LL, 0LL, -18LL);
    }
    else if ( v5 == *(_QWORD *)(a1 + 136) )
    {
      v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1512) + 1520);
      if ( v6 )
        VidSchiUpdateLastCompletedPresentTimestamp(v6, 0, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
