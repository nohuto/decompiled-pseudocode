/*
 * XREFs of ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C00079B4
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetLastCddIntegerVSync(DXGADAPTER **this, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 4266LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 4267LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)this[17] + 254 * v4 + 240) = a3;
}
