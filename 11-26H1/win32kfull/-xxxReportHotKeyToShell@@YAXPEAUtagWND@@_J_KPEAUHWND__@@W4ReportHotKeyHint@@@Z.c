/*
 * XREFs of ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14027952C
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402A7B44 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14025F34C (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 */

char __fastcall xxxReportHotKeyToShell(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbp
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int16 v14; // bx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rax
  char result; // al
  ShellWindowManagement *v20; // rcx
  __int64 v21; // r8
  const struct tagTHREADINFO *Thread; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  if ( a4 )
  {
    v10 = HMValidateHandleNoSecure(a4, 1);
    if ( v10 )
    {
      v11 = PtiCurrent(v9);
      Win32HM_LockIntoThread<1>((__int64)v11, (__int64)a1, (__int64 *)v24);
      v13 = PtiCurrent(v12);
      Win32HM_LockIntoThread<1>((__int64)v13, v10, (__int64 *)BugCheckParameter3);
      v14 = 1026;
      UserSessionState = W32GetUserSessionState(v16, v15);
      if ( (a5 & 2) != 0 )
      {
        v18 = *(_QWORD *)(UserSessionState + 18928);
        if ( v18 )
        {
          if ( (*(_BYTE *)(v18 + 436) & 1) == 0 )
            v14 = 1538;
        }
      }
      v5 = (unsigned __int8)xxxSetForegroundWindowWithOptions(v10, 31LL, v14, 0);
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
      a1 = (_QWORD *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v24);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v24);
    }
  }
  result = NotifyShell::ShellHotKey(a1, a2, a3, v5);
  if ( result )
  {
    if ( a1 )
      Thread = (const struct tagTHREADINFO *)a1[2];
    else
      Thread = ShellWindowManagement::GetThread(v20);
    LOBYTE(v21) = a5 & 1;
    return LastWokenThread::Set(Thread, 1LL, v21);
  }
  return result;
}
