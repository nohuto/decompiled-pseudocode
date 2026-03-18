/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C0053544
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C005353C (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-68h]
  _QWORD v16[10]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    v6 = -939524097;
  }
  memset(v16, 0, sizeof(v16));
  v11 = *a2;
  LODWORD(v16[0]) = 212;
  v16[2] = a2;
  v12 = *v11;
  LODWORD(v16[4]) = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    (struct VIDMM_PAGING_QUEUE *)(a2[1][8] + 152LL * (*(_DWORD *)(v12 + 76) & 0x3F)),
    (struct _VIDMM_DEFERRED_COMMAND *)v16,
    0,
    0LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v15) = a3;
      Template_pq(v13, &EventSetAllocationPriority, v14, a2, v15);
    }
  }
}
