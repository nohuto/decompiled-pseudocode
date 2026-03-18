/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x14013C170
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x14013C42C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     MakeExportSuppressedPfnValid @ 0x14013C4D8 (MakeExportSuppressedPfnValid.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14013CB18 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1,
        __int64 a2))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 UserSessionState; // rax
  tagDomLock *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  unsigned int DLT; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r14d
  char *v13; // rsi
  tagDomLock *v14; // rcx
  tagDomLock *v15; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-40h] BYREF
  char v22; // [rsp+28h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  char v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h]
  char v26; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&DomainLockRef);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return 0LL;
  }
  v5 = 0LL;
  if ( v26 )
  {
    v4 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v22 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  PsGetCurrentThreadWin32Thread(v4);
  if ( *((_DWORD *)a1 + 18) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess) )
    {
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v22 = 1;
      v23 = W32GetUserSessionState(v10, v9) + 42384;
      v24 = 0;
      v25 = 0LL;
      if ( DomainLockRef )
      {
        if ( v22 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
      v11 = *((unsigned int *)a1 + 18);
      v26 = 1;
      if ( xxxLoadHmodIndex(v11) )
      {
        if ( v26 )
        {
          v12 = 0;
          v13 = &v22;
          do
          {
            v14 = (tagDomLock *)*((_QWORD *)v13 - 1);
            if ( v14 )
            {
              if ( *v13 )
                tagDomLock::LockExclusive(v14);
              else
                tagDomLock::LockShared(v14);
            }
            ++v12;
            v13 += 16;
          }
          while ( !v12 );
        }
        goto LABEL_20;
      }
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(&DomainLockRef);
    }
    return 0LL;
  }
LABEL_20:
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&DomainLockRef);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    if ( v26 && DomainLockRef )
    {
      if ( v22 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 0LL;
  }
  if ( v26 )
  {
    v15 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v22 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  v17 = *((int *)a1 + 18);
  v18 = *(_QWORD *)(v5 + 456);
  v19 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v18 + 8 * v17 + 400);
  if ( (_DWORD)v17 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v18 + 8 * v17 + 400));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v19;
}
