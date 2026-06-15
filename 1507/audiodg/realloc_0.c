/*
 * XREFs of realloc_0 @ 0x1400197CA
 * Callers:
 *     _recalloc @ 0x140019090 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
