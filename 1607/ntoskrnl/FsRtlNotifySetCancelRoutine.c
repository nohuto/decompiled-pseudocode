/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x140076F7C
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404AA788 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  KIRQL *v2; // r14
  char v5; // si
  __int64 v7; // rbx
  KIRQL v8; // dl

  v2 = (KIRQL *)(a1 + 69);
  v5 = 0;
  IoAcquireCancelSpinLock((PKIRQL)(a1 + 69));
  if ( a2 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v8 = *v2;
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v8);
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *v2);
  }
  return v5;
}
