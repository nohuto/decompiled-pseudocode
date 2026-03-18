/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1402BE3D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     DwmAsyncSetTransition @ 0x140228BE0 (DwmAsyncSetTransition.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        int a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  NTSTATUS v10; // r14d
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rcx
  __int64 *v14; // r15
  BOOL v15; // ebx
  __int64 *v16; // rdi
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbx
  void *v20; // rax
  __int128 v23; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v27[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v28[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-68h] BYREF
  __int128 *v31; // [rsp+E0h] [rbp-58h]
  __int64 *v32; // [rsp+E8h] [rbp-50h]
  __int64 *v33; // [rsp+F0h] [rbp-48h]
  __int128 *v34; // [rsp+F8h] [rbp-40h]
  __int128 *v35; // [rsp+100h] [rbp-38h]

  v26 = 0LL;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v10 = 0;
  *(_QWORD *)&v24 = 0LL;
  *(_QWORD *)&v25 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v14 = (__int64 *)ValidateHwnd(a1);
  if ( v14 )
  {
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a3 )
      {
        v26 = *UmpDetail::ReadFromUser<tagRECT>(&v24, a3);
        *(_QWORD *)&v24 = &v26;
        v31 = &v26;
      }
      if ( a4 )
      {
        *(_OWORD *)v27 = *UmpDetail::ReadFromUser<tagRECT>(&v25, a4);
        v16 = v27;
        v32 = v27;
      }
      else
      {
        v16 = (__int64 *)v25;
      }
      if ( a5 )
      {
        *(_OWORD *)v28 = *UmpDetail::ReadFromUser<tagRECT>(&v23, a5);
        v17 = v28;
        v33 = v28;
      }
      else
      {
        v17 = (__int64 *)v23;
      }
      if ( a6 )
      {
        v29 = *UmpDetail::ReadFromUser<tagRECT>(&v23, a6);
        v11 = &v29;
        v34 = &v29;
      }
      if ( a7 )
      {
        v30 = *UmpDetail::ReadFromUser<tagRECT>(&v23, a7);
        v12 = &v30;
        v35 = &v30;
      }
      if ( IsTopLevelWindow((__int64)v14) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v14) )
        {
          v19 = *v14;
          v20 = (void *)ReferenceDwmApiPort(v13, v18);
          v10 = DwmAsyncSetTransition(v20, v19, a2, (__int128 *)v24, (__int128 *)v16, (__int128 *)v17, v11, v12);
        }
      }
      else
      {
        v10 = -1073741816;
      }
    }
    else
    {
      v10 = -1073741811;
    }
    v15 = v10 >= 0;
    if ( v10 < 0 )
    {
      v15 = 0;
      UserSetLastStatus(v10, 1);
    }
  }
  else
  {
    v15 = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v15;
}
