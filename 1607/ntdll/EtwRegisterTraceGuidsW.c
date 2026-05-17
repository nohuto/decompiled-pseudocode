/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18002A2F0
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180087910 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18002A410 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x18002ABCC (EtwpCreateRegGuidsContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  _QWORD *v9; // rdi
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 RegGuidsContext; // rsi
  unsigned int LastErrorValue; // ebx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a1 || (v9 = a8) == 0LL || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v10 = *a3;
  v11 = a5;
  *a8 = 0LL;
  v15 = v10;
  RegGuidsContext = EtwpCreateRegGuidsContext(a1, a2, (unsigned int)&v15, a4, v11);
  if ( RegGuidsContext )
  {
    LastErrorValue = EtwNotificationRegister((unsigned int)&v15, 2, v8, RegGuidsContext, (__int64)&v16);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, RegGuidsContext);
    else
      *v9 = v16;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
