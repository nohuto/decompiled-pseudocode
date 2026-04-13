/*
 * XREFs of memcmp @ 0x1800266A2
 * Callers:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
