/*
 * XREFs of Template_ppqpttq @ 0x1C0022920
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0040484 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateDevice @ 0x1C0040DE0 (VidSchTerminateDevice.c)
 *     VidSchiMarkDevicesInError @ 0x1C009FF24 (VidSchiMarkDevicesInError.c)
 *     VidSchReportAdapter @ 0x1C00A12B0 (VidSchReportAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqpttq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  va_list v6; // [rsp+50h] [rbp-49h]
  __int64 v7; // [rsp+58h] [rbp-41h]
  va_list v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  va_list v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  va_list v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  va_list v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  int *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  __int64 v18; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v20; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v22; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v24; // [rsp+100h] [rbp+67h] BYREF
  va_list va3; // [rsp+100h] [rbp+67h]
  __int64 v26; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+108h] [rbp+6Fh]
  va_list va5; // [rsp+110h] [rbp+77h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v26 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 0;
  va_copy(v6, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v8, va2);
  v7 = 8LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  v16 = &v4;
  v9 = 4LL;
  v11 = 8LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 7u, &UserData);
}
