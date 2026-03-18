/*
 * XREFs of _SetWinEventHook @ 0x14013C5E8
 * Callers:
 *     NtUserSetWinEventHook @ 0x14013BB00 (NtUserSetWinEventHook.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x140026E70 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140027098 (AddHmodDependency.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     CategoryMaskFromEventRange @ 0x14013C894 (CategoryMaskFromEventRange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWinEventHook(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  unsigned int v10; // r13d
  unsigned int v11; // ebp
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rdi
  int HmodTableIndex; // ebx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // [rsp+20h] [rbp-68h]
  tagDomLock *v34; // [rsp+28h] [rbp-60h] BYREF
  char v35; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+50h] [rbp-38h]

  v33 = a1;
  v10 = a2;
  v11 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  v14 = PtiCurrent(v13);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 130, 0, 0) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v32 = 1427;
    goto LABEL_23;
  }
  if ( v11 > v10 )
  {
    v32 = 1426;
    goto LABEL_23;
  }
  if ( (a8 & 4) != 0 )
  {
    if ( !a3 )
    {
      v32 = 1428;
      goto LABEL_23;
    }
    if ( !a4 )
    {
      v32 = 1157;
      goto LABEL_23;
    }
    HmodTableIndex = GetHmodTableIndex(a4);
    if ( HmodTableIndex == -1 )
    {
      v32 = 126;
      goto LABEL_23;
    }
  }
  else
  {
    HmodTableIndex = -1;
    a3 = 0LL;
  }
  if ( a7 )
  {
    v31 = PtiFromThreadId(a7);
    if ( !v31 || (_InterlockedCompareExchange((volatile signed __int32 *)(v31 + 520), 0, 0) & 0x1000000) == 0 )
    {
      v32 = 1444;
LABEL_23:
      UserSetLastError(v32);
      return 0LL;
    }
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v34);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)&v34);
  LOBYTE(v16) = 15;
  v17 = HMAllocObject(v14, 0LL, v16, 80LL);
  v18 = 0LL;
  v19 = v17;
  if ( v36 )
  {
    if ( v34 )
    {
      if ( v35 )
        tagDomLock::UnLockExclusive(v34);
      else
        tagDomLock::UnLockShared(v34);
      v18 = 0LL;
    }
    v36 = 0;
  }
  if ( !v19 )
    return 0LL;
  *(_DWORD *)(v19 + 32) = v33;
  v20 = *(_DWORD *)(v19 + 40) & 0xFFFFFFFD;
  *(_DWORD *)(v19 + 36) = v10;
  *(_DWORD *)(v19 + 56) = a7;
  *(_DWORD *)(v19 + 72) = HmodTableIndex;
  *(_QWORD *)(v19 + 48) = a6;
  v21 = (2 * (a8 & 0xA)) | ((a8 & 4) != 0 ? 8 : 0) | (v20 ^ (2 * (a8 & 1))) & 0xFFFFFFE2;
  *(_DWORD *)(v19 + 40) = v21;
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  *(_QWORD *)(v19 + 64) = a5 - a3;
  v22 = *(_QWORD *)(W32GetUserSessionState(v21, v18) + 70584);
  *(_QWORD *)(v19 + 24) = v22;
  *(_QWORD *)(W32GetUserSessionState(v22, v23) + 70584) = v19;
  W32GetUserSessionState(v25, v24);
  v26 = CategoryMaskFromEventRange(v33, v10);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904);
  *(_DWORD *)(v29 + 1892) |= v26;
  *(_DWORD *)(v19 + 76) = W32GetCurrentThreadDpiAwarenessContext(v29);
  return v19;
}
