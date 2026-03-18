/*
 * XREFs of NtUserSetWindowPos @ 0x14025CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401A2C28 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ConstrainWindowSize @ 0x1401D8344 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1401DAE70 (ConstrainWindowPos.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14021D978 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x140220848 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, struct tagWND *a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned int v7; // r15d
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct tagWND *v14; // rdi
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r12
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v22; // rdx
  char v23; // bl
  bool v24; // r14
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  ULONG_PTR v29[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-10h] BYREF
  int v31; // [rsp+B0h] [rbp+40h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF

  v32 = a4;
  v31 = a3;
  v7 = a7;
  v10 = 0;
  v29[0] = 0LL;
  v11 = EnterCrit(0LL, 0LL);
  v12 = ValidateHwnd(a1);
  v14 = (struct tagWND *)v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 40);
    v15 = *(_WORD *)(v13 + 42) & 0x2FFF;
    if ( v15 != 669 && v15 != 671 )
    {
      Win32HM_LockIntoThread<0>(v11, (__int64)v14, BugCheckParameter3);
      if ( (unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (v7 & 0xFFFD9800) != 0 )
        {
LABEL_6:
          v16 = 1004;
          goto LABEL_7;
        }
        v17 = v7 & 0xFFFC9800;
      }
      else
      {
        v17 = v7 & 0xFFFC9800;
        if ( (v7 & 0xFFFC9800) != 0 )
          goto LABEL_6;
      }
      if ( !(unsigned int)ValidateHWNDIA(a2, (struct tagWND **)v29) )
        goto LABEL_38;
      if ( *(char *)(*((_QWORD *)v14 + 5) + 20LL) >= 0
        && ((unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() || !v17) )
      {
        if ( (v7 & 2) == 0 )
          ConstrainWindowPos(&v31, &v32);
        if ( (v7 & 1) == 0 )
          ConstrainWindowSize(&a5, &a6);
        v19 = v29[0];
        if ( v29[0] < 2 || v29[0] == -2LL || (v20 = v29[0], v29[0] == -1LL) )
          v20 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v18);
        if ( (unsigned __int8)ShouldVirtualizeWindowRect(v14, CurrentThreadDpiAwarenessContext) )
          TransformSWPCoords(v14, &v31, &v32, &a5, &a6, v7);
        if ( (v7 & 0x43) == 0x43
          && (*(_BYTE *)(*((_QWORD *)v14 + 5) + 31LL) & 0x10) == 0
          && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x40000000)
          && ShellWindowManagement::WindowSubjectToBehavior((__int64)v14, 1u, 0, 1) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
            || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v23 = 0;
          }
          v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v27,
              v26,
              *(_QWORD *)(UserSessionState + 69152),
              4,
              12,
              11,
              (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
              (char)v14);
          }
          xxxShowWindowEx(v14, 5u, 0);
          v10 = 1;
        }
        else
        {
          Win32HM_LockIntoThread<1>(v11, v20, (__int64 *)v29);
          v10 = xxxSetWindowPos(v14, v19, (unsigned int)v31, (unsigned int)v32, a5, a6, v7);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v29);
        }
        goto LABEL_38;
      }
      v16 = 87;
LABEL_7:
      UserSetLastError(v16);
LABEL_38:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v13);
  return v10;
}
