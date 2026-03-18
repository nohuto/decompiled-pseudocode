/*
 * XREFs of Template_pqqqPR3XR3 @ 0x1C0023188
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqqPR3XR3(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  va_list v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  va_list v7; // [rsp+50h] [rbp-21h]
  __int64 v8; // [rsp+58h] [rbp-19h]
  va_list v9; // [rsp+60h] [rbp-11h]
  __int64 v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+70h] [rbp-1h]
  int v12; // [rsp+78h] [rbp+7h]
  int v13; // [rsp+7Ch] [rbp+Bh]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  int v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+8Ch] [rbp+1Bh]
  __int64 v17; // [rsp+C8h] [rbp+57h] BYREF
  va_list va; // [rsp+C8h] [rbp+57h]
  __int64 v19; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+5Fh]
  __int64 v21; // [rsp+D8h] [rbp+67h] BYREF
  va_list va2; // [rsp+D8h] [rbp+67h]
  __int64 v23; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E0h] [rbp+6Fh]
  __int64 v25; // [rsp+E8h] [rbp+77h]
  __int64 v26; // [rsp+F0h] [rbp+7Fh]
  va_list va4; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, _QWORD);
  v26 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  va_copy(v7, va2);
  va_copy(v9, va3);
  v11 = v25;
  v14 = v26;
  v12 = 8 * v23;
  v15 = 8 * v23;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v8 = 4LL;
  v10 = 4LL;
  v13 = 0;
  v16 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventSignalQueueSubmit, 0LL, 6u, &UserData);
}
