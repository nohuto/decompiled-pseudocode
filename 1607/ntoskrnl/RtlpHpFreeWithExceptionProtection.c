/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140211F74
 * Callers:
 *     RtlFreeHeap @ 0x1400934A4 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400934E8 (RtlpFreeHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x140211F14 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
