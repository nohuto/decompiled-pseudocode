/*
 * XREFs of memcpy_0 @ 0x180027964
 * Callers:
 *     memcpy_s @ 0x1800012A8 (memcpy_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
