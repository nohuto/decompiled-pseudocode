/*
 * XREFs of Template_xxqNR2 @ 0x180109F20
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxqNR2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  int *v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a4;
  v16 = a3;
  UserData.Ptr = (ULONGLONG)&v16;
  *(_QWORD *)&UserData.Size = 8LL;
  v15 = 0;
  v9 = &v17;
  v11 = &a5;
  v13 = a7;
  v14 = 16 * a5;
  v10 = 8LL;
  v12 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDI, 4u, &UserData);
}
