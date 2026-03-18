/*
 * XREFs of ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00693CC
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00690C0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D7AC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005B948 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D69C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

char __fastcall VIDMM_DEVICE::UnreferencePinnedAllocation(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2, char a3)
{
  char v6; // dl
  char v7; // dl
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 41672LL));
  v6 = *((_BYTE *)a2 + 25);
  if ( (v6 & 1) != 0 )
  {
    v7 = v6 & 0xFE;
    *((_BYTE *)a2 + 25) = v7;
    if ( (v7 & 1) != 0 && (v7 & 6) != 2 )
      *((_BYTE *)a2 + 25) = v7 | 4;
    if ( a3 )
    {
      v8 = *(_QWORD *)this + 41672LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v13,
      (struct _KTHREAD **)(*((_QWORD *)this + 2) + 328LL));
    if ( !(*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 42)) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
      VIDMM_DEVICE::NotifyAllocationEvicted(this, (__int64 **)a2);
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v10, v11);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 1;
  }
  else
  {
    if ( a3 )
    {
      v12 = *(_QWORD *)this + 41672LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0;
  }
}
