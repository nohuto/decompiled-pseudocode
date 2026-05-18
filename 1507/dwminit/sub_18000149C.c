/*
 * XREFs of sub_18000149C @ 0x18000149C
 * Callers:
 *     sub_180002608 @ 0x180002608 (sub_180002608.c)
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 *     DwmpNotifyUserLogon @ 0x180002E70 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003080 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18000149C(int a1, int a2, int a3, __int64 a4)
{
  ULONG result; // eax
  int v5; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-19h] BYREF
  GUID *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF
  int v16; // [rsp+D0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  if ( (unsigned int)dword_18000C020 > 4 )
  {
    v8 = 16LL;
    v7 = &ActivityId;
    v9 = &v5;
    v11 = &v15;
    v13 = &v16;
    v5 = a1;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    return sub_1800010DC((__int64)&dword_18000C020, (unsigned __int8 *)dword_180009776, 4LL, a4, 6u, &v6);
  }
  return result;
}
