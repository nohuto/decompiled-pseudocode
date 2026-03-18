/*
 * XREFs of ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380
 * Callers:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     xxxClearWakeMask @ 0x140022640 (xxxClearWakeMask.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x140022BD0 (xxxGetInputEvent.c)
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSleepThreadWithPwnd @ 0x1401B9E80 (xxxSleepThreadWithPwnd.c)
 *     EditionInitInputHangInfo @ 0x1401DDF40 (EditionInitInputHangInfo.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002355C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401B8BC8 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402CAD94 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(struct tagWND *a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // ebp
  __int64 *i; // r14
  __int16 *v12; // rcx
  __int16 v13; // di
  __int64 v14; // rax

  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(0xFFFFF78000000004uLL);
  if ( CurrentThreadWin32Thread )
    v8 = *CurrentThreadWin32Thread;
  else
    v8 = 0LL;
  if ( a2 )
  {
    v9 = v4;
    if ( !(_DWORD)v4 )
      v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  if ( a1 )
  {
    for ( i = *(__int64 **)(v8 + 1288); i; i = (__int64 *)*i )
    {
      if ( (struct tagWND *)i[1] != a1 )
      {
        if ( !*((_DWORD *)i + 4) )
          continue;
        LODWORD(v7) = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 69104);
        if ( (int)v4 - *((_DWORD *)i + 4) <= (unsigned int)v7 )
          continue;
      }
      i[1] = (__int64)a1;
      *((_DWORD *)i + 4) = v9;
      goto LABEL_15;
    }
    v14 = Win32AllocPoolZInit(48LL, 1952936789LL);
    if ( v14 )
    {
      *(_QWORD *)v14 = *(_QWORD *)(v8 + 1288);
      *(_QWORD *)(v14 + 8) = a1;
      *(_DWORD *)(v14 + 16) = v9;
      *(_QWORD *)(v8 + 1288) = v14;
    }
LABEL_15:
    v12 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
    v13 = *v12;
    if ( v13 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v6) + 19904) + 900LL)
      && (GetGhostProp(a1) || GetFrostProp(a1)) )
    {
      xxxHandleHealthyWindow(a1);
    }
  }
  else
  {
    EtwTraceMessageCheckDelay(v8);
    *(_DWORD *)(v8 + 1304) = v9;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) < 0 )
      xxxHandleHealthyThread((struct tagTHREADINFO *)v8);
  }
  *(_QWORD *)(v8 + 1360) &= ~0x200000000uLL;
  return EtwTraceProcessWindowInfo(v8);
}
