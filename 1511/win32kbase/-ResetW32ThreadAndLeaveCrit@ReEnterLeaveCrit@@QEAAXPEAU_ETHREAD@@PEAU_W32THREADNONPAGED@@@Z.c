/*
 * XREFs of ?ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z @ 0x1C00A93DC
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0044720 (UserDeleteW32Thread.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall ReEnterLeaveCrit::ResetW32ThreadAndLeaveCrit(
        ReEnterLeaveCrit *this,
        struct _ETHREAD *a2,
        struct _W32THREADNONPAGED *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !*(_DWORD *)this )
    EtwTraceReleaseUserCrit((__int64)this);
  PsSetThreadWin32Thread(a2, 0LL, a3);
  if ( !*(_DWORD *)this )
    UserSessionSwitchLeaveCrit(v7, v6);
  *(_DWORD *)this = 1;
}
