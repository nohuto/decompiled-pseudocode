/*
 * XREFs of RtlpValidateLFHBlock @ 0x1800F0B70
 * Callers:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
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
