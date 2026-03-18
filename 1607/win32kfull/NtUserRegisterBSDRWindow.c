/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C0130780
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0111B6C (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0LL;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogonUI || !gpidLogonUI && (unsigned int)IsPrivileged(psTcb) )
  {
    if ( v7 )
      HMAssignmentLock(&gspwndBSDR, v7);
    if ( (_DWORD)v2 )
    {
      v6 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(_QWORD *)(gptiShutdownWaiter + 384LL),
          0x13u,
          0LL,
          0x329u,
          v2,
          0xFFFFFFFFLL,
          0LL);
    }
    v4 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
