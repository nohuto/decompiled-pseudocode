/*
 * XREFs of _errno_0 @ 0x180043CDE
 * Callers:
 *     _recalloc @ 0x180043990 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int *__cdecl errno_0()
{
  return _errno();
}
