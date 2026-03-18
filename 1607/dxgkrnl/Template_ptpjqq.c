/*
 * XREFs of Template_ptpjqq @ 0x1C00321BC
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS Template_ptpjqq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  va_list v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  va_list v7; // [rsp+50h] [rbp-21h]
  __int64 v8; // [rsp+58h] [rbp-19h]
  __int64 v9; // [rsp+60h] [rbp-11h]
  __int64 v10; // [rsp+68h] [rbp-9h]
  va_list v11; // [rsp+70h] [rbp-1h]
  __int64 v12; // [rsp+78h] [rbp+7h]
  va_list v13; // [rsp+80h] [rbp+Fh]
  __int64 v14; // [rsp+88h] [rbp+17h]
  __int64 v15; // [rsp+C8h] [rbp+57h] BYREF
  va_list va; // [rsp+C8h] [rbp+57h]
  __int64 v17; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+5Fh]
  __int64 v19; // [rsp+D8h] [rbp+67h] BYREF
  va_list va2; // [rsp+D8h] [rbp+67h]
  __int64 v21; // [rsp+E0h] [rbp+6Fh]
  __int64 v22; // [rsp+E8h] [rbp+77h] BYREF
  va_list va3; // [rsp+E8h] [rbp+77h]
  va_list va4; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  v9 = v21;
  va_copy(v11, va3);
  va_copy(v13, va4);
  v8 = 8LL;
  v10 = 16LL;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventOPMConfigureProtectedOutput, 0LL, 6u, &UserData);
}
