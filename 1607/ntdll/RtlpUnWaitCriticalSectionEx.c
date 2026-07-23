/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x1800D3D78
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

int __fastcall RtlpUnWaitCriticalSectionEx(__int64 a1, void *a2)
{
  int result; // eax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == (void *)-1LL )
  {
    _InterlockedOr(v3, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
