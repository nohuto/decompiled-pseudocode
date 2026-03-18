/*
 * XREFs of PiDqQueryUnlock @ 0x14045E710
 * Callers:
 *     PiDqIrpCancel @ 0x1401BFF8C (PiDqIrpCancel.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryGetResult @ 0x14045DAA4 (PiDqIrpQueryGetResult.c)
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14045DEAC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14045EA20 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PiDqQueryUnlock(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rcx

  v1 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v2 - 16;
  else
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
