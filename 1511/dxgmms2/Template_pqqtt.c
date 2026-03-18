/*
 * XREFs of Template_pqqtt @ 0x1C00202B8
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqtt(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  va_list v6; // [rsp+50h] [rbp-19h]
  __int64 v7; // [rsp+58h] [rbp-11h]
  va_list v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  va_list v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  __int64 v14; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v16; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v18; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  va_list va3; // [rsp+E0h] [rbp+77h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v4 = 0;
  va_copy(v6, va1);
  va_copy(v8, va2);
  va_copy(v10, va3);
  v7 = 4LL;
  v12 = &v4;
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventQueueComplete, 0LL, 5u, &UserData);
}
