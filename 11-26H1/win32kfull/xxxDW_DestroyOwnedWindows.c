/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x140011E90
 * Callers:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  struct tagWND *v2; // r14
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *i; // rbx
  void *v9; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct tagWND **)(*(_QWORD *)(a1 + 16) + 816LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      v5 = PtiCurrent();
      BugCheckParameter3[0] = *((_QWORD *)v5 + 56);
      *((_QWORD *)v5 + 56) = BugCheckParameter3;
      BugCheckParameter3[1] = v4;
      HMLockObject(v4);
LABEL_4:
      for ( i = *(struct tagWND **)(v4 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( *((_QWORD *)i + 15) == a1 )
        {
          if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904) & 4) == 0
            || (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 520LL), 0, 0) & 1) != 0
            || i != v2 )
          {
            if ( (*(_WORD *)(*((_QWORD *)i + 5) + 42LL) & 0x2FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(*((_QWORD *)i + 5) + 64LL) = 0LL;
              ((void (*)(void))HMAssignmentUnlock)();
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v9 = (void *)ReferenceDwmApiPort();
                DwmAsyncOwnerChange(v9);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(*((_QWORD *)i + 5) + 64LL) = 0LL;
          HMAssignmentUnlock((char *)i + 120);
        }
      }
      return Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
    }
  }
  return result;
}
