/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000E214
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        PERESOURCE **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  PERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 3479LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 3480LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = this[14];
  v7 = 126 * v4;
  *(_OWORD *)&v6[v7 + 107] = *(_OWORD *)&a3->Width;
  *(_OWORD *)&v6[v7 + 109] = *(_OWORD *)&a3->RefreshRate.Numerator;
  v6[v7 + 111] = *(PERESOURCE *)&a3->DisplayFixedOutput;
  LODWORD(v6[v7 + 112]) = *((_DWORD *)&a3->Flags + 1);
}
