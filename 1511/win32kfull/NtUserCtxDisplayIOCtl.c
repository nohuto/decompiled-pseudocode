/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C0218820
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C0202D6C (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, char *a2, unsigned int a3)
{
  size_t v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  void *v14; // rbx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    if ( (_DWORD)v3 && ((unsigned __int64)&a2[v3] > W32UserProbeAddress || &a2[v3] < a2) )
      *W32UserProbeAddress = 0;
    v13 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v14 = (void *)v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v13, v16, (__int64)Win32FreePool);
    memmove(v14, a2, v3);
    v12 = CtxDisplayIOCtl(a1, (__int64)v14, v3);
    if ( v14 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
