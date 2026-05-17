/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x1800C22F4
 * Callers:
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSectionEx(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == -1 )
  {
    _InterlockedOr(v3, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent();
    if ( (int)result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
