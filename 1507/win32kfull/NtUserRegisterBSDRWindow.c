/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C0100C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     IsPrivileged @ 0x1C00F983C (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi

  v3.QuadPart = a2;
  EnterCrit(1LL);
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
    if ( v3.LowPart )
    {
      v6 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(_QWORD *)(gptiShutdownWaiter + 392LL),
          0x13u,
          0LL,
          0x329u,
          v3,
          (LARGE_INTEGER)0xFFFFFFFFLL,
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
