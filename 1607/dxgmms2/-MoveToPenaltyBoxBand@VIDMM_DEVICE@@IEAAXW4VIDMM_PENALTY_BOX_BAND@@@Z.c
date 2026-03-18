/*
 * XREFs of ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00691B8
 * Callers:
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0069218 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0090D74 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(struct _KTHREAD **)(*(_QWORD *)a1 + 41528LL) == KeGetCurrentThread() )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2, a3, a4);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v8,
      (struct _KTHREAD **)(*(_QWORD *)a1 + 41520LL));
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2, v6, v7);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  }
}
