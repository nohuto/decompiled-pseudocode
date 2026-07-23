/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800301D0
 * Callers:
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18003023C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007F950 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

int __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  void *DeferredCriticalSectionEvent; // rax
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(void **)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (void *)-1LL )
  {
    _InterlockedOr(v4, 0);
    RtlpWakeByAddress(a1 + 8, 0LL);
    result = 0;
  }
  else
  {
    result = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
  }
  if ( result < 0 )
    RtlRaiseStatus(result);
  return result;
}
