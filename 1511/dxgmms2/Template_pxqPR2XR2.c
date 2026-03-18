/*
 * XREFs of Template_pxqPR2XR2 @ 0x1C002230C
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0012654 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pxqPR2XR2(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h]
  va_list v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  __int64 v15; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v17; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v19; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  __int64 v21; // [rsp+D0h] [rbp+77h]
  __int64 v22; // [rsp+D8h] [rbp+7Fh]
  va_list va3; // [rsp+E0h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, _QWORD);
  v22 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  va_copy(v7, va2);
  v9 = v21;
  v12 = v22;
  v10 = 8 * v19;
  v13 = 8 * v19;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 8LL;
  v8 = 4LL;
  v11 = 0;
  v14 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventCreateSyncPoint, 0LL, 5u, &UserData);
}
