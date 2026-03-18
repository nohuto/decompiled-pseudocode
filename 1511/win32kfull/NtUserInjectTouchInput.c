/*
 * XREFs of NtUserInjectTouchInput @ 0x1C021CE90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0226258 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, unsigned __int64 Src)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  struct tagPOINTER_TOUCH_INFO *v5; // rax
  struct tagPOINTER_TOUCH_INFO *v6; // rbx
  unsigned int v7; // edi
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3, 0);
    v7 = 0;
    UserSetLastError(87);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    v4 = 144 * v3;
    if ( 144 * v3 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x1C71C71C71C71C7LL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + Src > W32UserProbeAddress || v4 + Src < Src )
        *W32UserProbeAddress = 0;
    }
    v5 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v3, 1953067861LL);
    v6 = v5;
    if ( !v5 )
      ExRaiseStatus(-1073741801);
    memmove(v5, (const void *)Src, 144 * v3);
    PushW32ThreadLock((__int64)v6, v13, (__int64)Win32FreePool);
    v7 = xxxInjectTouchInput(v3, v6);
    if ( v7 )
    {
      v9 = v3;
      v8 = 1;
    }
    else
    {
      v8 = 0;
      v9 = -2;
    }
    TraceLoggingTouchInjection(1, v8, v9, 0);
    PopW32ThreadLock(v13);
    if ( v6 )
      Win32FreePool(v6);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v7;
}
