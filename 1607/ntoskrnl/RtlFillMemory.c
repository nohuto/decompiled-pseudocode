/*
 * XREFs of RtlFillMemory @ 0x140214EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
