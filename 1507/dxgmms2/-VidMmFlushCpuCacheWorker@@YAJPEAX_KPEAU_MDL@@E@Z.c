/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C0055454
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C004D68C (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(PVOID BaseAddress, __int64 Length, struct _MDL *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // r8

  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)BaseAddress, &EventProfilerEnter, (__int64)a3, 8008);
  if ( BaseAddress )
  {
    if ( (Length & 0xFFFFFFFF80000000uLL) != 0 )
      KeInvalidateAllCaches();
    else
      KeInvalidateRangeAllCaches(BaseAddress, Length);
    if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C0027060, &EventProfilerExit, v10, 8008);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(BaseAddress, Length, a3, a4);
    *(_QWORD *)(v6 + 24) = 15923LL;
    WdLogEvent5_WdAssertion(v6);
    if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v7, &EventProfilerExit, v8, 8008);
    return 3221225485LL;
  }
}
