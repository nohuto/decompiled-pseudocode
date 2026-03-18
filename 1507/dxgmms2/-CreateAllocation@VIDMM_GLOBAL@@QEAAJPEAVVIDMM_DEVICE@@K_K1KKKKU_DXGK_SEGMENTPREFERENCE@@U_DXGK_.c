/*
 * XREFs of ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0030EE8
 * Callers:
 *     ?VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0003DE0 (-VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_MULTI_.c)
 * Callees:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        _QWORD *a16)
{
  __int64 result; // rax

  *a16 = 0LL;
  result = VIDMM_GLOBAL::CreateOneAllocation(a1, a2, a3, a4, a5, a6, a8, a9, a10, a12, a14, a15, 0LL);
  if ( (int)result >= 0 )
  {
    *a16 = 0LL;
    return (unsigned int)result;
  }
  return result;
}
