/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C00CC4C8
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00CC404 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00CC474 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 i; // rdi
  __int64 j; // rsi
  __int64 v5; // rcx
  __int64 k; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 1388LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 20);
  for ( i = *((_QWORD *)this + 7); i; i = *(_QWORD *)(i + 40) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v8 + 24) = 420LL;
      WdLogEvent5_WdAssertion(v8);
    }
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 64) )
      DXGDEVICE::DisablePinnedAllocation(this, (struct _VIDMM_MULTI_ALLOC **)j);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 17);
  for ( k = *((_QWORD *)this + 6); k; k = *(_QWORD *)(k + 64) )
    DXGDEVICE::DisablePinnedAllocation(this, (struct _VIDMM_MULTI_ALLOC **)k);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
