/*
 * XREFs of Template_qqqq @ 0x1C001BE48
 * Callers:
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C00219D8 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0021BA0 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00959C4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0153924 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C015B22C (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  UserData.Ptr = (ULONGLONG)&v15;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &a5;
  v10 = 4LL;
  v11 = &a6;
  v13 = &a7;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
