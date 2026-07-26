/*
 * XREFs of Template_cjjp @ 0x1C006F068
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cjjp(__int64 a1, __int64 a2, const GUID *a3, char a4, int a5, __int64 a6, char a7)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  GUID *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  UserData.Ptr = (unsigned __int64)&v15;
  *(_QWORD *)&UserData.Size = 1LL;
  v9 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING;
  v11 = a6;
  v13 = &a7;
  v10 = 16LL;
  v12 = 16LL;
  v14 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &MiniportSleepStudyDevicePdo, a3, 4u, &UserData);
}
