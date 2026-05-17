/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x1800F2418
 * Callers:
 *     RtlpHpProtectHeap @ 0x1800F2860 (RtlpHpProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
