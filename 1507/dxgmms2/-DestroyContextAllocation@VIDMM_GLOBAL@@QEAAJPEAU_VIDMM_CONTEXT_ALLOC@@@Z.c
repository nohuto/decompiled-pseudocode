/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C8E0
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x1C000E620 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchRemoveContextAllocation @ 0x1C0078C44 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CONTEXT_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  struct VIDMM_ALLOC *v7; // rbx
  struct VIDMM_DEVICE *v8; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v9; // rdi

  if ( a2 )
  {
    v7 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 3);
    v8 = (struct VIDMM_DEVICE *)*((_QWORD *)v7 + 1);
    v9 = **(struct _VIDMM_GLOBAL_ALLOC ***)v7;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v7, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(this, v8, v9, 0);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v5 + 24) = 1900LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
