/*
 * XREFs of NtUserShellMigrateWindow @ 0x1402BED70
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140257A58 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x140296E84 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402DBB00 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 */

__int64 __fastcall NtUserShellMigrateWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // di
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  const struct tagTHREADINFO **v19; // rsi
  bool v20; // si
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  bool v28; // si
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  struct tagWND *v34; // rbp
  bool v35; // bp
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  unsigned int v39; // r9d
  __int64 v40; // rax
  void *v41; // r14
  __int64 v42; // rcx
  __int16 v44; // [rsp+30h] [rbp-48h]
  __int16 v45; // [rsp+30h] [rbp-48h]
  char v46; // [rsp+40h] [rbp-38h]
  char v47; // [rsp+40h] [rbp-38h]
  _BYTE v48[16]; // [rsp+50h] [rbp-28h] BYREF

  v5 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v48);
  v8 = PtiCurrent(v7);
  LOBYTE(v9) = IAMThreadAccessGranted(v8);
  v11 = 0LL;
  if ( !v9 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        4,
        81,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v16 = 5;
    goto LABEL_70;
  }
  v17 = ValidateHwndIAM(a1);
  v19 = (const struct tagTHREADINFO **)v17;
  if ( !v17 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v18) + 69152);
    v44 = 82;
LABEL_18:
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      3,
      4,
      v44,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      v46);
LABEL_19:
    v16 = 87;
LABEL_70:
    UserSetLastError(v16);
    goto LABEL_71;
  }
  if ( !IsTopLevelWindow(v17) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v24) + 69152);
    v44 = 83;
    goto LABEL_18;
  }
  if ( v19[2] == PtiCurrent(v25) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 69152);
    v44 = 84;
    goto LABEL_18;
  }
  if ( IsHungWindow(v19) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v47 = a1;
    v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v27) + 69152);
    v45 = 85;
LABEL_44:
    LOBYTE(v30) = v28;
    LOBYTE(v29) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      v31,
      3,
      4,
      v45,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      v47);
LABEL_45:
    v16 = 5023;
    goto LABEL_70;
  }
  if ( IsGhostWindowClass((const struct tagWND *)v19, v27) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v47 = a1;
    v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v32) + 69152);
    v45 = 86;
    goto LABEL_44;
  }
  v34 = (struct tagWND *)ValidateHmonitor(a2);
  if ( !v34 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 69152),
        2,
        12,
        87,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        a2);
    }
    v16 = 87;
    goto LABEL_70;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v40 = Win32AllocPoolZInit(16LL, 1836543317LL);
    v41 = (void *)v40;
    if ( v40 )
    {
      *(_QWORD *)v40 = a2;
      *(_DWORD *)(v40 + 8) = a3;
      if ( PostEventMessageWindow(v19, 0x1Bu, 1uLL, v40) )
        goto LABEL_65;
      ShellWindowPos::SHELLPOSREQUEST::operator delete(v41);
    }
    v16 = 14;
    goto LABEL_70;
  }
  ShellWindowPos::ShellMigrateWindowAsync((ShellWindowPos *)v19, v34, (struct tagMONITOR *)a3, v39);
LABEL_65:
  v11 = 1LL;
LABEL_71:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v48);
  UserSessionSwitchLeaveCrit(v42);
  return v11;
}
