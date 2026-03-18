/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C005D43C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, __int64 a2)
{
  int v3; // edi
  struct tagCURSOR *v4; // rcx
  __int64 v6; // rax

  v3 = a2;
  v4 = *a1;
  if ( !v4 )
    return 1LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoSecure(v4, a2);
  if ( v6 || !v3 )
  {
    *a1 = 0LL;
    HMAssignmentLock(a1, v6);
    return 1LL;
  }
  UserSetLastError(87LL);
  return 0LL;
}
