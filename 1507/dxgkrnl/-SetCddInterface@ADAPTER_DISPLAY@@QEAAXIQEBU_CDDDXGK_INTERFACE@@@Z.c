/*
 * XREFs of ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006668
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00B00C0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddInterface(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _CDDDXGK_INTERFACE *const a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v6 + 24) = 3984LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 3985LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this[14] + 126 * v4 + 10) = a3;
}
