/*
 * XREFs of FreeThreadsWinEvents @ 0x14013BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013BF44 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     DestroyNotify @ 0x14013BFF0 (DestroyNotify.c)
 *     DestroyEventHook @ 0x14013C8F0 (DestroyEventHook.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall FreeThreadsWinEvents(__int64 a1)
{
  unsigned int CurrentThreadId; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // r14
  __int64 *v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  tagDomLock *v11; // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+28h] [rbp-40h]
  char v13; // [rsp+48h] [rbp-20h]

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(&v11);
  UserSessionState = W32GetUserSessionState(v4, v3);
  v6 = *(__int64 **)(UserSessionState + 70600);
  if ( v6 != (__int64 *)(UserSessionState + 70600) )
  {
    do
    {
      v7 = (__int64 *)*v6;
      if ( *((_DWORD *)v6 + 12) == CurrentThreadId && !v6[8]
        || (v8 = v6[8], v8 == a1)
        || (*((_DWORD *)v6 + 6) || *(_QWORD *)(v6[2] + 16) == a1) && !v8 )
      {
        if ( (v6[7] & 4) == 0 )
          DestroyNotify(v6);
      }
      v6 = v7;
    }
    while ( v7 != (__int64 *)(UserSessionState + 70600) );
  }
  v9 = *(_QWORD *)(UserSessionState + 70584);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 24);
      if ( *(_QWORD *)(v9 + 16) == a1 )
        DestroyEventHook((struct _HEAD *)v9);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( v13 && v11 )
  {
    if ( v12 )
      tagDomLock::UnLockExclusive(v11);
    else
      tagDomLock::UnLockShared(v11);
  }
}
