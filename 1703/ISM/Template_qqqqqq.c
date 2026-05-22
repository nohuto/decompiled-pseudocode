/*
 * XREFs of Template_qqqqqq @ 0x18000D530
 * Callers:
 *     ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18000E420 (-OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqqqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  int v9; // [rsp+20h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-49h] BYREF
  int *v11; // [rsp+40h] [rbp-39h]
  __int64 v12; // [rsp+48h] [rbp-31h]
  char *v13; // [rsp+50h] [rbp-29h]
  __int64 v14; // [rsp+58h] [rbp-21h]
  char *v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  char *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  char *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+D8h] [rbp+5Fh] BYREF

  v21 = a4;
  UserData.Ptr = (ULONGLONG)&v9;
  v9 = 4;
  v11 = &v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = &a5;
  v12 = 4LL;
  v15 = &a6;
  v17 = &a7;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v19 = &a8;
  return EventWrite(Microsoft_OneCore_MinInputHandle, &MinInput_Log_PointerInfoFrame_PointerInfo, 6u, &UserData);
}
