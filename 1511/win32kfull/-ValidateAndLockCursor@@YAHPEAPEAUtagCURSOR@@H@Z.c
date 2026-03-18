/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C011CC68
 * Callers:
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, int a2)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax

  v4 = (unsigned __int64)*a1;
  if ( !v4 )
    return 1LL;
  v6 = HMValidateHandleNoSecure(v4, 3);
  if ( v6 || !a2 )
  {
    *a1 = 0LL;
    HMAssignmentLock(a1, v6);
    return 1LL;
  }
  UserSetLastError(87);
  return 0LL;
}
