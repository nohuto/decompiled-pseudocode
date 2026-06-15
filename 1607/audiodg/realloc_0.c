/*
 * XREFs of realloc_0 @ 0x140018C2A
 * Callers:
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
