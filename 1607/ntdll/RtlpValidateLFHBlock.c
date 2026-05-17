/*
 * XREFs of RtlpValidateLFHBlock @ 0x18009117C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlpValidateLFHBlock(int a1, unsigned __int64 a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(a2 - ((a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
  return v2 == **(_QWORD **)(v2 + 8);
}
