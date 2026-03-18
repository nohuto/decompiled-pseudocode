/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140211F2C
 * Callers:
 *     RtlAllocateHeap @ 0x140093F90 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x140093FB8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x140211F14 (RtlpHeapFatalExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
