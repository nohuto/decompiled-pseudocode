/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C021C020
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01E0C60 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandle(a1, 19)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return TouchValidationStatus;
}
