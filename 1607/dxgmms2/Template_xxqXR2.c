/*
 * XREFs of Template_xxqXR2 @ 0x1C00205C0
 * Callers:
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065E88 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS Template_xxqXR2(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF
  va_list va2; // [rsp+B8h] [rbp+38h]
  __int64 v18; // [rsp+C0h] [rbp+40h]
  va_list va3; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v18 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 8LL;
  va_copy(v5, va1);
  va_copy(v7, va2);
  v9 = v18;
  v10 = 8 * v16;
  v8 = 4LL;
  v11 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventLockAllocationBackingStore, 0LL, 4u, &UserData);
}
