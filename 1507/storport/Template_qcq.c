/*
 * XREFs of Template_qcq @ 0x1C003458C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaidUnitClaimIrp @ 0x1C0003EF0 (RaidUnitClaimIrp.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000ED80 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcq(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, char a5)
{
  int v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  char *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  UserData.Ptr = (unsigned __int64)&v7;
  *(_QWORD *)&UserData.Size = 4LL;
  v6 = 0;
  v9 = &a5;
  v11 = &v6;
  v7 = 3;
  v10 = 1LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventQueue, a3, 3u, &UserData);
}
