/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C004BE88
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C004F3F0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004E848 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C0061CD8 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebp
  struct VIDMM_ALLOC **v6; // r15
  struct VIDMM_ALLOC **i; // rdi
  struct VIDMM_ALLOC *v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 *v14; // [rsp+20h] [rbp-78h]
  _QWORD v15[10]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  v6 = &a3[a4];
  for ( i = a3; i != v6; ++i )
  {
    v10 = *i;
    if ( *((int *)*i + 41) > 0
      || (*((_DWORD *)v10 + 7) & 3) != 2
      || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 806) == v10
      || VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct _VIDMM_GLOBAL_ALLOC ***)v10, 1) )
    {
      memset(v15, 0, sizeof(v15));
      v15[4] = 0LL;
      LODWORD(v15[0]) = 206;
      v15[2] = v10;
      v5 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v15, dword_1C00272EC == 0, a5);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v14) = *((_DWORD *)v10 + 38);
      Template_pq((unsigned int)v14, &EventVidMmMakeResident, v11, v10, v14);
    }
    if ( *((_QWORD *)this + 5075) )
    {
      if ( a5 )
        v12 = *a5;
      else
        v12 = 0LL;
      VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, v10, v5 == 259, v12);
    }
  }
  return v5;
}
