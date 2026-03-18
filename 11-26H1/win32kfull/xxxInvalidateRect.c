/*
 * XREFs of xxxInvalidateRect @ 0x14002C804
 * Callers:
 *     NtUserInvalidateRect @ 0x1402B75F0 (NtUserInvalidateRect.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1402F9954 (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(__int64 a1, __int64 a2, int a3)
{
  return xxxRedrawWindow(a1, a2, 0LL, a3 != 0 ? 5 : 1);
}
