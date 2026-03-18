/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C02189B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C02029CC (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, char *a2, unsigned int a3)
{
  size_t v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  void *v12; // rbx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(1LL);
  if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS )
  {
    if ( (_DWORD)v3 && ((unsigned __int64)&a2[v3] > W32UserProbeAddress || &a2[v3] < a2) )
      *W32UserProbeAddress = 0;
    v11 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v12 = (void *)v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v11, v14, (__int64)Win32FreePool);
    memmove(v12, a2, v3);
    v10 = CtxDisplayIOCtl(a1, (__int64)v12, v3);
    if ( v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v14);
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
