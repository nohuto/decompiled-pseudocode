/*
 * XREFs of ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00340B8
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(VIDMM_GLOBAL *this, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r10
  char v5; // r11
  int v6; // ebx
  int v7; // esi
  int v8; // edx

  v4 = (_DWORD *)*((_QWORD *)this + 4999);
  v5 = 0;
  v6 = 0;
  v7 = v4[114 * a2 + 1];
  v8 = 0;
  if ( (~*v4 & a3) != 0 )
    return 0;
  if ( !a3 )
    return 1;
  do
  {
    if ( (a3 & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)(v7 + v6)) + 56LL) & a4) == 0 )
    {
      v8 |= 1 << v6;
    }
    ++v6;
    a3 >>= 1;
  }
  while ( a3 );
  if ( !v8 )
    return 1;
  return v5;
}
