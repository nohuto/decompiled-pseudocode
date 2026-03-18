/*
 * XREFs of ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14029D55C
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140219320 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

void __fastcall IVContainerForegroundSync::xxxIVSyncForeground(IVContainerForegroundSync *this, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rcx
  char v3; // di
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct tagWND *ShellSpecialWindow; // rsi
  bool v16; // bp
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rdx
  bool v22; // bl
  __int16 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      114,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  v9 = W32GetUserSessionState(v2, a2);
  v10 = *(_QWORD *)(v9 + 19528);
  if ( v10 )
  {
    ShellSpecialWindow = (struct tagWND *)ValidateHwnd(*(_QWORD *)(v9 + 19528));
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v3 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
      v24 = v10;
      LOBYTE(v20) = v22;
      v23 = 116;
      goto LABEL_27;
    }
  }
  else
  {
    if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = W32GetUserSessionState(v12, v11);
      ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(*(_QWORD *)(v13 + 19176), 0);
    }
    else
    {
      ShellSpecialWindow = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19176) + 296LL);
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v3 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = *(_QWORD *)ShellSpecialWindow;
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      v24 = v17;
      LOBYTE(v20) = v16;
      v23 = 115;
LABEL_27:
      LOBYTE(v19) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        *(_QWORD *)(v18 + 69152),
        4,
        2,
        v23,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        v24);
    }
  }
  if ( ShellSpecialWindow )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
      BugCheckParameter3,
      (__int64)ShellSpecialWindow);
    xxxSetForegroundWindowWithOptions((__int64)ShellSpecialWindow, 31LL, 128, 0);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
}
