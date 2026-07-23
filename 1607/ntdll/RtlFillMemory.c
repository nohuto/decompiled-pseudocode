/*
 * XREFs of RtlFillMemory @ 0x1800EE4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlFillMemory(void *a1, size_t a2, unsigned __int8 a3)
{
  return memset(a1, a3, a2);
}
