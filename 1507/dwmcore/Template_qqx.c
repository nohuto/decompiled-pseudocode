/*
 * XREFs of Template_qqx @ 0x1800E3E64
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180045720 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180046620 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x180068EB4 (-Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqx(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  char *v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  UserData.Ptr = (ULONGLONG)&v11;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = &v12;
  v8 = 4LL;
  v9 = &a5;
  v10 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_ROUNDTRIPREQUEST_STATE, 3u, &UserData);
}
