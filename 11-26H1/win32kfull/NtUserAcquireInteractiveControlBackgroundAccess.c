/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x140254040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x14025E288 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

unsigned __int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  InteractiveControlManager *v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  int v15; // edi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = EnterCrit(0LL, 0LL);
  if ( a3 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0LL;
  }
  Win32HM_LockIntoThread<1>(v7, (__int64)v9, (__int64 *)BugCheckParameter3);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  else
  {
    v12 = InteractiveControlManager::Instance(v11, v10);
    v13 = 761;
    v14 = 744;
    if ( a2 )
    {
      v13 = a2;
      v14 = a2;
    }
    v15 = InteractiveControlManager::AcquireDeviceBackgroundAccess(v12, a1, v14, v13, v9);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    v6 = (unsigned __int64)(unsigned int)~v15 >> 31;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
