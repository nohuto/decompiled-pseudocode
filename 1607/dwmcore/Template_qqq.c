/*
 * XREFs of Template_qqq @ 0x18011718C
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18003BEB0 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BC0 (-EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BE0 (-EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqq(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, char a5)
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
  v10 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 3u, &UserData);
}
