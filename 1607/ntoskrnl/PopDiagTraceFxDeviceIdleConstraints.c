/*
 * XREFs of PopDiagTraceFxDeviceIdleConstraints @ 0x1402086DC
 * Callers:
 *     PopPluginRequestDeviceIdleConstraints @ 0x140204804 (PopPluginRequestDeviceIdleConstraints.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceIdleConstraints(__int64 a1, __int64 a2, int a3)
{
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  int v14; // [rsp+A0h] [rbp+30h] BYREF

  v14 = a3;
  v13 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      UserData.Size = 8;
      v7 = &v14;
      v8 = 4;
      v11 = 4 * a3;
      v10 = a2;
      EtwWrite(v5, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS, 0LL, 3u, &UserData);
    }
  }
}
