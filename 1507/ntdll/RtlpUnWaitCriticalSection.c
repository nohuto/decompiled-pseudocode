/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x180036780
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWakeByAddress @ 0x1800367EC (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180073144 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
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
