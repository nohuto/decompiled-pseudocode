/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1402B4840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x1402AD748 (W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___.c)
 *     WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402C2434 (WPP_RECORDER_AND_TRACE_SF_lq.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // r15
  bool v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 CurrentProcessWow64Process; // rax
  struct _KPROCESS **v27; // rcx
  struct _KPROCESS *v28; // rbx
  int ScrollBarInfo; // eax
  __int64 v30; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+90h] [rbp-88h]
  __int128 *v37; // [rsp+98h] [rbp-80h]
  __int128 v38; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-68h]
  __int128 v40; // [rsp+C0h] [rbp-58h]
  __int64 v41; // [rsp+D0h] [rbp-48h]
  int v42; // [rsp+D8h] [rbp-40h]

  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (__int64 *)v7;
  if ( v7 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v7);
    if ( a2 == -4 )
    {
      v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69152),
          2,
          9,
          16,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          -4);
      }
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || (v19 = *(__int64 **)(v9[2] + 456), v20 = *v19, PsGetCurrentProcess(v19) != v20) )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v17);
        ProbeForWrite(a3, 0x3CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
        LODWORD(v38) = *a3;
        if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          || (v27 = *(struct _KPROCESS ***)(v9[2] + 456), v28 = *v27,
                                                          (struct _KPROCESS *)PsGetCurrentProcess(v27) == v28) )
        {
          ScrollBarInfo = xxxGetScrollBarInfo(v9, a2, (int *)&v38);
        }
        else
        {
          v35 = v9;
          v36 = a2;
          v37 = &v38;
          ScrollBarInfo = W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1_(v28, (__int64)&v35);
        }
        v10 = ScrollBarInfo;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v30);
        if ( (unsigned __int8)ShouldVirtualizeWindowRect(v9, CurrentThreadDpiAwarenessContext) )
          TransformRectBetweenCoordinateSpaces((char *)&v38 + 4, (char *)&v38 + 4, 0LL, v9);
        if ( v10 )
        {
          *(_OWORD *)a3 = v38;
          *((_OWORD *)a3 + 1) = v39;
          *((_OWORD *)a3 + 2) = v40;
          *((_QWORD *)a3 + 6) = v41;
          a3[14] = v42;
        }
        goto LABEL_13;
      }
      v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v17);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 3), v25, v24, *(_QWORD *)(v23 + 69152));
      }
    }
    v10 = 0;
LABEL_13:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    goto LABEL_32;
  }
  v10 = 0;
LABEL_32:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
