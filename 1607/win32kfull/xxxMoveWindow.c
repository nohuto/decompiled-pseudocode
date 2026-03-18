/*
 * XREFs of xxxMoveWindow @ 0x1C00A7894
 * Callers:
 *     NtUserMoveWindow @ 0x1C00A7900 (NtUserMoveWindow.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxValidateRect @ 0x1C01267E0 (xxxValidateRect.c)
 */

__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v11; // edi

  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1)
    || (*((_BYTE *)a1 + 45) & 1) != 0
    || *((_QWORD *)a1 + 11) != GetDesktopWindow((__int64)a1) )
  {
    return xxxSetWindowPosAndBand(a1, 0, v7, v8, v9, a5, a6 != 0 ? 20 : 28, 0);
  }
  v11 = xxxSetWindowPosAndBand(a1, 0, v7, v8, v9, a5, 20, 0);
  if ( !a6 )
    xxxValidateRect(a1, 0LL);
  return v11;
}
