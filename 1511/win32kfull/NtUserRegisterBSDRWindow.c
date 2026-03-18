/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C01122F0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C01017AC (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v4; // ebx
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
      goto LABEL_15;
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
    UserSetLastError(5);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
