/*
 * XREFs of DxgkIsPrimarySource @ 0x1C00C6310
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007A0C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

bool __fastcall DxgkIsPrimarySource(ADAPTER_DISPLAY **a1, int a2)
{
  bool v4; // bl
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  char v8; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+98h] [rbp+20h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)a1, 0LL);
  v4 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6) >= 0
    && ((*((_DWORD *)a1 + 71) & 1) != 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1)) )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(a1[248], &v7, &v9, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v8);
    v4 = a2 == v7;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v6);
  return v4;
}
