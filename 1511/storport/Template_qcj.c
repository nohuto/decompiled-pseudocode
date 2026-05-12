/*
 * XREFs of Template_qcj @ 0x1C0036080
 * Callers:
 *     RaUnitResetBusSrb @ 0x1C0032700 (RaUnitResetBusSrb.c)
 *     RaidUnitHierarchicalReset @ 0x1C0034460 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcj(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (unsigned __int64)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v10 = a6;
  v9 = 1LL;
  v11 = 16LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventBusReset, 0LL, 3u, &UserData);
}
