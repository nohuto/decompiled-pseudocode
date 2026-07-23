/*
 * XREFs of Template_xxxqqqq @ 0x1401B9E00
 * Callers:
 *     FsRtlHeatLogTierMove @ 0x14061F8F4 (FsRtlHeatLogTierMove.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS Template_xxxqqqq(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  va_list v5; // [rsp+40h] [rbp-49h]
  __int64 v6; // [rsp+48h] [rbp-41h]
  va_list v7; // [rsp+50h] [rbp-39h]
  __int64 v8; // [rsp+58h] [rbp-31h]
  va_list v9; // [rsp+60h] [rbp-29h]
  __int64 v10; // [rsp+68h] [rbp-21h]
  va_list v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  va_list v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  va_list v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  __int64 v17; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+4Fh]
  __int64 v19; // [rsp+E0h] [rbp+57h] BYREF
  va_list va1; // [rsp+E0h] [rbp+57h]
  __int64 v21; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+5Fh]
  __int64 v23; // [rsp+F0h] [rbp+67h] BYREF
  va_list va3; // [rsp+F0h] [rbp+67h]
  __int64 v25; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+F8h] [rbp+6Fh]
  __int64 v27; // [rsp+100h] [rbp+77h] BYREF
  va_list va5; // [rsp+100h] [rbp+77h]
  va_list va6; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
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
  va_copy(va5, va4);
  v25 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v27 = va_arg(va6, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  va_copy(v15, va6);
  v8 = 8LL;
  v10 = 4LL;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  return EtwWrite(Microsoft_Windows_Storage_Tiering_IoHeatHandle, &TieredStorage_TierMove, a3, 7u, &UserData);
}
