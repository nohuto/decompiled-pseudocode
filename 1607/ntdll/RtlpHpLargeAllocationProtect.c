/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x1800FBF38
 * Callers:
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
