/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C02114D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C01FA080 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, char *a2, unsigned int a3)
{
  size_t v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r9
  void *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v6) == gpepCSRSS )
  {
    if ( (_DWORD)v3 && ((unsigned __int64)&a2[v3] > W32UserProbeAddress || &a2[v3] < a2) )
      *W32UserProbeAddress = 0;
    v10 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v12 = (void *)v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v10, v16, (__int64)Win32FreePool, v11);
    memmove(v12, a2, v3);
    v9 = CtxDisplayIOCtl(a1, (__int64)v12, v3);
    if ( v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v16, v7, v13, v14);
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
