/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C007D3DC
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C007AC6C (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, struct _MDL *a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG v10; // edi
  int v11; // [rsp+60h] [rbp+0h] BYREF

  v4 = Length;
  v5 = (char *)BaseAddress;
  *(_DWORD *)((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFC0uLL) = 8008;
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(BaseAddress, &EventProfilerEnter, (__int64)a3, 8008);
  if ( v5 )
  {
    if ( (v4 & 0xFFFFFFFF80000000uLL) != 0 )
    {
      KeInvalidateAllCaches();
    }
    else
    {
      while ( v4 )
      {
        v10 = -1;
        if ( v4 < 0xFFFFFFFF )
          v10 = v4;
        KeInvalidateRangeAllCaches(v5, v10);
        v4 -= v10;
        v5 += v10;
      }
    }
    if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(BaseAddress, &EventProfilerExit, (__int64)a3, 8008);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(BaseAddress, Length, a3, a4);
    *(_QWORD *)(v6 + 24) = 16240LL;
    WdLogEvent5_WdAssertion(v6);
    if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v7, &EventProfilerExit, v8, 8008);
    return 3221225485LL;
  }
}
