/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C0126030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DwmAsyncSetTransition @ 0x1C0126248 (DwmAsyncSetTransition.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  NTSTATUS v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  int v21; // ebx
  __int128 v23; // [rsp+98h] [rbp-80h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v26; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  v16 = v13;
  if ( !v13 )
  {
    v21 = 0;
    goto LABEL_27;
  }
  v17 = 0;
  if ( (!a4 || a3) && (!a6 || a5) )
  {
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (__int128 *)W32UserProbeAddress;
      v23 = *a4;
      a4 = &v23;
    }
    if ( a5 )
    {
      if ( a5 >= W32UserProbeAddress )
        v10 = (__int128 *)W32UserProbeAddress;
      v24 = *v10;
      v10 = &v24;
    }
    if ( a6 )
    {
      if ( a6 >= W32UserProbeAddress )
        v11 = (__int128 *)W32UserProbeAddress;
      v25 = *v11;
      v11 = &v25;
    }
    if ( a7 )
    {
      if ( a7 >= W32UserProbeAddress )
        v12 = (__int128 *)W32UserProbeAddress;
      v26 = *v12;
      v12 = &v26;
    }
    if ( (unsigned int)IsTopLevelWindow(v13) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v16) )
      {
        v20 = (void *)ReferenceDwmApiPort(v15, v14, v18, v19);
        v17 = DwmAsyncSetTransition(v20, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
      }
    }
    else
    {
      v17 = -1073741816;
    }
    if ( v17 >= 0 )
    {
      v21 = 1;
      goto LABEL_25;
    }
  }
  else
  {
    v17 = -1073741811;
  }
  v21 = 0;
LABEL_25:
  if ( v17 < 0 )
  {
    v21 = 0;
    UserSetLastStatus(v17, 1);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v21;
}
