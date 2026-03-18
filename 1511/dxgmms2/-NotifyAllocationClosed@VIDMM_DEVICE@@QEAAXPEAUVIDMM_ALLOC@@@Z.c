/*
 * XREFs of ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0079A08
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationClosed(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v9,
      (struct _KTHREAD **)(v5 + 304),
      a3,
      a4);
    v6 = (_QWORD *)((char *)a2 + 112);
    v7 = *((_QWORD *)a2 + 14);
    v8 = (_QWORD *)*((_QWORD *)a2 + 15);
    if ( *(struct VIDMM_ALLOC **)(v7 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 112) || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)a2 + 15) = 0LL;
    *v6 = 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  }
}
