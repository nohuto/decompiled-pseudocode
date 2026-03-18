/*
 * XREFs of _errno_0 @ 0x1800BEBE6
 * Callers:
 *     _recalloc @ 0x1800BE9B0 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int *__cdecl errno_0()
{
  return _errno();
}
