/*
 * XREFs of Template_pppnnn @ 0x1C00315FC
 * Callers:
 *     Etw_EndpointCreate @ 0x1C0030FB0 (Etw_EndpointCreate.c)
 *     Etw_EndpointDelete @ 0x1C003100C (Etw_EndpointDelete.c)
 *     Etw_EndpointRundown @ 0x1C003122C (Etw_EndpointRundown.c)
 *     Etw_EndpointUpdate @ 0x1C0031288 (Etw_EndpointUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pppnnn(_DWORD a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, __int64 a4, char a5, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  char *v7; // [rsp+40h] [rbp-59h]
  __int64 v8; // [rsp+48h] [rbp-51h]
  va_list v9; // [rsp+50h] [rbp-49h]
  __int64 v10; // [rsp+58h] [rbp-41h]
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  __int64 v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  __int64 v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  __int64 v17; // [rsp+D8h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v20; // [rsp+F0h] [rbp+57h]
  __int64 v21; // [rsp+F8h] [rbp+5Fh]
  __int64 v22; // [rsp+100h] [rbp+67h]
  __int64 v23; // [rsp+108h] [rbp+6Fh]
  __int64 v24; // [rsp+110h] [rbp+77h]
  __int64 v25; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v17 = a4;
  UserData.Ptr = (unsigned __int64)&v17;
  *(_QWORD *)&UserData.Size = 8LL;
  v7 = &a5;
  va_copy(v9, va);
  v11 = v21;
  v13 = v23;
  v15 = v25;
  v8 = 8LL;
  v10 = 8LL;
  v12 = 7LL;
  v14 = 6LL;
  v16 = 8LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, a2, a3, 6u, &UserData);
}
