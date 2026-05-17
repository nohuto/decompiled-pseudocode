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

__int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  __int64 DeferredCriticalSectionEvent; // rax
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(_QWORD *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == -1 )
  {
    _InterlockedOr(v4, 0);
    RtlpWakeByAddress(a1 + 8, 0LL);
    result = 0LL;
  }
  else
  {
    result = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
  }
  if ( (int)result < 0 )
    RtlRaiseStatus((unsigned int)result);
  return result;
}
