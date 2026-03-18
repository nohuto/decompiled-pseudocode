/*
 * XREFs of ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C004FB54
 * Callers:
 *     ?VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0011A50 (-VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_MULTI_.c)
 * Callees:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned __int64 a14,
        void *a15,
        _QWORD *a16)
{
  __int64 result; // rax
  unsigned __int64 *v17; // [rsp+90h] [rbp-18h] BYREF

  v17 = 0LL;
  *a16 = 0LL;
  result = VIDMM_GLOBAL::CreateOneAllocation(a1, a2, a3, a4, a5, a6, a8, a9, a10, a12, a14, a15, 0LL, a13, 0, 0LL, &v17);
  if ( (int)result >= 0 )
  {
    *a16 = v17;
    return (unsigned int)result;
  }
  return result;
}
