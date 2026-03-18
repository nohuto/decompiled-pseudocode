/*
 * XREFs of Template_xqnqNR3 @ 0x1C00C02D8
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x1C006EA10 (EtwTraceLifetimeAccum.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1C0074940 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceMoveRegion @ 0x1C00BFC60 (EtwTraceMoveRegion.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS Template_xqnqNR3(_DWORD a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  va_list v6; // [rsp+40h] [rbp-29h]
  __int64 v7; // [rsp+48h] [rbp-21h]
  __int64 v8; // [rsp+50h] [rbp-19h]
  __int64 v9; // [rsp+58h] [rbp-11h]
  va_list v10; // [rsp+60h] [rbp-9h]
  __int64 v11; // [rsp+68h] [rbp-1h]
  __int64 v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  __int64 v15; // [rsp+B8h] [rbp+4Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+57h] BYREF
  va_list va; // [rsp+C0h] [rbp+57h]
  __int64 v18; // [rsp+C8h] [rbp+5Fh]
  __int64 v19; // [rsp+D0h] [rbp+67h]
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+6Fh]
  __int64 v22; // [rsp+E0h] [rbp+77h]
  __int64 v23; // [rsp+E8h] [rbp+7Fh]
  va_list va2; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, _QWORD);
  v15 = a4;
  UserData.Ptr = (ULONGLONG)&v15;
  *(_QWORD *)&UserData.Size = 8LL;
  v14 = 0;
  va_copy(v6, va);
  v8 = v19;
  va_copy(v10, va1);
  v12 = v23;
  v13 = 16 * v20;
  v7 = 4LL;
  v9 = 16LL;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 5u, &UserData);
}
