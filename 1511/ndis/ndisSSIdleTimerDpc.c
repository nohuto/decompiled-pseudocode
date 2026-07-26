/*
 * XREFs of ndisSSIdleTimerDpc @ 0x1C00674E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisSSIdleTimerDpc(
        PVOID SystemSpecific1,
        _QWORD *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v4; // rbx

  v4 = FunctionContext[564];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4);
  if ( !*(_QWORD *)(v4 + 484)
    && !*(_DWORD *)(v4 + 492)
    && !*(_DWORD *)(v4 + 504)
    && !*(_DWORD *)(v4 + 508)
    && !*(_DWORD *)(v4 + 496)
    && !*(_DWORD *)(v4 + 500)
    && !*(_DWORD *)(v4 + 552)
    && ++*(_DWORD *)(v4 + 144) > 3u
    && (*(_DWORD *)(v4 + 480) & 2) == 0
    && ndisReferenceMiniport((__int64)FunctionContext) )
  {
    *(_DWORD *)(v4 + 480) |= 2u;
    KeClearEvent((PRKEVENT)(v4 + 152));
    ndisScheduleWorkItemInternal(v4 + 272);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
}
