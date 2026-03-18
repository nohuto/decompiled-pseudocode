/*
 * XREFs of _UnhookWinEvent @ 0x14013C0C0
 * Callers:
 *     NtUserUnhookWinEvent @ 0x14013BD30 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x14013C42C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     DestroyEventHook @ 0x14013C8F0 (DestroyEventHook.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UnhookWinEvent(struct _HEAD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v6);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 || *((struct tagTHREADINFO **)a1 + 2) != PtiCurrent(v4) )
  {
    UserSetLastError(6);
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v6);
    return 0LL;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v6);
    DestroyEventHook(a1);
    return 1LL;
  }
}
