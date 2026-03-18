/*
 * XREFs of Template_pqxqqipqx @ 0x1C0021D7C
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C015F520 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_pqxqqipqx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-B9h] BYREF
  int v5; // [rsp+38h] [rbp-B1h] BYREF
  int v6; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v7; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v8; // [rsp+50h] [rbp-99h] BYREF
  __int64 v9; // [rsp+58h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-89h] BYREF
  int *v11; // [rsp+70h] [rbp-79h]
  __int64 v12; // [rsp+78h] [rbp-71h]
  __int64 *v13; // [rsp+80h] [rbp-69h]
  __int64 v14; // [rsp+88h] [rbp-61h]
  va_list v15; // [rsp+90h] [rbp-59h]
  __int64 v16; // [rsp+98h] [rbp-51h]
  int *v17; // [rsp+A0h] [rbp-49h]
  __int64 v18; // [rsp+A8h] [rbp-41h]
  va_list v19; // [rsp+B0h] [rbp-39h]
  __int64 v20; // [rsp+B8h] [rbp-31h]
  __int64 *v21; // [rsp+C0h] [rbp-29h]
  __int64 v22; // [rsp+C8h] [rbp-21h]
  int *v23; // [rsp+D0h] [rbp-19h]
  __int64 v24; // [rsp+D8h] [rbp-11h]
  __int64 *v25; // [rsp+E0h] [rbp-9h]
  __int64 v26; // [rsp+E8h] [rbp-1h]
  __int64 v27; // [rsp+128h] [rbp+3Fh] BYREF
  va_list va; // [rsp+128h] [rbp+3Fh]
  __int64 v29; // [rsp+130h] [rbp+47h]
  __int64 v30; // [rsp+138h] [rbp+4Fh]
  __int64 v31; // [rsp+140h] [rbp+57h] BYREF
  va_list va1; // [rsp+140h] [rbp+57h]
  __int64 v33; // [rsp+148h] [rbp+5Fh]
  va_list va2; // [rsp+150h] [rbp+67h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = 0LL;
  v11 = &v5;
  v6 = 0;
  v13 = &v7;
  va_copy(v15, va1);
  v17 = &v4;
  va_copy(v19, va2);
  v21 = &v9;
  v23 = &v6;
  v25 = &v8;
  v9 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v5 = 0;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventVSyncDPC, 0LL, 9u, &UserData);
}
