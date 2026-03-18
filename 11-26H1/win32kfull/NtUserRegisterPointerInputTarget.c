/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1402BA390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     _RegisterPointerInputTarget @ 0x1402AA61C (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rbp
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdx
  UIPrivilegeIsolation *v13; // rcx
  bool v14; // di
  bool v15; // bp
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v11 = PtiCurrent(v8);
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(int *)(*((_QWORD *)v11 + 57) + 12LL) >= 0 )
      {
        v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 69152),
            3,
            16,
            29,
            (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
        }
        EtwTraceUIPISystemError(*((_QWORD *)v11 + 57), 0LL, 12LL);
        goto LABEL_13;
      }
    }
    else if ( UIPrivilegeIsolation::Enforced(v13) && *(int *)(*((_QWORD *)v11 + 57) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      EtwTraceUIPISystemError(*((_QWORD *)v11 + 57), 0LL, 12LL);
      goto LABEL_25;
    }
    if ( v11 == *(struct tagTHREADINFO **)(v10 + 16) )
    {
      if ( !a4 || (v20 = *(_QWORD *)(v10 + 40), *(char *)(v20 + 20) >= 0) && *(char *)(v20 + 19) >= 0 )
      {
        if ( (unsigned int)(a3 - 2) <= 1 )
        {
          v9 = RegisterPointerInputTarget(v10, v12, a3, a4);
          goto LABEL_25;
        }
      }
      v19 = 87;
      goto LABEL_14;
    }
LABEL_13:
    v19 = 5;
LABEL_14:
    UserSetLastError(v19);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
