/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140211DA0
 * Callers:
 *     RtlFreeHeap @ 0x140092CA4 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x140092CE8 (RtlpFreeHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x140211D40 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
