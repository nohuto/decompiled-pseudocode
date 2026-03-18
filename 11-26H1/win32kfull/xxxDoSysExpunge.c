/*
 * XREFs of xxxDoSysExpunge @ 0x140025A60
 * Callers:
 *     xxxDoSysExpungeIfNeeded @ 0x140024000 (xxxDoSysExpungeIfNeeded.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400265D4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14013CB18 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ClientFreeLibrary @ 0x1401EA1EC (ClientFreeLibrary.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x1401F26B8 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDoSysExpunge(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int16 v27; // bx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v36[48]; // [rsp+28h] [rbp-60h] BYREF

  v3 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42368);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19792)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v3) != 1) )
  {
    __int2c();
  }
  v8 = 0;
  v9 = *(unsigned int *)(W32GetUserSessionState(v7, v6) + 41356);
  *(_DWORD *)(*(_QWORD *)(a1 + 456) + 392LL) = v9;
  result = W32GetUserSessionState(v9, v10);
  if ( *(int *)(result + 41432) > 0 )
  {
    v14 = 41436LL;
    v15 = 400LL;
    v16 = 41500LL;
    do
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v13, v12) + v16 + 128) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v18, v17) + v14) )
        {
          v35 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 42368);
          LockRefactorStagingAssertOwned((const struct tagDomLock *)&v35);
          v18 = *(_QWORD *)(a1 + 456);
          if ( ((1 << v8) & *(_DWORD *)(v18 + 396)) != 0 )
          {
            v19 = *(_QWORD *)(v15 + v18);
            v35 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 42368);
            LockRefactorStagingAssertOwned((const struct tagDomLock *)&v35);
            v20 = ~(1 << v8);
            *(_QWORD *)(v15 + *(_QWORD *)(a1 + 456)) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 456) + 396LL) &= v20;
            UserSessionState = W32GetUserSessionState(v22, v21);
            if ( (*(_DWORD *)(UserSessionState + v16))-- == 1 )
            {
              v27 = *(_WORD *)(W32GetUserSessionState(v25, v24) + v14);
              v30 = W32GetUserSessionState(v29, v28);
              UserDeleteAtomFromAtomTable(*(_QWORD *)(v30 + 41424), v27);
              *(_WORD *)(W32GetUserSessionState(v32, v31) + v14) = 0;
              v34 = W32GetUserSessionState(0LL, v33);
              *(_DWORD *)(v34 + 41352) &= v20;
            }
            UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v36);
            ClientFreeLibrary(v19);
            UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(v36);
          }
        }
      }
      ++v8;
      v15 += 8LL;
      v16 += 4LL;
      v14 += 2LL;
      result = W32GetUserSessionState(v18, v17);
    }
    while ( v8 < *(_DWORD *)(result + 41432) );
  }
  return result;
}
