/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140211D58
 * Callers:
 *     RtlAllocateHeap @ 0x140093790 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1400937B8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x140211D40 (RtlpHeapFatalExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
