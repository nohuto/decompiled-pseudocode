/*
 * XREFs of EtwpAllocatePmcData @ 0x1406A4088
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1406A456C (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1406A4680 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140085F34 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  *(_QWORD *)(a1 + 848) = v4;
  return result;
}
