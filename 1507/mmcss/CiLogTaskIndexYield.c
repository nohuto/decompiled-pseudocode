/*
 * XREFs of CiLogTaskIndexYield @ 0x1C00039B4
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0001FA0 (CiSchedulerTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002AA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexYield(__int64 a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v3.Size = 4LL;
  v3.Ptr = a1 + 104;
  v5 = 4LL;
  v4 = &v6;
  return EtwWrite(RegHandle, &CiTaskIndexYieldEvent, 0LL, 2u, &v3);
}
