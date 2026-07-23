/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x140671258
 * Callers:
 *     PopFxCaptureDeviceAccounting @ 0x140202140 (PopFxCaptureDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140203D7C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentAccounting(__int64 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+4Ch] [rbp-34h]
  int *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  __int64 *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+18h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF

  v3 = &retaddr;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_ACCOUNTING);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&PopWdiCurrentScenarioInstanceId;
      v7 = &v17;
      v10 = &v18;
      v8 = 8;
      v13 = &v19;
      v14 = 8;
      UserData.Size = 1;
      v11 = 4;
      LOBYTE(v3) = EtwWrite(v4, &POP_ETW_EVENT_COMPONENT_ACCOUNTING, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
