/*
 * XREFs of UserResetPointer @ 0x1400F71C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x1400F7204 (-ResetCursorPointerInternal@@YAXXZ.c)
 */

void __fastcall UserResetPointer(__int64 a1)
{
  __int64 v1; // rcx

  if ( (unsigned int)GET_USERCRIT_DISPOSITION(a1) )
  {
    ResetCursorPointerInternal();
  }
  else
  {
    EnterSharedCrit(0LL, 1LL);
    ResetCursorPointerInternal();
    UserSessionSwitchLeaveCrit(v1);
  }
}
