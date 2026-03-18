/*
 * XREFs of PopTraceSystemIdleTimeReset @ 0x14012E04C
 * Callers:
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleTimeReset(int a1, unsigned __int8 a2)
{
  REGHANDLE v3; // rbx
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      v4 = a2;
      v6 = &v4;
      UserData.Size = 4;
      v7 = 4;
      EtwWrite(v3, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET, 0LL, 2u, &UserData);
    }
  }
}
