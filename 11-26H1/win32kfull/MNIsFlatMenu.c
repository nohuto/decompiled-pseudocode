/*
 * XREFs of MNIsFlatMenu @ 0x14000B3F8
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MNIsFlatMenu(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66796) & 0x80020000) == -2147352576;
}
