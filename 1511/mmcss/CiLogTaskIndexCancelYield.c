/*
 * XREFs of CiLogTaskIndexCancelYield @ 0x1C00039D4
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00019E0 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexCancelYield(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 104;
  return EtwWrite(RegHandle, &CiTaskIndexYieldCancelEvent, 0LL, 1u, &UserData);
}
