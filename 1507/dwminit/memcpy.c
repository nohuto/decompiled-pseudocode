/*
 * XREFs of memcpy @ 0x1800075FA
 * Callers:
 *     sub_180005050 @ 0x180005050 (sub_180005050.c)
 *     sub_1800051B0 @ 0x1800051B0 (sub_1800051B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
