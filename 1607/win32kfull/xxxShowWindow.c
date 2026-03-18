/*
 * XREFs of xxxShowWindow @ 0x1C0224DE0
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, int a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
