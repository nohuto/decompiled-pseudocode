/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x140028410
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140026CF4 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140029760 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  PETHREAD **v3; // rax
  tagDomLock *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+48h] [rbp-20h]

  EnterSharedCrit(0LL, 1LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(&v8);
  LOBYTE(v2) = 5;
  v3 = (PETHREAD **)HMValidateHandleWithDescriptor(a1, v2);
  v5 = 0LL;
  if ( v3 )
  {
    v6 = (int)zzzUnhookWindowsHookEx(v3);
    if ( v10 )
    {
      v4 = v8;
      if ( v8 )
      {
        if ( v9 )
          tagDomLock::UnLockExclusive(v8);
        else
          tagDomLock::UnLockShared(v8);
      }
      v10 = 0;
    }
    v5 = v6;
  }
  else if ( v10 )
  {
    v4 = v8;
    if ( v8 )
    {
      if ( v9 )
        tagDomLock::UnLockExclusive(v8);
      else
        tagDomLock::UnLockShared(v8);
    }
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
