/*
 * XREFs of IoDiskIoAttributionQuery @ 0x1400B404C
 * Callers:
 *     IoGetIoRateControl @ 0x1400B3E00 (IoGetIoRateControl.c)
 *     IopIoRateStartRateControl @ 0x1400B4B80 (IopIoRateStartRateControl.c)
 *     PspQueryJobIoAttribution @ 0x1404D3AA0 (PspQueryJobIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall IoDiskIoAttributionQuery(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v6 = *(_OWORD *)(a1 + 96);
  *a2 = *(_OWORD *)(a1 + 80);
  v7 = *(_OWORD *)(a1 + 112);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 128);
  *a3 = v7;
  a3[1] = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
