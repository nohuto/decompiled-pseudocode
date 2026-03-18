/*
 * XREFs of ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00321E8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00588E0 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::CleanupAllocationCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_DEVICE *v4; // rax
  struct VIDMM_ALLOC **v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v8,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 2) + 304LL));
  if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38) )
  {
    v4 = (struct VIDMM_ALLOC *)((char *)a2 + 112);
    v5 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 14);
    v6 = (VIDMM_DEVICE **)*((_QWORD *)a2 + 15);
    if ( v5[1] != (struct VIDMM_ALLOC *)((char *)a2 + 112) || *v6 != v4 )
      __fastfail(3u);
    *v6 = (VIDMM_DEVICE *)v5;
    v5[1] = (struct VIDMM_ALLOC *)v6;
    v7 = (VIDMM_DEVICE **)*((_QWORD *)this + 20);
    *(_QWORD *)v4 = (char *)this + 152;
    *((_QWORD *)a2 + 15) = v7;
    if ( *v7 != (VIDMM_DEVICE *)((char *)this + 152) )
      __fastfail(3u);
    *v7 = v4;
    *((_QWORD *)this + 20) = v4;
    VIDMM_DEVICE::DecrementCurrentUsage(this, a2);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
