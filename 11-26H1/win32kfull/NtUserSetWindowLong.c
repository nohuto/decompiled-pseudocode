/*
 * XREFs of NtUserSetWindowLong @ 0x140085B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSetWindowLong @ 0x140085C90 (xxxSetWindowLong.c)
 *     DesktopVerifyHeapRange @ 0x1401C1A98 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v11; // rcx
  ULONG_PTR *v12; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v4 + 448);
    *(_QWORD *)(v4 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v5;
    HMLockObject(v5);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        v8 = 0;
        UserSetLastError(87);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        goto LABEL_7;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v7 + 3), *((_QWORD *)v7 + 5), 344LL);
    }
    v8 = xxxSetWindowLong(v7, 1);
    CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v9);
    if ( CurrentThreadWin32Thread )
      v11 = *CurrentThreadWin32Thread;
    else
      v11 = 0LL;
    v12 = *(ULONG_PTR **)(v11 + 448);
    if ( v12 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v11, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v11 + 448) = *v12;
    HMUnlockObject(v12[1]);
  }
  else
  {
    v8 = 0;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
