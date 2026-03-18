/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0007934
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        PERESOURCE **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  PERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 3618LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 3619LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = this[17];
  v8 = 127 * v4;
  *(_OWORD *)&v7[v8 + 107] = *(_OWORD *)&a3->Width;
  *(_OWORD *)&v7[v8 + 109] = *(_OWORD *)&a3->RefreshRate.Numerator;
  v7[v8 + 111] = *(PERESOURCE *)&a3->DisplayFixedOutput;
  LODWORD(v7[v8 + 112]) = *((_DWORD *)&a3->Flags + 1);
}
