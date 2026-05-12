/*
 * XREFs of Template_pqtq @ 0x1C0032B18
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0019C00 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqtq(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-11h] BYREF
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  int *v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+6Fh]
  __int64 v16; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v13 = a4;
  UserData.Ptr = (unsigned __int64)&v13;
  v5 = 0;
  va_copy(v7, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = &v5;
  v8 = 4LL;
  va_copy(v11, va1);
  v10 = 4LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterPowerNotRequiredStart, 0LL, 4u, &UserData);
}
