/*
 * XREFs of NtUserShowSystemCursor @ 0x1C021B0F0
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GreInternalHidePointer @ 0x1C010A9B0 (GreInternalHidePointer.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  HDEV HDEV; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL, v2) )
  {
    LOBYTE(v3) = a1 == 0;
    HDEV = (HDEV)UserGetHDEV();
    v3 = GreInternalHidePointer(HDEV, v3, 0);
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
