/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004C7CC
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C004FDAC (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0052EE8 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0052FAC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 result; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  _QWORD v10[11]; // [rsp+30h] [rbp-58h] BYREF
  bool v11; // [rsp+98h] [rbp+10h] BYREF

  result = VIDMM_DEVICE::ReferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, &v11);
  if ( (int)result >= 0 && !v11 )
  {
    memset(v10, 0, 0x50uLL);
    v5 = *a2;
    LODWORD(v10[0]) = 203;
    v10[2] = a2;
    v6 = *(_QWORD *)v5;
    LODWORD(v10[4]) = (**(_DWORD **)(*(_QWORD *)v5 + 472LL) & 0x20000) != 0 ? 5 : 0;
    v8 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2[1] + 8) + 160LL * (*(_DWORD *)(v6 + 76) & 0x3F)),
           (struct _VIDMM_DEFERRED_COMMAND *)v10,
           1,
           0LL);
    if ( v8 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v7);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdWarning(v9);
      VIDMM_DEVICE::UnreferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, 1);
    }
    return (unsigned int)v8;
  }
  return result;
}
