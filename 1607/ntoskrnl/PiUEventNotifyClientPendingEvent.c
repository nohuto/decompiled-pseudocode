/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x1403F0858
 * Callers:
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14048CB44 (PiUEventHandleGetEvent.c)
 * Callees:
 *     PiUEventEstimateRequiredClientBufferSize @ 0x140007E3C (PiUEventEstimateRequiredClientBufferSize.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  v5 = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v5, 4LL);
}
