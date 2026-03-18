/*
 * XREFs of xxxSetMenu @ 0x1C01434F4
 * Callers:
 *     NtUserSetMenu @ 0x1C01433E0 (NtUserSetMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     LockWndMenu @ 0x1C00CBF10 (LockWndMenu.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, __int64 a2, int a3)
{
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
  {
    UserSetLastError(1436);
    return 0LL;
  }
  else
  {
    LockWndMenu((__int64)a1, (_QWORD *)a1 + 24, a2);
    if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
    {
      if ( a3 )
        xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
    }
    return 1LL;
  }
}
