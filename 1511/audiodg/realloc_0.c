/*
 * XREFs of realloc_0 @ 0x14001970A
 * Callers:
 *     _recalloc @ 0x140018FD0 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
