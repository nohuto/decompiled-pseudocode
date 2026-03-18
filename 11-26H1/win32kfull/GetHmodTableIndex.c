/*
 * XREFs of GetHmodTableIndex @ 0x140026E70
 * Callers:
 *     _SetWinEventHook @ 0x14013C5E8 (_SetWinEventHook.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1401E6C74 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     _RegisterUserApiHook @ 0x140237F88 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1402935E0 (_RegisterDManipHook.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140027240 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetHmodTableIndex(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 v7; // si
  signed int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE v26[48]; // [rsp+30h] [rbp-58h] BYREF

  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(v26);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v7 = UserAddAtomToAtomTableEx(*(_QWORD *)(UserSessionState + 41424), a1, 0LL, 2LL);
  if ( v7 )
  {
    v8 = 0;
    v11 = 41436LL;
    if ( *(int *)(W32GetUserSessionState(v6, v5) + 41432) > 0 )
    {
      v12 = 41436LL;
      do
      {
        if ( *(_WORD *)(W32GetUserSessionState(v10, v9) + v12) == v7 )
          break;
        ++v8;
        v12 += 2LL;
      }
      while ( v8 < *(_DWORD *)(W32GetUserSessionState(v10, v9) + 41432) );
    }
    if ( v8 != *(_DWORD *)(W32GetUserSessionState(v10, v9) + 41432) )
    {
      v15 = W32GetUserSessionState(v14, v13);
      UserDeleteAtomFromAtomTable(*(_QWORD *)(v15 + 41424), v7);
LABEL_8:
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v26);
      return (unsigned int)v8;
    }
    v8 = 0;
    if ( *(int *)(W32GetUserSessionState(v14, v13) + 41432) > 0 )
    {
      do
      {
        if ( !*(_WORD *)(W32GetUserSessionState(v18, v17) + v11) )
          break;
        ++v8;
        v11 += 2LL;
      }
      while ( v8 < *(_DWORD *)(W32GetUserSessionState(v18, v17) + 41432) );
    }
    if ( v8 != *(_DWORD *)(W32GetUserSessionState(v18, v17) + 41432) )
    {
LABEL_13:
      *(_WORD *)(W32GetUserSessionState(v20, v19) + 2LL * v8 + 41436) = v7;
      *(_DWORD *)(W32GetUserSessionState(v22, v21) + 4LL * v8 + 41500) = 0;
      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 4LL * v8 + 41628) = 0;
      goto LABEL_8;
    }
    v25 = W32GetUserSessionState(v20, v19);
    if ( v8 != 32 )
    {
      ++*(_DWORD *)(v25 + 41432);
      goto LABEL_13;
    }
    UserDeleteAtomFromAtomTable(*(_QWORD *)(v25 + 41424), v7);
    UserSetLastError(8);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v26);
  return 0xFFFFFFFFLL;
}
