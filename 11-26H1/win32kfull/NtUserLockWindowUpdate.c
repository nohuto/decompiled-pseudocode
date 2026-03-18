/*
 * XREFs of NtUserLockWindowUpdate @ 0x140279BF0
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  tagTHREADINFO *v2; // rsi
  __int64 v3; // rdi
  unsigned int TID; // r14d
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v10; // rax
  _QWORD *StyleWindow; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct tagWND *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  v2 = (tagTHREADINFO *)EnterCrit(0LL, 0LL);
  v3 = *(_QWORD *)(*((_QWORD *)v2 + 57) + 1208LL);
  TID = tagTHREADINFO::GetTID(v2);
  v5 = 0LL;
  v6 = *(_DWORD *)(v3 + 63456);
  if ( v6 && v6 != TID )
  {
    v7 = 1440;
LABEL_4:
    UserSetLastError(v7);
    UserSessionSwitchLeaveCrit(v8);
    return 0LL;
  }
  if ( a1 )
  {
    v10 = ValidateHwndStrict(a1);
    if ( !v10 || (StyleWindow = (_QWORD *)GetStyleWindow(v10, 2848)) == 0LL )
    {
      v7 = 6;
      goto LABEL_4;
    }
    *(_QWORD *)(v3 + 63448) = *StyleWindow;
    *(_QWORD *)(v3 + 63440) = a1;
    *(_DWORD *)(v3 + 63456) = TID;
    *((_QWORD *)v2 + 170) |= 0x20000000000uLL;
    v5 = 1LL;
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)StyleWindow, 1, 0LL);
  }
  else
  {
    v13 = *(_QWORD *)(v3 + 63448);
    *(_QWORD *)(v3 + 63448) = 0LL;
    *(_QWORD *)(v3 + 63440) = 0LL;
    *(_DWORD *)(v3 + 63456) = 0;
    *((_QWORD *)v2 + 170) &= ~0x20000000000uLL;
    v15 = (struct tagWND *)ValidateHwndStrict(v13);
    if ( v15 )
    {
      v19[0] = 0;
      v20 = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v19, v14);
      UserSessionState = W32GetUserSessionState(v17, v16);
      v5 = 1LL;
      ++*(_DWORD *)(UserSessionState + 70592);
      zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v15, 1, 0LL);
      xxxInternalInvalidate(v15, (HRGN)1, 0x10485u);
      zzzEndDeferWinEventNotify();
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v5;
}
