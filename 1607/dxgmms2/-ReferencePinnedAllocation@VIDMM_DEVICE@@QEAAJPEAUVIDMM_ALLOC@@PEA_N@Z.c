/*
 * XREFs of ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00692F8
 * Callers:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00690C0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000FCC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D69C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0073E34 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(
        VIDMM_PROCESS_ADAPTER_INFO **this,
        struct VIDMM_ALLOC *a2,
        bool *a3)
{
  char v6; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( *(_BYTE *)(**(_QWORD **)a2 + 96LL) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdAssertion(v10);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)*this + 5209, 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    v6 = *((_BYTE *)a2 + 25);
    v13 = 2;
    if ( (v6 & 1) != 0 )
    {
      *a3 = 1;
      *((_BYTE *)a2 + 25) = v6 | 4;
    }
    else
    {
      *((_BYTE *)a2 + 25) = v6 | 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
        (struct _KTHREAD **)this[2] + 41);
      if ( !*((_DWORD *)a2 + 42) )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(this[2]);
        VIDMM_DEVICE::NotifyAllocationResident((VIDMM_DEVICE *)this, a2);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(this[2], v8, v9);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
      *a3 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    return 0LL;
  }
}
