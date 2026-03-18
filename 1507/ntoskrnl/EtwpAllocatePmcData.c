/*
 * XREFs of EtwpAllocatePmcData @ 0x1406E6804
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1406E6E30 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1406E6F40 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  SIZE_T v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx
  __int64 result; // rax

  v2 = 8 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 32;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x58777445u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v2);
  result = 0LL;
  *(_QWORD *)(a1 + 864) = v4;
  return result;
}
