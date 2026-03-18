/*
 * XREFs of Template_phbq @ 0x1C00281D8
 * Callers:
 *     DpiDispatchInternalIoctl @ 0x1C00C2280 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C00C2CE0 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C00C4960 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C00CC7D0 (DpiDispatchPower.c)
 *     DpiDispatchSystemControl @ 0x1C0171730 (DpiDispatchSystemControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_phbq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  __int16 v4; // [rsp+30h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-11h] BYREF
  __int16 *v6; // [rsp+50h] [rbp-1h]
  __int64 v7; // [rsp+58h] [rbp+7h]
  __int64 v8; // [rsp+60h] [rbp+Fh]
  __int64 v9; // [rsp+68h] [rbp+17h]
  va_list v10; // [rsp+70h] [rbp+1Fh]
  __int64 v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v14; // [rsp+C0h] [rbp+6Fh]
  __int64 v15; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 72;
  v6 = &v4;
  v8 = v15;
  va_copy(v10, va1);
  v9 = 72LL;
  *(_QWORD *)&UserData.Size = 8LL;
  v7 = 2LL;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
