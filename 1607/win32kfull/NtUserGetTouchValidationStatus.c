/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C0215140
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01D6FA8 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandle(a1, v4, v5, v6)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL);
    UserSetLastError(0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return TouchValidationStatus;
}
