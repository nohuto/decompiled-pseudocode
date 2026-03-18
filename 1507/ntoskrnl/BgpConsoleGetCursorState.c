/*
 * XREFs of BgpConsoleGetCursorState @ 0x1407619B0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  BgpFwAcquireLock();
  *a1 = dword_140318904;
  *a2 = dword_140318908;
  *a3 = dword_14031890C;
  BgpFwReleaseLock();
  return 0LL;
}
