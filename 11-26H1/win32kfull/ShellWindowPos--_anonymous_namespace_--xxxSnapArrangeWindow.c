/*
 * XREFs of ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4
 * Callers:
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402DB4A4 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402E5838 (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int128 *v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rax
  HWND v9; // r8
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF

  if ( IsRectEmptyInl(a2) )
  {
    v7 = *((_QWORD *)v4 + 2);
    if ( v7 )
    {
      v8 = HMValidateHandleNoSecure(v7, 1);
      v10 = v8;
      if ( v8 )
      {
        if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
        {
          WindowActions::xxxInterceptInsertAfter(a1, *(struct tagWND **)&a2[1].left, v9);
        }
        else
        {
          v11 = ((~*(_BYTE *)(*(_QWORD *)(v8 + 40) + 24LL) & 8) << 18) | 0x62413;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v8);
          UserSessionState = W32GetUserSessionState(v13, v12);
          ++*(_DWORD *)(UserSessionState + 70592);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
          xxxSetWindowPos(a1, v10, 0LL, 0LL, 0, 0, v11);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
          zzzEndDeferWinEventNotify();
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        }
      }
    }
    else
    {
      xxxSetForegroundWindowWithOptions((__int64)a1, 31LL, 0, 0);
    }
    if ( (a2[1].bottom & 0x20) == 0 )
      ShellWindowPos::NotifyPosAndStateApplied(a1, 3, a2, a2[2].left);
  }
  else
  {
    v5 = (*((_DWORD *)v4 + 7) >> 4) & 1;
    if ( (*((_DWORD *)v4 + 7) & 1) != 0 )
      v5 |= 2u;
    v6 = *((_DWORD *)v4 + 8);
    v16 = *v4;
    WindowArrangement::xxxSetSnapArrangementPos((__int64)a1, (__int32 *)&v16, v5, v6);
  }
}
