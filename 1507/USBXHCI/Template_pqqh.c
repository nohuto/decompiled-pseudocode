/*
 * XREFs of Template_pqqh @ 0x1C00168D4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0002100 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqh(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF
  va_list va2; // [rsp+B8h] [rbp+38h]
  va_list va3; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  v8 = 4LL;
  v10 = 2LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, a2, 0LL, 4u, &UserData);
}
