/*
 * XREFs of Template_qqqqq @ 0x18000D49C
 * Callers:
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z.c)
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  int v8; // [rsp+20h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-31h] BYREF
  int *v10; // [rsp+40h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-19h]
  char *v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h]
  char *v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  char *v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+C8h] [rbp+67h] BYREF

  v18 = a4;
  UserData.Ptr = (ULONGLONG)&v8;
  v8 = 4;
  v10 = &v18;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v14 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v16 = &a7;
  return EventWrite(Microsoft_OneCore_MinInputHandle, a2, 5u, &UserData);
}
