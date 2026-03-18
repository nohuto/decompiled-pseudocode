/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x140042FEC
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x140042FEC (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x140042FEC (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140043168 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR v14[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  xxxMoveFocusAway(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( v5 && a1 == *(const struct tagWND **)(v5 + 80) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63512) )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63512);
    if ( a1 == *(const struct tagWND **)(v7 + 80) )
    {
      UserSessionState = W32GetUserSessionState(v7, v8);
      HMAssignmentUnlock(*(_QWORD *)(UserSessionState + 63512) + 80LL);
    }
  }
  PtiCurrent(v7);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage(a1, 0x272u);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  }
  xxxSendMessage(a1, 2u);
  v10 = *((_QWORD *)a1 + 14);
  while ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 88);
    v12 = PtiCurrent(v9);
    Win32HM_LockIntoThread<1>((__int64)v12, v11, (__int64 *)v14);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v10);
    xxxDW_SendDestroyMessages(v10);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v10 = v11;
    if ( !Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v14) )
    {
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v14);
      break;
    }
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v14);
  }
  xxxMoveFocusAway(a1);
}
