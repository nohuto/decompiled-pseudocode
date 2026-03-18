/*
 * XREFs of ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C004A8F4
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00600F4 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSet(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  char v5; // r11
  unsigned int v6; // ebx
  unsigned int v7; // edx

  v5 = 0;
  v6 = *(_DWORD *)(456LL * a2 + *((_QWORD *)this + 5006) + 4);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~**((_DWORD **)this + 5006) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6) + 56LL)) )
      v7 |= 1 << v5;
    ++v5;
    ++v6;
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
