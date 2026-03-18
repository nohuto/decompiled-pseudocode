/*
 * XREFs of Template_xnn @ 0x180124694
 * Callers:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180063E6C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A148 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xnn(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF

  v13 = a3;
  UserData.Ptr = (ULONGLONG)&v13;
  v9 = a5;
  v11 = a7;
  *(_QWORD *)&UserData.Size = 8LL;
  v10 = 16LL;
  v12 = 16LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 3u, &UserData);
}
