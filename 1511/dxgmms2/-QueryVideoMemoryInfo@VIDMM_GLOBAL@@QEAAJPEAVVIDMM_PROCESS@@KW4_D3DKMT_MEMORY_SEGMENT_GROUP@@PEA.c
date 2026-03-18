/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C007BCA8
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C001C6F0 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C007F538 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        struct _KTHREAD **this,
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
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, this + 5088, a3, a4);
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        (struct VIDMM_GLOBAL *)this,
                        *((_DWORD *)this[3] + 46),
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
