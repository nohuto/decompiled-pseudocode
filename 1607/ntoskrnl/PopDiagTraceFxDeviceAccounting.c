/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x140208620
 * Callers:
 *     PopFxCaptureDeviceAccounting @ 0x140202140 (PopFxCaptureDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140203D7C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+40h] [rbp-30h]
  int v5; // [rsp+48h] [rbp-28h]
  int v6; // [rsp+4Ch] [rbp-24h]
  __int64 *v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int64 v10; // [rsp+80h] [rbp+10h] BYREF
  __int64 v11; // [rsp+88h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_ACCOUNTING) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&PopWdiCurrentScenarioInstanceId;
      v5 = 8;
      v4 = &v10;
      v7 = &v11;
      v8 = 8;
      UserData.Size = 1;
      EtwWrite(v2, &POP_ETW_EVENT_DEVICE_ACCOUNTING, 0LL, 3u, &UserData);
    }
  }
}
