/*
 * XREFs of NtUserMagControl @ 0x1C0217000
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     MagControl @ 0x1C01F4EB4 (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // eax

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v8 = -1073741811;
LABEL_5:
      v4 = 0;
      v12 = RtlNtStatusToDosError(v8);
      UserSetLastError(v12);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v8 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v8 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
