/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18006A040
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x18006A000 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     EtwNotificationRegister @ 0x180038BC0 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x18006A108 (EtwpCreateRegGuidsContext.c)
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
