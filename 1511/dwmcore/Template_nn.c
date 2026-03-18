/*
 * XREFs of Template_nn @ 0x18014AB84
 * Callers:
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A65C (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_nn(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, int a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v10 = 0;
  UserData.Ptr = a4;
  v8 = a6;
  UserData.Size = 8;
  v9 = 16;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &MILEVENT_MEDIA_UCE_BLTINDESKTOP_RECT, 2u, &UserData);
}
