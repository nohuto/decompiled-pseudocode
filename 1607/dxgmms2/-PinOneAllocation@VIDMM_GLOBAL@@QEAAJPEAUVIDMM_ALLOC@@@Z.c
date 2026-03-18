/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00690C0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0069190 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00692F8 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00693CC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  VIDMM_DEVICE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rax
  _QWORD v12[11]; // [rsp+30h] [rbp-58h] BYREF
  bool v13; // [rsp+98h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, &v13);
  if ( (int)result >= 0 && !v13 )
  {
    memset(v12, 0, 0x50uLL);
    v7 = *a2;
    LODWORD(v12[0]) = 203;
    v12[2] = a2;
    v8 = *(_QWORD *)v7;
    LODWORD(v12[4]) = (**(_DWORD **)(*(_QWORD *)v7 + 504LL) & 0x20000) != 0 ? 5 : 0;
    v10 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2[1] + 9) + 168LL * (*(_DWORD *)(v8 + 76) & 0x3F)),
            (struct _VIDMM_DEFERRED_COMMAND *)v12,
            1,
            0LL);
    if ( v10 < 0 )
    {
      v11 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdWarning(v11);
      VIDMM_DEVICE::UnreferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, 1);
    }
    return (unsigned int)v10;
  }
  return result;
}
