/*
 * XREFs of NtUserSetParent @ 0x1401F6C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rsi
  int v9; // eax
  struct tagWND *v10; // rbp
  struct tagWND *v11; // rax
  __int64 MessageWindow; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, (__int64)v8, BugCheckParameter3);
      if ( a2 )
      {
        if ( a2 != -3 )
        {
          v10 = (struct tagWND *)ValidateHwnd(a2);
          if ( !v10 )
          {
LABEL_10:
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            goto LABEL_11;
          }
LABEL_7:
          Win32HM_LockIntoThread<1>(v4, (__int64)v10, (__int64 *)v15);
          v11 = xxxSetParentWorker(v8, v10, 0LL, 0);
          if ( v11 )
            v7 = *(_QWORD *)v11;
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v15);
          goto LABEL_10;
        }
        MessageWindow = GetMessageWindow((__int64)v8);
      }
      else
      {
        MessageWindow = GetDesktopWindow((__int64)v8);
      }
      v10 = (struct tagWND *)MessageWindow;
      goto LABEL_7;
    }
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
