/*
 * XREFs of NtUserRegisterForTooltipDismissNotification @ 0x1402BA2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1402F0C74 (-InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 *     ?RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1402F0D04 (-RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterForTooltipDismissNotification(TooltipDismiss *this, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  bool inserted; // al
  __int64 v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v4 = 0LL;
  v6 = ValidateHwnd(this);
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v8;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL) != CurrentProcessWin32Process )
    {
      UserSetLastError(5);
      goto LABEL_12;
    }
    if ( a2 == 1 )
    {
      inserted = TooltipDismiss::InsertTooltipRegistration(this, (HWND)v8);
    }
    else
    {
      if ( a2 != 2 )
      {
LABEL_11:
        v4 = (unsigned __int8)v4;
        goto LABEL_12;
      }
      inserted = TooltipDismiss::RemoveTooltipRegistrationIfHwndInList(this, (HWND)v8);
    }
    LOBYTE(v4) = inserted;
    goto LABEL_11;
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
