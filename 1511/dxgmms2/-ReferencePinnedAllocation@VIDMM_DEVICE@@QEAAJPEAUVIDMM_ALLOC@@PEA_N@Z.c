/*
 * XREFs of ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0052EE8
 * Callers:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004C7CC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011AFC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0053E0C (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(VIDMM_DEVICE *this, __int64 **a2, bool *a3)
{
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  v6 = **a2;
  if ( *(_BYTE *)(v6 + 93) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, v6);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdAssertion(v11);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*(_QWORD *)this + 41328LL), 0LL, v6);
    DXGPUSHLOCK::AcquireExclusive(v13);
    v7 = *((_BYTE *)a2 + 25);
    v14 = 2;
    if ( (v7 & 1) != 0 )
    {
      *a3 = 1;
      *((_BYTE *)a2 + 25) = v7 | 4;
    }
    else
    {
      *((_BYTE *)a2 + 25) = v7 | 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v15,
        (struct _KTHREAD **)(*((_QWORD *)this + 2) + 304LL),
        v8,
        v9);
      if ( !*((_DWORD *)a2 + 38) )
        VIDMM_DEVICE::NotifyAllocationResident(this, (struct VIDMM_ALLOC *)a2);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      *a3 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 0LL;
  }
}
