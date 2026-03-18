/*
 * XREFs of Template_pqqNR2 @ 0x180127DD4
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A7594 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pqqNR2(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  int *v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  int *v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF
  int v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a4;
  v16 = a3;
  *(_QWORD *)&UserData.Size = 8LL;
  v15 = 0;
  UserData.Ptr = (ULONGLONG)&v16;
  v9 = &v17;
  v11 = &a5;
  v13 = a7;
  v10 = 4LL;
  v12 = 4LL;
  v14 = a6 * a5;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 4u, &UserData);
}
