/*
 * XREFs of RtlFillMemory @ 0x1800960B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlFillMemory(void *a1, size_t a2, int a3)
{
  return memset(a1, a3, a2);
}
