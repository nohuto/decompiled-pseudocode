/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012F170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  const struct tagUIPI_INFO *v14; // r8
  const struct tagUIPI_INFO *v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rbp
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-50h]

  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_19;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    v10 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v11 = *((_QWORD *)a1 + 2);
  v12 = *(_QWORD *)(v11 + 456);
  if ( (_QWORD *)v12 == v10 )
    return xxxRealDefWindowProc(a1);
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(*(struct tagPROCESSINFO **)(v11 + 456), a1, a2)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
    {
      return xxxRealDefWindowProc(a1);
    }
    if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
    {
      v15 = (const struct tagUIPI_INFO *)(v12 + 864);
    }
    else
    {
      if ( *(_QWORD *)v12 == *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40) )
      {
        v19 = 0x2000LL;
        v20 = 0;
      }
      else
      {
        v19 = *(_QWORD *)(v12 + 864);
        v20 = *(_DWORD *)(v12 + 872);
      }
      v15 = (const struct tagUIPI_INFO *)&v19;
    }
    if ( UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v10 + 108), v15, v14) )
      return xxxRealDefWindowProc(a1);
    if ( a2 == 793 )
    {
      v18 = *((_QWORD *)a1 + 2);
      if ( *(struct tagWND **)(v18 + 1584) == a1 && *(_QWORD *)(v18 + 464) == *((_QWORD *)PtiCurrent(v16) + 58) )
        return xxxRealDefWindowProc(a1);
    }
    EtwTraceUIPIMsgError(v10, v12, a2, a3, a4);
    UserSetLastError(5);
  }
  if ( *v10 == *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40) )
    return xxxRealDefWindowProc(a1);
LABEL_19:
  UserSetLastError(5);
  return 0LL;
}
