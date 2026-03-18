/*
 * XREFs of FreeHook @ 0x1400267F0
 * Callers:
 *     FreeThreadsWindowHooks @ 0x140026630 (FreeThreadsWindowHooks.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140026CF4 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x140026714 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x140026BA4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x140026BC8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x140026CD0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     RemoveHmodDependency @ 0x140027130 (RemoveHmodDependency.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1401BE41C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1402890FC (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall FreeHook(PETHREAD **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  tagDomLock *v4; // rbx
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  tagDomLock *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // rcx
  int v20; // edx
  char v21; // r14
  bool v22; // r15
  unsigned __int8 ThreadId; // al
  PETHREAD *v24; // rcx
  char v25; // di
  int v26; // ebx
  __int64 v27; // rdx
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  tagDomLock *v31; // [rsp+50h] [rbp-39h] BYREF
  char v32; // [rsp+58h] [rbp-31h]
  char v33; // [rsp+78h] [rbp-11h]
  tagDomLock *v34; // [rsp+80h] [rbp-9h] BYREF
  char v35; // [rsp+88h] [rbp-1h]
  char v36; // [rsp+A8h] [rbp+1Fh]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v34);
  if ( ((_DWORD)a1[8] & 0x2000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*a1[2]);
      v24 = a1[2];
      v25 = ThreadId;
      v26 = *((_DWORD *)v24[57] + 14);
      UserSessionState = W32GetUserSessionState(v24, v27);
      LOBYTE(v29) = v22;
      LOBYTE(v30) = v21;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        5,
        48,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
        v26,
        v25);
    }
    *((_BYTE *)a1 + 96) = 1;
    DeBoostHook((struct tagHOOK *)a1);
  }
  v4 = (tagDomLock *)(W32GetUserSessionState(v3, v2) + 42336);
  if ( !tagDomLock::IsLockedShared(v4) || tagDomLock::IsLockedExclusive(v4) )
  {
    v5 = 0;
    v6 = _HMPheFromObjectWorker(a1);
    if ( !*(_DWORD *)(W32GetUserSessionState(v8, v7) + 19792) && IS_USERCRIT_OWNED_EXCLUSIVE() )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19800) )
      {
        if ( v6 != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19800) )
        {
          v18 = W32GetUserSessionState(v17, v16);
          ++*(_DWORD *)(v18 + 19808);
        }
      }
      else
      {
        v5 = 1;
        *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19800) = v6;
      }
    }
    v13 = *((_DWORD *)a1 + 16);
    if ( (v13 & 0x80u) == 0 )
    {
      v19 = (struct tagTHREADINFO *)a1[9];
      v20 = *((_DWORD *)a1 + 12);
      *((_DWORD *)a1 + 16) = v13 | 0x80;
      if ( !v19 )
        v19 = (struct tagTHREADINFO *)a1[2];
      CheckWHFBits(v19, v20);
    }
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v31);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(&v31);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( v33 && v31 )
      {
        if ( v32 )
          tagDomLock::UnLockExclusive(v31);
        else
          tagDomLock::UnLockShared(v31);
      }
      UnlinkHook((struct tagHOOK *)a1, v14);
      if ( *((int *)a1 + 17) >= 0 )
        RemoveHmodDependency();
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v31);
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(&v31);
      HMFreeObject(a1);
      if ( v33 )
      {
        v15 = v31;
        if ( v31 )
        {
          if ( v32 )
            tagDomLock::UnLockExclusive(v31);
          else
            tagDomLock::UnLockShared(v31);
        }
      }
    }
    else if ( v33 )
    {
      v15 = v31;
      if ( v31 )
      {
        if ( v32 )
          tagDomLock::UnLockExclusive(v31);
        else
          tagDomLock::UnLockShared(v31);
      }
      v33 = 0;
    }
    if ( v5 )
      *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19800) = 0LL;
  }
  else
  {
    DelayHookFree((struct tagHOOK *)a1);
  }
  if ( v36 && v34 )
  {
    if ( v35 )
      tagDomLock::UnLockExclusive(v34);
    else
      tagDomLock::UnLockShared(v34);
  }
}
