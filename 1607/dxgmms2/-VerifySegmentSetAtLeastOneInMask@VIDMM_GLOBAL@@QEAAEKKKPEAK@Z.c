/*
 * XREFs of ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00878CC
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(
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
  v6 = *(_DWORD *)(456LL * a2 + *((_QWORD *)this + 5017) + 4);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~**((_DWORD **)this + 5017) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6) + 56LL) & a4) == 0 )
      v7 |= 1 << v5;
    ++v5;
    ++v6;
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
