/*
 * XREFs of NtUserShowSystemCursor @ 0x1C0221170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     GreInternalHidePointer @ 0x1C00EBBF0 (GreInternalHidePointer.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  HDEV HDEV; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v2) = a1 == 0;
    HDEV = (HDEV)UserGetHDEV();
    v2 = GreInternalHidePointer(HDEV, v2, 0);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
