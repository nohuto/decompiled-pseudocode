/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x1800F04C8
 * Callers:
 *     RtlpHpProtectHeap @ 0x1800F123C (RtlpHpProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
