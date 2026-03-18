/*
 * XREFs of Template_ppqqxqq @ 0x1C001F424
 * Callers:
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0068D7C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqqxqq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-69h] BYREF
  int v5; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  int *v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  int *v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  va_list v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  va_list v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  va_list v17; // [rsp+A0h] [rbp+7h]
  __int64 v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v21; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v23; // [rsp+F8h] [rbp+5Fh]
  __int64 v24; // [rsp+100h] [rbp+67h]
  __int64 v25; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+6Fh]
  __int64 v27; // [rsp+110h] [rbp+77h] BYREF
  va_list va3; // [rsp+110h] [rbp+77h]
  va_list va4; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v5 = 2;
  v4 = 0;
  va_copy(v7, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = &v4;
  v8 = 8LL;
  v11 = &v5;
  va_copy(v13, va2);
  va_copy(v15, va3);
  va_copy(v17, va4);
  v10 = 4LL;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventProcessPolicyChange, 0LL, 7u, &UserData);
}
