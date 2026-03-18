/*
 * XREFs of Template_pqXR1PR1q @ 0x1C001FC6C
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqXR1PR1q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h]
  __int64 v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+6Ch] [rbp+13h]
  va_list v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v17; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v19; // [rsp+C8h] [rbp+6Fh]
  __int64 v20; // [rsp+D0h] [rbp+77h]
  va_list va2; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _QWORD);
  v20 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  v7 = v19;
  v10 = v20;
  va_copy(v13, va2);
  v8 = 8 * v17;
  v9 = 0;
  v11 = 8 * v17;
  v12 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventUnwaitCpuWaiter, 0LL, 5u, &UserData);
}
