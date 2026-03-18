/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C00E0D20
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00E0B40 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0C3C (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00E0C90 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rcx
  struct DXGRESOURCE *i; // rdi
  __int64 j; // rdi
  __int64 v5; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, (struct _KTHREAD **)this + 20);
  for ( i = (struct DXGRESOURCE *)*((_QWORD *)this + 7); i; i = (struct DXGRESOURCE *)*((_QWORD *)i + 5) )
    DXGDEVICE::DisablePinnedResource(this, i);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, (struct _KTHREAD **)this + 17);
  for ( j = *((_QWORD *)this + 6); j; j = *(_QWORD *)(j + 64) )
    DXGDEVICE::DisablePinnedAllocation(this, (struct _VIDMM_MULTI_ALLOC **)j);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
