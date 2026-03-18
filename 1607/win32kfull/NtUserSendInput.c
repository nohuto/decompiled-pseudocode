/*
 * XREFs of NtUserSendInput @ 0x1C009EAE0
 * Callers:
 *     <none>
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r14
  size_t v6; // rdi
  void *v7; // rax
  void *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF

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
    v8 = v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    memmove(v7, (const void *)a2, v6);
    PushW32ThreadLock(v8, v17, Win32FreePool);
    v9 = xxxSendInput((unsigned int)v5, v8);
    PopW32ThreadLock(v17, v10, v11, v12);
    if ( v8 )
      Win32FreePool(v8, v13, v15);
  }
  else
  {
    v9 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v9;
}
