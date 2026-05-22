/*
 * XREFs of Template_qqqqqqq @ 0x1800058F0
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006780 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001A4F0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqqqqq(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6, char a7, char a8, char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-61h] BYREF
  int *v11; // [rsp+30h] [rbp-51h]
  __int64 v12; // [rsp+38h] [rbp-49h]
  char *v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+48h] [rbp-39h]
  char *v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  char *v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  char *v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+D0h] [rbp+4Fh] BYREF
  int v24; // [rsp+D8h] [rbp+57h] BYREF

  v24 = a4;
  v23 = a3;
  UserData.Ptr = (ULONGLONG)&v23;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = &v24;
  v12 = 4LL;
  v13 = &a5;
  v14 = 4LL;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return EventWrite(Microsoft_OneCore_MinInputHandle, &MinInput_Log_InputInfo_Pointer, 7u, &UserData);
}
