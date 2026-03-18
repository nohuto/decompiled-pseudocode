/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1401F7BA8
 * Callers:
 *     RtlFreeHeap @ 0x1400D33D4 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400D3418 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1401F94B4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
