/*
 * XREFs of BgpConsoleGetCursorState @ 0x1406DE934
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  BgpFwAcquireLock();
  *a1 = dword_1402C98A4;
  *a2 = dword_1402C98A8;
  *a3 = dword_1402C98AC;
  BgpFwReleaseLock();
  return 0LL;
}
