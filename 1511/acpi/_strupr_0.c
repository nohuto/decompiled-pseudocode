/*
 * XREFs of _strupr_0 @ 0x1C0024CA4
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C0018E60 (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C00433B8 (DebugExpr.c)
 *     DebugNotify @ 0x1C0043660 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
