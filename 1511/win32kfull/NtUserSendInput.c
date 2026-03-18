/*
 * XREFs of NtUserSendInput @ 0x1C00828A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxSendInput @ 0x1C0082A04 (xxxSendInput.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r14
  size_t v6; // rdi
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  if ( a3 == 40 && (_DWORD)v5 )
  {
    v6 = 40 * v5;
    if ( 40 * v5 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x666666666666666LL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + a2 > W32UserProbeAddress || v6 + a2 < a2 )
        *W32UserProbeAddress = 0;
    }
    v7 = (void *)Win32AllocPoolWithQuota(v6, 1769173845LL);
    v8 = (__int64)v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    memmove(v7, (const void *)a2, v6);
    PushW32ThreadLock(v8, v13, (__int64)Win32FreePool);
    v9 = xxxSendInput((unsigned int)v5, v8);
    PopW32ThreadLock(v13);
    if ( v8 )
      Win32FreePool(v8);
  }
  else
  {
    v9 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
