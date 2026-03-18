/*
 * XREFs of xxxLoadHmodIndex @ 0x1400396C0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x14013C170 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x140292FB4 (xxxLoadUserApiHook.c)
 * Callees:
 *     ClientLoadLibrary @ 0x140007F48 (ClientLoadLibrary.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400265D4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140027240 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x14003AAB0 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14013CB18 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     UserGetLastStatus @ 0x1401B0AD8 (UserGetLastStatus.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ClientFreeLibrary @ 0x1401EA1EC (ClientFreeLibrary.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x1401F26B8 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall xxxLoadHmodIndex(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // r14
  int v4; // r15d
  unsigned int DLT; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // rdx
  int v10; // edi
  tagDomLock *v11; // rcx
  struct _ERESOURCE *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int16 v28; // bx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG_PTR Library; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int16 v48; // bx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int AtomNameFromAtomTable; // ebx
  PERESOURCE v53; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v54; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *DomainLockRef; // [rsp+58h] [rbp-A8h] BYREF
  char v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h]
  char v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  char v62; // [rsp+80h] [rbp-80h]
  _BYTE v63[56]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v65[264]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v1 = (int)a1;
  DestinationString = 0LL;
  v54 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v4 = 1;
  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v58 = 1;
  v60 = 0;
  v8 = &v58;
  v59 = W32GetUserSessionState(v7, v6) + 42384;
  v61 = 0LL;
  v10 = 0;
  v62 = 0;
  do
  {
    v11 = (tagDomLock *)*((_QWORD *)v8 - 1);
    if ( v11 )
    {
      if ( *v8 )
        tagDomLock::LockExclusive(v11);
      else
        tagDomLock::LockShared(v11);
    }
    ++v10;
    v8 += 16;
  }
  while ( !v10 );
  v62 = 1;
  v12 = *(struct _ERESOURCE **)(W32GetUserSessionState(v11, v9) + 42368);
  if ( !*(_DWORD *)(W32GetUserSessionState(v14, v13) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v16, v15) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v17, v15) || ExIsResourceAcquiredExclusiveLite(v12) != 1) )
  {
    __int2c();
  }
  v18 = 1 << v1;
  v19 = *(_QWORD *)(v3 + 456);
  if ( ((1 << v1) & *(_DWORD *)(v19 + 396)) == 0 )
  {
    if ( (int)v1 < 0 || (int)v1 >= *(_DWORD *)(W32GetUserSessionState(v19, v15) + 41432) )
    {
      UserSetLastError(87);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
      return 0LL;
    }
    v53 = *(PERESOURCE *)(W32GetUserSessionState(v23, v22) + 42368);
    LockRefactorStagingAssertAny((const struct tagDomLock *)&v53);
    v26 = 8 * v1 + 400;
    v27 = v1;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 456) + v26) == -1LL )
    {
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
      return 0LL;
    }
    v28 = *(_WORD *)(W32GetUserSessionState(v25, v24) + 2 * v1 + 41436);
    UserSessionState = W32GetUserSessionState(v30, v29);
    UserGetAtomNameFromAtomTable(*(_QWORD *)(UserSessionState + 41424), v28, SourceString, 260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v34 = W32GetUserSessionState(v33, v32);
    if ( (_DWORD)v1 == *(_DWORD *)(v34 + 64208) )
    {
      RtlInitUnicodeString(&v54, (PCWSTR)(v34 + 64212));
    }
    else if ( (_DWORD)v1 == *(_DWORD *)(v34 + 64732) )
    {
      RtlInitUnicodeString(&v54, (PCWSTR)(v34 + 64736));
    }
    else
    {
      RtlInitUnicodeString(&v54, 0LL);
      v4 = 0;
    }
    if ( v62 && DomainLockRef )
    {
      if ( v58 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v54);
    if ( !Library )
    {
      if ( (unsigned int)UserGetLastStatus() == -1073740284
        || (unsigned int)UserGetLastStatus() == -1073740760
        || (unsigned int)UserGetLastError() == 1655
        || (unsigned int)UserGetLastError() == 577 )
      {
        DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>((__int64)v63);
        v53 = *(PERESOURCE *)(W32GetUserSessionState(v37, v36) + 42368);
        LockRefactorStagingAssertOwned(&v53, v38);
        *(_QWORD *)(*(_QWORD *)(v3 + 456) + v26) = -1LL;
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v63);
      }
      return Library;
    }
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>((__int64)&DomainLockRef);
    String1 = 0LL;
    if ( v4
      && ((v48 = *(_WORD *)(W32GetUserSessionState(v40, v39) + 2 * v27 + 41436),
           v51 = W32GetUserSessionState(v50, v49),
           AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(*(_QWORD *)(v51 + 41424), v48, v65, 260LL),
           RtlInitUnicodeString(&String1, v65),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v63);
      ClientFreeLibrary(Library);
      Library = 0LL;
    }
    else
    {
      v53 = *(PERESOURCE *)(W32GetUserSessionState(v40, v39) + 42368);
      LockRefactorStagingAssertOwned(&v53, v41);
      if ( (v18 & *(_DWORD *)(*(_QWORD *)(v3 + 456) + 396LL)) == 0 )
      {
        v44 = W32GetUserSessionState(v43, v42);
        ++*(_DWORD *)(v44 + 4 * v27 + 41500);
        v53 = *(PERESOURCE *)(W32GetUserSessionState(v46, v45) + 42368);
        LockRefactorStagingAssertOwned(&v53, v47);
        *(_QWORD *)(*(_QWORD *)(v3 + 456) + v26) = Library;
        *(_DWORD *)(*(_QWORD *)(v3 + 456) + 396LL) |= v18;
LABEL_40:
        if ( v62 && DomainLockRef )
        {
          if ( v58 )
            tagDomLock::UnLockExclusive(DomainLockRef);
          else
            tagDomLock::UnLockShared(DomainLockRef);
        }
        return Library;
      }
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v63);
      ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(v3 + 456) + v26));
    }
    UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(v63);
    goto LABEL_40;
  }
  v20 = *(_QWORD *)(v19 + 8 * v1 + 400);
  if ( v62 && DomainLockRef )
  {
    if ( v58 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return v20;
}
