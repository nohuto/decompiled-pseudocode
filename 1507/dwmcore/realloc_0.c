/*
 * XREFs of realloc_0 @ 0x1800992AA
 * Callers:
 *     _recalloc @ 0x180098F90 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
