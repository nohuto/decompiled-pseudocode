/*
 * XREFs of xxxSetSystemMenu @ 0x1C01182F8
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0118230 (NtUserSetSystemMenu.c)
 * Callees:
 *     LockWndMenu @ 0x1C004F214 (LockWndMenu.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     MNPositionSysMenu @ 0x1C0118354 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi

  if ( (*(_BYTE *)(a1 + 54) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 184);
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
