/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x140012290
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateShadowAlpha @ 0x140011CCC (zzzUpdateShadowAlpha.c)
 *     WindowHasShadow @ 0x140011E24 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct tagWND *v12; // rsi
  NTSTATUS v13; // eax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = (struct tagWND *)v9;
  if ( !v9 )
    goto LABEL_10;
  BugCheckParameter3[0] = *(_QWORD *)(v8 + 448);
  *(_QWORD *)(v8 + 448) = BugCheckParameter3;
  BugCheckParameter3[1] = v9;
  HMLockObject(v9);
  if ( (a4 & 0xFFFFFFFC) != 0
    || (unsigned int)IsWindowDesktopComposed(v12) && (*(_DWORD *)(*((_QWORD *)v12 + 5) + 232LL) & 2) != 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_12;
  }
  v13 = SetLayeredWindowAttributes(v12, a2, a3, a4);
  if ( v13 < 0 )
  {
    UserSetLastStatus(v13);
LABEL_12:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
    goto LABEL_10;
  }
  if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v12) )
    zzzUpdateShadowAlpha(v12);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  v11 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
