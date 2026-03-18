/*
 * XREFs of DxgkIsPrimarySource @ 0x1C00DB070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C000678C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall DxgkIsPrimarySource(ADAPTER_DISPLAY **this, int a2)
{
  bool v4; // bl
  _BYTE v6[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+90h] [rbp+8h] BYREF
  char v8; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+A8h] [rbp+20h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)this, 0LL);
  v4 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6) >= 0
    && ((*((_DWORD *)this + 75) & 1) != 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this)) )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(this[266], &v7, &v9, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v8);
    v4 = a2 == v7;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v6);
  return v4;
}
