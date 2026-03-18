/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140246B80
 * Callers:
 *     RtlFreeHeap @ 0x140109854 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14010987C (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140248508 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
