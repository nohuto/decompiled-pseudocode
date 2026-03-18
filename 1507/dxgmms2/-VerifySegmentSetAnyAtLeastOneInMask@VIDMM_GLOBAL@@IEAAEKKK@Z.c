/*
 * XREFs of ?VerifySegmentSetAnyAtLeastOneInMask@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0034010
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySegmentSetAnyAtLeastOneInMask(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3)
{
  _DWORD *v3; // rdx
  unsigned int v4; // r9d

  v3 = (_DWORD *)(*((_QWORD *)this + 4999) + 456LL * a2);
  v4 = v3[1];
  if ( (~*v3 & a3) != 0 || !a3 )
    return 0;
  while ( (a3 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4) + 56LL) & 0x1001) == 0 )
  {
    ++v4;
    a3 >>= 1;
    if ( !a3 )
      return 0;
  }
  return 1;
}
