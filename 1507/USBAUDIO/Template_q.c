/*
 * XREFs of Template_q @ 0x1C0001818
 * Callers:
 *     DeviceStop @ 0x1C00143F0 (DeviceStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(ExBusAudHandle, &EXBUS_DEVICE_STOP_EXIT, 0LL, 1u, &v5);
}
