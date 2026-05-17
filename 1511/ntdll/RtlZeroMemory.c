/*
 * XREFs of RtlZeroMemory @ 0x1800A9470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlZeroMemory(void *a1, size_t a2)
{
  return memset(a1, 0, a2);
}
