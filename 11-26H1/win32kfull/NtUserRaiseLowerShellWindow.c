/*
 * XREFs of NtUserRaiseLowerShellWindow @ 0x14024B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall NtUserRaiseLowerShellWindow(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  struct tagWND *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // ecx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, (__int64)v8, BugCheckParameter3);
      v11 = *(_QWORD *)(v4 + 496);
      if ( !*(_QWORD *)(v11 + 176) )
        goto LABEL_15;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(v11 + 176) == CurrentProcessWin32Process )
      {
        if ( *(struct tagWND **)(v11 + 168) == v8 )
        {
          if ( a2 )
          {
            SetOrClrWF(0, v8, 0x420u, 1);
            if ( !xxxSetForegroundWindowWithOptions((__int64)v8, 31LL, 4, 0) )
              goto LABEL_17;
          }
          else
          {
            SetOrClrWF(1, v8, 0x420u, 1);
          }
          v7 = xxxSetWindowPos(v8, a2 == 0, 0LL, 0LL, 0, 0, 19);
LABEL_17:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          goto LABEL_18;
        }
        v13 = 87;
      }
      else
      {
LABEL_15:
        v13 = 5;
      }
      UserSetLastError(v13);
      goto LABEL_17;
    }
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
