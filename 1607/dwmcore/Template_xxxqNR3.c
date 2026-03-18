/*
 * XREFs of Template_xxxqNR3 @ 0x1801206B8
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxxqNR3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-48h]
  char *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  int *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  v19 = a3;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 8LL;
  v18 = 0;
  v10 = &v20;
  v12 = &a5;
  v14 = &a6;
  v16 = a8;
  v17 = 16 * a6;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_BLT, 5u, &UserData);
}
