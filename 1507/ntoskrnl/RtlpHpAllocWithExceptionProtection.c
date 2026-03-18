/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140246B44
 * Callers:
 *     RtlAllocateHeap @ 0x14010A1D0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14010A1EC (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140248508 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  return RtlpAllocateHeapInternal(a1, a2, a3);
}
