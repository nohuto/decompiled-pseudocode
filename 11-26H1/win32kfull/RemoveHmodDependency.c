/*
 * XREFs of RemoveHmodDependency @ 0x140027130
 * Callers:
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     DestroyEventHook @ 0x14013C8F0 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x140237F88 (_RegisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x140258B60 (_UnregisterDManipHook.c)
 *     _UnregisterUserApiHook @ 0x1402A3EF0 (_UnregisterUserApiHook.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140027240 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  tagDomLock *v16; // [rsp+28h] [rbp-40h] BYREF
  char v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+50h] [rbp-18h]

  v1 = a1;
  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(&v16);
  if ( (int)v1 < *(_DWORD *)(W32GetUserSessionState(v3, v2) + 41432) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( (*(_DWORD *)(UserSessionState + 4 * v1 + 41628))-- == 1 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 4 * v1 + 41500) )
      {
        v12 = W32GetUserSessionState(v11, v10);
        ++*(_DWORD *)(v12 + 41356);
        v15 = W32GetUserSessionState(v14, v13);
        *(_DWORD *)(v15 + 41352) |= 1 << v1;
      }
      else
      {
        *(_WORD *)(W32GetUserSessionState(v11, v10) + 2 * v1 + 41436) = 0;
      }
    }
  }
  if ( v18 && v16 )
  {
    if ( v17 )
      tagDomLock::UnLockExclusive(v16);
    else
      tagDomLock::UnLockShared(v16);
  }
}
