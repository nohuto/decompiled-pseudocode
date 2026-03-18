/*
 * XREFs of Template_ppqxxx @ 0x1C00B7518
 * Callers:
 *     EtwTraceTokenCompositionSurfaceObjectEvent @ 0x1C0017040 (EtwTraceTokenCompositionSurfaceObjectEvent.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqxxx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  va_list v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  va_list v7; // [rsp+50h] [rbp-21h]
  __int64 v8; // [rsp+58h] [rbp-19h]
  va_list v9; // [rsp+60h] [rbp-11h]
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
  __int64 v21; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E0h] [rbp+6Fh]
  __int64 v23; // [rsp+E8h] [rbp+77h] BYREF
  va_list va4; // [rsp+E8h] [rbp+77h]
  va_list va5; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va5, a3);
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
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  v8 = 4LL;
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  v10 = 8LL;
  v12 = 8LL;
  v14 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TokenCompositionSurfaceObjectEvent, &W32kControlGuid, 6u, &UserData);
}
