/*
 * XREFs of ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0052FAC
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C004C664 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004C7CC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067B40 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0053DB4 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_DEVICE::UnreferencePinnedAllocation(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  char v7; // al
  __int64 v8; // rcx
  __int64 v10; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  if ( (_BYTE)a3 )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 41328LL));
  v7 = *((_BYTE *)a2 + 25);
  if ( (v7 & 1) != 0 )
  {
    *((_BYTE *)a2 + 25) = v7 & 0xFE;
    if ( v4 )
    {
      v8 = *(_QWORD *)this + 41328LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v11,
      (struct _KTHREAD **)(*((_QWORD *)this + 2) + 304LL),
      a3,
      a4);
    if ( !(*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)) )
      VIDMM_DEVICE::NotifyAllocationEvicted(this, a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    return 1;
  }
  else
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)this + 41328LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0;
  }
}
