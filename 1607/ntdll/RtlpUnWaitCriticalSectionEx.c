/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
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
