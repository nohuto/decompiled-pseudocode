/*
 * XREFs of ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00380B0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationOpened(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rdx
  VIDMM_DEVICE **v5; // rdx
  VIDMM_DEVICE *v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
      (struct DXGPUSHLOCK *const)(v4 + 304));
    v5 = (VIDMM_DEVICE **)*((_QWORD *)this + 20);
    v6 = (struct VIDMM_ALLOC *)((char *)a2 + 112);
    *((_QWORD *)a2 + 14) = (char *)this + 152;
    *((_QWORD *)a2 + 15) = v5;
    if ( *v5 != (VIDMM_DEVICE *)((char *)this + 152) )
      __fastfail(3u);
    *v5 = v6;
    *((_QWORD *)this + 20) = v6;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
