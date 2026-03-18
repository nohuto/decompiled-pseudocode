/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x14046E540
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned int UsedProcessorCount; // edi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    if ( v2 < UsedProcessorCount
      && UsedProcessorCount - v2 != (unsigned int)EtwpAllocateFreeBuffers(v3, UsedProcessorCount - v2) )
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
