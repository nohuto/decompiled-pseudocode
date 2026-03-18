/*
 * XREFs of NtUserSetWindowLongPtr @ 0x140085090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x140085220 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     DesktopVerifyHeapRange @ 0x1401C1A98 (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v15; // rcx
  ULONG_PTR *v16; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = (struct tagWND *)v9;
  if ( v9 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v8 + 448);
    *(_QWORD *)(v8 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v9;
    HMLockObject(v9);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        v12 = 0LL;
        UserSetLastError(87);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        goto LABEL_7;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v11 + 3), *((_QWORD *)v11 + 5), 344LL);
    }
    v12 = xxxSetWindowLongPtr(v11, a2, a3, a4, 1);
    CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v13);
    if ( CurrentThreadWin32Thread )
      v15 = *CurrentThreadWin32Thread;
    else
      v15 = 0LL;
    v16 = *(ULONG_PTR **)(v15 + 448);
    if ( v16 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v15, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v15 + 448) = *v16;
    HMUnlockObject(v16[1]);
  }
  else
  {
    v12 = 0LL;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
