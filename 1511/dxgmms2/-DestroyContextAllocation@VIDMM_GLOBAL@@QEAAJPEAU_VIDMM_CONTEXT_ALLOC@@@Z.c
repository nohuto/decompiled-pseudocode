/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00519C0
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x1C00145B0 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchRemoveContextAllocation @ 0x1C005FAFC (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CONTEXT_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  struct _KEVENT *v5; // rbx
  struct VIDMM_DEVICE *Flink; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdi
  __int64 v9; // rax

  if ( a2 )
  {
    v5 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
    Flink = (struct VIDMM_DEVICE *)v5->Header.WaitListHead.Flink;
    v7 = **(struct _VIDMM_GLOBAL_ALLOC ***)&v5->Header.Lock;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v5, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(this, Flink, v7, 0);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v9 + 24) = 1927LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
