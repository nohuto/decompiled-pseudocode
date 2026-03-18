/*
 * XREFs of RtlZeroMemory @ 0x14010F104
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
