/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C008C5C4
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C008902C (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, struct _MDL *a3)
{
  unsigned __int64 v3; // r14
  char *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG v9; // edi
  int v10; // [rsp+60h] [rbp+0h] BYREF

  v3 = Length;
  v4 = (char *)BaseAddress;
  *(_DWORD *)((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL) = 8008;
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(BaseAddress, &EventProfilerEnter, (__int64)a3, 8008);
  if ( v4 )
  {
    if ( (v3 & 0xFFFFFFFF80000000uLL) != 0 )
    {
      KeInvalidateAllCaches();
    }
    else
    {
      while ( v3 )
      {
        v9 = -1;
        if ( v3 < 0xFFFFFFFF )
          v9 = v3;
        KeInvalidateRangeAllCaches(v4, v9);
        v3 -= v9;
        v4 += v9;
      }
    }
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(BaseAddress, &EventProfilerExit, (__int64)a3, 8008);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(BaseAddress, Length);
    *(_QWORD *)(v5 + 24) = 17134LL;
    WdLogEvent5_WdAssertion(v5);
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v6, &EventProfilerExit, v7, 8008);
    return 3221225485LL;
  }
}
