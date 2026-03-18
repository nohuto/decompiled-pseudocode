/*
 * XREFs of ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402A3C28
 * Callers:
 *     NtUserUnhookWindowsHook @ 0x1402C0750 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140026CF4 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140029760 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(unsigned int a1, __int64 (*a2)(void))
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbp
  __int64 Valid; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  char v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v19; // rdx
  char v20; // di
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  char v26; // di
  bool v27; // bp
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  _BYTE v31[48]; // [rsp+50h] [rbp-58h] BYREF

  if ( a1 + 1 > 0xF )
  {
    UserSetLastError(1426);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v26 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        5,
        34,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
        a1);
    }
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v31);
    v5 = PtiCurrent(v4);
    Valid = PhkFirstValid((__int64)v5, a1);
    v9 = 0;
    while ( 1 )
    {
      v10 = Valid;
      if ( !Valid )
        break;
      if ( *(_DWORD *)(Valid + 68) == -1 )
        v11 = *(__int64 (**)(void))(Valid + 56);
      else
        v11 = (__int64 (*)(void))(*(_QWORD *)(Valid + 56)
                                + *(_QWORD *)(*((_QWORD *)PtiCurrent(v8) + 57) + 8LL * *(int *)(Valid + 68) + 400));
      if ( v11 == a2 )
      {
        if ( *(struct tagTHREADINFO **)(v10 + 16) == v5 )
        {
          v9 = zzzUnhookWindowsHookEx((PETHREAD **)v10);
        }
        else
        {
          UserSetLastError(5);
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
            || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v13 = 0;
          }
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
            LOBYTE(v16) = v14;
            LOBYTE(v17) = v13;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v17,
              v16,
              *(_QWORD *)(v15 + 69152),
              3,
              5,
              35,
              (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
          }
        }
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v31);
        return v9;
      }
      Valid = PhkNextValid(v10, v7);
    }
    UserSetLastError(1431);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v20 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69152),
        3,
        5,
        36,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v31);
  }
  return 0LL;
}
