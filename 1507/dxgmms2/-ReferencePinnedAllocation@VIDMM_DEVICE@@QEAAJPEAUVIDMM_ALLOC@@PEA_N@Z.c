/*
 * XREFs of ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0059158
 * Callers:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00510D0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0005E14 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058D88 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(VIDMM_DEVICE *this, __int64 **a2, bool *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  char v9; // al
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF

  v6 = **a2;
  if ( *(_BYTE *)(v6 + 93) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, v6);
    *(_QWORD *)(v7 + 24) = a2;
    WdLogEvent5_WdAssertion(v7);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*(_QWORD *)this + 41272LL), 0LL, v6);
    DXGPUSHLOCK::AcquireExclusive(v11);
    v9 = *((_BYTE *)a2 + 25);
    v12 = 2;
    if ( (v9 & 1) != 0 )
    {
      *a3 = 1;
      *((_BYTE *)a2 + 25) = v9 | 4;
    }
    else
    {
      *((_BYTE *)a2 + 25) = v9 | 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v13,
        (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 2) + 304LL));
      if ( !*((_DWORD *)a2 + 38) )
        VIDMM_DEVICE::NotifyAllocationResident(this, a2);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      *a3 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0LL;
  }
}
