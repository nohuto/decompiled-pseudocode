/*
 * XREFs of ?bValid@XDCOBJ@@QEAAHXZ @ 0x1C00319E4
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bValid(XDCOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
