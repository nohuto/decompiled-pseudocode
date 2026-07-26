/*
 * XREFs of Template_xqq @ 0x1C006A7BC
 * Callers:
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068E80 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

NTSTATUS Template_xqq(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  va_list va2; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  v8 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &NicActiveRefRundownEntry, a3, 3u, &UserData);
}
