/*
 * XREFs of realloc_0 @ 0x18002485A
 * Callers:
 *     _recalloc @ 0x180024480 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
