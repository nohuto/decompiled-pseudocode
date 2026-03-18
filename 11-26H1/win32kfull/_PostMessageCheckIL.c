/*
 * XREFs of _PostMessageCheckIL @ 0x1401EE5AC
 * Callers:
 *     ForwardTouchMessage @ 0x1401EDF48 (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x1402B6830 (NtUserInjectGesture.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ValidateDDEConvPair @ 0x140211B04 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PostMessageCheckIL(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  BOOL v4; // ebx
  struct tagWND *v8; // rbp
  int v9; // eax
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  const struct tagUIPI_INFO *v14; // r8
  const struct tagUIPI_INFO *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-50h]

  v4 = 0;
  v8 = (struct tagWND *)a1;
  if ( a2 - 992 <= 8 )
  {
    v9 = ValidateDDEConvPair(a3, a1);
    a1 = 1LL;
    v4 = v9 != 0;
  }
  if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !v4 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 456LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v10 != v12 )
    {
      if ( a2 == 717 )
        return 0LL;
      if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v10, v8, a2)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v15 = (const struct tagUIPI_INFO *)(v10 + 864);
        }
        else
        {
          if ( *(_QWORD *)v10 == *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40) )
          {
            v19 = 0x2000LL;
            v20 = 0;
          }
          else
          {
            v19 = *(_QWORD *)(v10 + 864);
            v20 = *(_DWORD *)(v10 + 872);
          }
          v15 = (const struct tagUIPI_INFO *)&v19;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v12 + 864), v15, v14) )
        {
          if ( a2 != 793
            || (v17 = *((_QWORD *)v8 + 2), *(struct tagWND **)(v17 + 1584) != v8)
            || *(_QWORD *)(v17 + 464) != *((_QWORD *)PtiCurrent(v16) + 58) )
          {
            EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
            UserSetLastError(5);
            return 0LL;
          }
        }
      }
    }
  }
  return PostMessage((int)v8, a2, a3, a4);
}
