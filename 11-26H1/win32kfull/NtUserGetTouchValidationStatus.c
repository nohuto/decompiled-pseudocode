/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1402B4E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     _GetTouchValidationStatus @ 0x14025F7C0 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandleWithDescriptor(a1, 0x13u)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3, v4);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v5);
  return TouchValidationStatus;
}
