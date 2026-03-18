/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00060F4
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  DXGADAPTER *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 3799LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 3800LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = this[14];
  v8 = 1016 * v4;
  *(_OWORD *)((char *)v7 + v8 + 864) = *(_OWORD *)&a3->Width;
  *(_OWORD *)((char *)v7 + v8 + 880) = *(_OWORD *)&a3->RefreshRate.Numerator;
  *(_QWORD *)((char *)v7 + v8 + 896) = *(_QWORD *)&a3->DisplayFixedOutput;
  *(_DWORD *)((char *)v7 + v8 + 904) = *((_DWORD *)&a3->Flags + 1);
}
