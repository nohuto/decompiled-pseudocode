/*
 * XREFs of xxxSetSystemMenu @ 0x1C0234264
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C021A6C0 (NtUserSetSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     LockWndMenu @ 0x1C00BB48C (LockWndMenu.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, __int64 a2)
{
  struct tagMENU *v4; // rsi

  if ( (*(_BYTE *)(a1 + 54) & 8) != 0 )
  {
    v4 = *(struct tagMENU **)(a1 + 184);
    if ( LockWndMenu(a1, (_QWORD *)(a1 + 184), a2) )
      DestroyMenu(v4);
    MNPositionSysMenu(a1, a2);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL);
    return 0LL;
  }
}
