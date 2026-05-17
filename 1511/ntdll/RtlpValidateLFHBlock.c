/*
 * XREFs of RtlpValidateLFHBlock @ 0x1800951F4
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
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
