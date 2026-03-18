/*
 * XREFs of NtUserMagControl @ 0x1C021D400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MagControl @ 0x1C01FD884 (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // eax

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v5 = -1073741811;
LABEL_5:
      v4 = 0;
      v9 = RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v5 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
