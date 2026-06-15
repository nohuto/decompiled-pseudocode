/*
 * XREFs of realloc_0 @ 0x1800439E8
 * Callers:
 *     _recalloc @ 0x180043990 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
