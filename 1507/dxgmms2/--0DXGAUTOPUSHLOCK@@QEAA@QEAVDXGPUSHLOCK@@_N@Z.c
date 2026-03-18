/*
 * XREFs of ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0005E14
 * Callers:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005D28 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C004B904 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0059158 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C005B3AC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCK *__fastcall DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
        DXGAUTOPUSHLOCK *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( !(_BYTE)a3 && a2 && a2[1] == KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
