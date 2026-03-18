/*
 * XREFs of xxxCallMsgFilter @ 0x14002004C
 * Callers:
 *     NtUserCallMsgFilter @ 0x140020480 (NtUserCallMsgFilter.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, int a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned int DLT; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  char *v14; // rbx
  tagDomLock *v15; // rcx
  unsigned int v16; // ebx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-40h]
  char v18; // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  char v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  char v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+50h] [rbp-10h]

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 >= 0x240 && v6 <= 0x240 || ((v6 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  DLT = DLT_HOOK::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v18 = 0;
  v20 = 0;
  v19 = W32GetUserSessionState(v10, v9) + 42384;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v12, v11) == 1 )
  {
    v23 = 1;
    v13 = 0;
    v14 = &v18;
    do
    {
      v15 = (tagDomLock *)*((_QWORD *)v14 - 1);
      if ( v15 )
      {
        if ( *v14 )
          tagDomLock::LockExclusive(v15);
        else
          tagDomLock::LockShared(v15);
      }
      ++v13;
      v14 += 16;
    }
    while ( !v13 );
    v22 = 1;
  }
  if ( ((*(_BYTE *)(v5 + 712) | *(_BYTE *)(**(_QWORD **)(v5 + 496) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0LL, a1, 6) )
  {
    if ( v22 && v23 && DomainLockRef )
    {
      if ( v18 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 1LL;
  }
  else
  {
    if ( ((*(_BYTE *)(v5 + 712) | *(_BYTE *)(**(_QWORD **)(v5 + 496) + 16LL)) & 1) == 0 )
    {
      if ( v22 && v23 && DomainLockRef )
      {
        if ( v18 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
      return 0LL;
    }
    v16 = xxxCallHook(a2, 0LL, a1, -1);
    if ( v22 && v23 && DomainLockRef )
    {
      if ( v18 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return v16;
  }
}
