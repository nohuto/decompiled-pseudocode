/*
 * XREFs of ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C000E290
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetLastCddIntegerVSync(DXGADAPTER **this, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v6 + 24) = 4118LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 4119LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_DWORD *)this[14] + 252 * v4 + 240) = a3;
}
