/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18002A2E0
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180087900 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x18002ABBC (EtwpCreateRegGuidsContext.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  ULONGLONG *v9; // rdi
  GUID v10; // xmm0
  __int64 v11; // rax
  void *RegGuidsContext; // rsi
  unsigned __int32 LastErrorValue; // ebx
  GUID Guid; // [rsp+30h] [rbp-18h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( !Callback || (v9 = a8) == 0LL || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v10 = *a3;
  v11 = a5;
  *a8 = 0LL;
  Guid = v10;
  RegGuidsContext = (void *)EtwpCreateRegGuidsContext((_DWORD)Callback, a2, (unsigned int)&Guid, a4, v11);
  if ( RegGuidsContext )
  {
    LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, RegGuidsContext, &RegHandle);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    else
      *v9 = RegHandle;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
