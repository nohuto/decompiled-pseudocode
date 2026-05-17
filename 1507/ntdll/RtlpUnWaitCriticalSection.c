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
