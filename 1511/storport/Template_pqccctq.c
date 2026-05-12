/*
 * XREFs of Template_pqccctq @ 0x1C002F784
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002EED0 (StorPortUnitPowerNotRequiredStep1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS Template_pqccctq(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4, char a5, char a6, char a7, ...)
{
  int v8; // [rsp+30h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  char *v10; // [rsp+50h] [rbp-49h]
  __int64 v11; // [rsp+58h] [rbp-41h]
  char *v12; // [rsp+60h] [rbp-39h]
  __int64 v13; // [rsp+68h] [rbp-31h]
  char *v14; // [rsp+70h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-21h]
  va_list v16; // [rsp+80h] [rbp-19h]
  __int64 v17; // [rsp+88h] [rbp-11h]
  int *v18; // [rsp+90h] [rbp-9h]
  __int64 v19; // [rsp+98h] [rbp-1h]
  va_list v20; // [rsp+A0h] [rbp+7h]
  __int64 v21; // [rsp+A8h] [rbp+Fh]
  __int64 v22; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v23; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va; // [rsp+108h] [rbp+6Fh]
  __int64 v25; // [rsp+110h] [rbp+77h]
  va_list va1; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v22 = a4;
  UserData.Ptr = (unsigned __int64)&v22;
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = 0;
  v10 = &a5;
  v11 = 4LL;
  v12 = &a6;
  v13 = 1LL;
  v14 = &a7;
  va_copy(v16, va);
  v18 = &v8;
  va_copy(v20, va1);
  v15 = 1LL;
  v17 = 1LL;
  v19 = 4LL;
  v21 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPowerNotRequiredStart, 0LL, 7u, &UserData);
}
