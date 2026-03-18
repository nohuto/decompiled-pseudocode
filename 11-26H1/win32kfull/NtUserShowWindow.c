/*
 * XREFs of NtUserShowWindow @ 0x140012470
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // ebx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v14; // rcx
  ULONG_PTR *v15; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 40), v8 = *(_WORD *)(v6 + 42) & 0x2FFF, v8 == 671) || v8 == 669 )
  {
    v12 = 0;
  }
  else
  {
    BugCheckParameter3[0] = *(_QWORD *)(v4 + 448);
    *(_QWORD *)(v4 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v7;
    HMLockObject(v7);
    if ( a2 > 0xB || *(char *)(*(_QWORD *)(v7 + 40) + 20LL) < 0 )
    {
      UserSetLastError(87LL);
      v12 = 0;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      v12 = xxxShowWindowEx(
              v7,
              a2 | *(_DWORD *)(UserSessionState + 66792) & 0x10000,
              a2 & 0x10000 | *(_DWORD *)(UserSessionState + 66792) & 0x10000);
      CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        v14 = *CurrentThreadWin32Thread;
      else
        v14 = 0LL;
      v15 = *(ULONG_PTR **)(v14 + 448);
      if ( v15 != BugCheckParameter3 )
        KeBugCheckEx(0x164u, 0x3BuLL, v14, (ULONG_PTR)BugCheckParameter3, 0LL);
      *(_QWORD *)(v14 + 448) = *v15;
      HMUnlockObject(v15[1]);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
