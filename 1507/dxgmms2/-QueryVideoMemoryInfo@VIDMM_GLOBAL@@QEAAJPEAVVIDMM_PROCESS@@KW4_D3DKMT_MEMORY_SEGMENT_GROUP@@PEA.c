/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00517F0
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C000E740 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C0058404 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v8; // esi
  __int64 v9; // rbx
  __int64 v12; // rax
  unsigned int VideoMemoryInfo; // ebx
  _BYTE v15[32]; // [rsp+50h] [rbp-28h] BYREF

  v8 = (int)a4;
  v9 = (unsigned int)a3;
  if ( (unsigned int)a3 < *((_DWORD *)this + 1604) )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, (VIDMM_GLOBAL *)((char *)this + 40648));
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        this,
                        *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                        v9,
                        v8,
                        a5,
                        a6,
                        a7,
                        a8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return VideoMemoryInfo;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
}
