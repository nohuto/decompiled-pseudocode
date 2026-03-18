/*
 * XREFs of NtUserShowSystemCursor @ 0x1C0221120
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GreInternalHidePointer @ 0x1C00E5A10 (GreInternalHidePointer.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  HDEV HDEV; // rax

  EnterCrit(1LL);
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
