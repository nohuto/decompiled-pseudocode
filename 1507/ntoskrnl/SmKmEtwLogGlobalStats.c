/*
 * XREFs of SmKmEtwLogGlobalStats @ 0x1405B5BD4
 * Callers:
 *     SmEtwEnableCallback @ 0x1405B5B3C (SmEtwEnableCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmKmEtwLogGlobalStats(REGHANDLE *a1, __int64 a2)
{
  REGHANDLE v2; // rcx
  int v4; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-30h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]

  v2 = *a1;
  v5.Ptr = (ULONGLONG)&v4;
  v4 = 896;
  v6 = a2;
  v7 = 896LL;
  *(_QWORD *)&v5.Size = 4LL;
  return EtwWriteEx(v2, &SmEventGlobalStats, 0LL, 0, 0LL, 0LL, 2u, &v5);
}
