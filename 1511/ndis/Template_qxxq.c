/*
 * XREFs of Template_qxxq @ 0x1C006A5B8
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0069040 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qxxq(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6, char a7)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  UserData.Ptr = (unsigned __int64)&v15;
  v10 = 8LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &a5;
  v11 = &a6;
  v13 = &a7;
  v12 = 8LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &MiniportCsStats, a3, 4u, &UserData);
}
