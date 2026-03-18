/*
 * XREFs of Template_pqPR1XR1pq @ 0x1C0026558
 * Callers:
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00C84BC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqPR1XR1pq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  va_list v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  __int64 v7; // [rsp+50h] [rbp-21h]
  int v8; // [rsp+58h] [rbp-19h]
  int v9; // [rsp+5Ch] [rbp-15h]
  __int64 v10; // [rsp+60h] [rbp-11h]
  int v11; // [rsp+68h] [rbp-9h]
  int v12; // [rsp+6Ch] [rbp-5h]
  va_list v13; // [rsp+70h] [rbp-1h]
  __int64 v14; // [rsp+78h] [rbp+7h]
  va_list v15; // [rsp+80h] [rbp+Fh]
  __int64 v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+C8h] [rbp+57h] BYREF
  va_list va; // [rsp+C8h] [rbp+57h]
  __int64 v19; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+5Fh]
  __int64 v21; // [rsp+D8h] [rbp+67h]
  __int64 v22; // [rsp+E0h] [rbp+6Fh]
  __int64 v23; // [rsp+E8h] [rbp+77h] BYREF
  va_list va2; // [rsp+E8h] [rbp+77h]
  va_list va3; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v8 = 8 * v19;
  va_copy(v5, va1);
  v7 = v21;
  v10 = v22;
  va_copy(v13, va2);
  va_copy(v15, va3);
  v9 = 0;
  v11 = 8 * v19;
  v12 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventWaitForSynchronizationObjectFromCpu, 0LL, 6u, &UserData);
}
