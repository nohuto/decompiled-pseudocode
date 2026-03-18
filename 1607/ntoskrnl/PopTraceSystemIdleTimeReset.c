/*
 * XREFs of PopTraceSystemIdleTimeReset @ 0x140007F70
 * Callers:
 *     PopResetIdleTime @ 0x140007F48 (PopResetIdleTime.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleTimeReset(int a1)
{
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET) )
    {
      UserData.Reserved = 0;
      v2 = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      EtwWrite(v1, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET, 0LL, 2u, &UserData);
    }
  }
}
