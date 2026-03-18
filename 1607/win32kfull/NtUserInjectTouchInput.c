/*
 * XREFs of NtUserInjectTouchInput @ 0x1C0216970
 * Callers:
 *     <none>
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     xxxInjectTouchInput @ 0x1C01D4AF4 (xxxInjectTouchInput.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C021F318 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, unsigned __int64 Src)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  struct tagPOINTER_TOUCH_INFO *v5; // rax
  struct tagPOINTER_TOUCH_INFO *v6; // rbx
  __int64 v7; // r9
  int v8; // edi
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3, 0);
    v8 = 0;
    UserSetLastError(87LL);
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
    PushW32ThreadLock((__int64)v6, v19, (__int64)Win32FreePool, v7);
    v8 = xxxInjectTouchInput(v3, v6);
    if ( v8 )
    {
      v10 = v3;
      v9 = 1;
    }
    else
    {
      v9 = 0;
      v10 = -2;
    }
    TraceLoggingTouchInjection(1, v9, v10, 0);
    PopW32ThreadLock(v19, v11, v12, v13);
    if ( v6 )
      Win32FreePool(v6, v14, v15);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v17, v16);
  return v8;
}
