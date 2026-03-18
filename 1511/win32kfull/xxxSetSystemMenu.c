/*
 * XREFs of xxxSetSystemMenu @ 0x1C01431F8
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0143130 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     LockWndMenu @ 0x1C00CBF10 (LockWndMenu.c)
 *     MNPositionSysMenu @ 0x1C0143254 (MNPositionSysMenu.c)
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
    UserSetLastError(1437);
    return 0LL;
  }
}
