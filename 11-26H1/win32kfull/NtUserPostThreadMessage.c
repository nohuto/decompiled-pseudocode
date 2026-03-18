/*
 * XREFs of NtUserPostThreadMessage @ 0x1401D3B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     _PostThreadMessage @ 0x1401D31A0 (_PostThreadMessage.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_LDD @ 0x1402C2254 (WPP_RECORDER_AND_TRACE_SF_LDD.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  tagTHREADINFO *v11; // r15
  int v12; // ecx
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  UIPrivilegeIsolation *v18; // rcx
  const struct tagUIPI_INFO *v19; // r8
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  const struct tagUIPI_INFO *v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  const struct tagUIPI_INFO *v30; // r8
  const struct tagUIPI_INFO *v31; // rdx
  char v33; // [rsp+60h] [rbp-19h]
  bool v34; // [rsp+61h] [rbp-18h]
  __int64 v35; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h]
  __int64 v37; // [rsp+78h] [rbp-1h] BYREF
  int v38; // [rsp+80h] [rbp+7h]

  v36 = a4;
  v6 = a4;
  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) == 0 )
  {
    v9 = 0;
    v11 = (tagTHREADINFO *)PtiFromThreadId(a1);
    if ( !v11 )
    {
LABEL_4:
      v12 = 1444;
LABEL_5:
      UserSetLastError(v12);
      goto LABEL_45;
    }
    v13 = PtiCurrent(v10);
    if ( *((_QWORD *)v13 + 61) != *((_QWORD *)v11 + 61)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v13 + 130, 0, 0) & 8) == 0
      && !GetDesktopView(*((_QWORD *)v13 + 57), *((_QWORD *)v11 + 61)) )
    {
      v37 = 0LL;
      v35 = 0LL;
      if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !(unsigned __int8)HasTcbPrivilege() )
          goto LABEL_4;
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v15, v14);
        if ( !(unsigned int)IsPrivileged(UserSessionState + 42568) )
          goto LABEL_4;
      }
      if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v16) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v13 + 57) + 864LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v11 + 57) + 864LL),
                v19) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000) == 0
            || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v20 = 0;
          }
          v33 = v20;
          v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            tagTHREADINFO::GetTID(v11);
            tagTHREADINFO::GetTID(v13);
            v23 = W32GetUserSessionState(v22, v21);
            LOBYTE(v24) = v34;
            LOBYTE(v25) = v33;
            WPP_RECORDER_AND_TRACE_SF_LDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v25, v24, *(_QWORD *)(v23 + 69152));
            v6 = v36;
          }
          EtwTraceUIPIMsgError(*((_QWORD *)v13 + 57), *((_QWORD *)v11 + 57), a2, a3, v6);
          goto LABEL_4;
        }
      }
      else if ( UIPrivilegeIsolation::Enforced(v18) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v13 + 57) + 864LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v11 + 57) + 864LL),
                v26) )
        {
          UserSetLastError(1444);
          EtwTraceUIPIMsgError(*((_QWORD *)v13 + 57), *((_QWORD *)v11 + 57), a2, a3, v6);
          goto LABEL_45;
        }
      }
      else if ( (int)GetProcessLuid(*(_QWORD *)v13, &v37) < 0
             || (int)GetProcessLuid(*(_QWORD *)v11, &v35) < 0
             || v37 != v35 )
      {
        goto LABEL_4;
      }
    }
    v27 = *((_QWORD *)v11 + 57);
    v28 = *((_QWORD *)v13 + 57);
    if ( v27 == v28 )
      goto LABEL_44;
    if ( a2 == 717 )
      goto LABEL_45;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(*((struct tagPROCESSINFO **)v11 + 57), 0LL, a2)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792
      || (!(unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
        ? (*(_QWORD *)v27 != *(_QWORD *)(W32GetUserGdiSessionState(v29) + 40)
         ? (v37 = *(_QWORD *)(v27 + 864), v38 = *(_DWORD *)(v27 + 872))
         : (v37 = 0x2000LL, v38 = 0),
           v31 = (const struct tagUIPI_INFO *)&v37)
        : (v31 = (const struct tagUIPI_INFO *)(v27 + 864)),
          UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v28 + 864), v31, v30)) )
    {
LABEL_44:
      v9 = PostThreadMessage(v11, a2, a3, v36);
      goto LABEL_45;
    }
    EtwTraceUIPIMsgError(v28, v27, a2, a3, v36);
    v12 = 5;
    goto LABEL_5;
  }
  UserSetLastError(87);
  v9 = 0;
LABEL_45:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
