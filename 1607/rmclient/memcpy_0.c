/*
 * XREFs of memcpy_0 @ 0x1800066E0
 * Callers:
 *     RmpClientWnfAddMessage @ 0x18000D134 (RmpClientWnfAddMessage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
