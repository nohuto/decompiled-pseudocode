/*
 * XREFs of RtlFillMemory @ 0x140214D1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
