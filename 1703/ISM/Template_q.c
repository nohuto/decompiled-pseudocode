/*
 * XREFs of Template_q @ 0x18000D640
 * Callers:
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  int v3; // [rsp+20h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-30h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v3;
  v3 = 4;
  UserData.Size = 4;
  return EventWrite(Microsoft_OneCore_MinInputHandle, a2, 1u, &UserData);
}
