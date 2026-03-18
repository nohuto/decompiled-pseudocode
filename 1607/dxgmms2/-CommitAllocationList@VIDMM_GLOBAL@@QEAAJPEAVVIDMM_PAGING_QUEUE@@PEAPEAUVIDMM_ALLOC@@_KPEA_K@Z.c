/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C004C6C8
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005907C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004FB68 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C005A950 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebp
  struct VIDMM_ALLOC **v6; // r12
  struct VIDMM_ALLOC **i; // rdi
  struct VIDMM_ALLOC *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 *v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[10]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  v6 = &a3[a4];
  for ( i = a3; i != v6; ++i )
  {
    v10 = *i;
    if ( *((int *)*i + 45) > 0
      || (*((_DWORD *)v10 + 7) & 3) != 2
      || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 806) == v10
      || VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct _VIDMM_GLOBAL_ALLOC ***)v10, 1) )
    {
      memset(v17, 0, sizeof(v17));
      v17[4] = 0LL;
      LODWORD(v17[0]) = 206;
      v17[2] = v10;
      v11 = VIDMM_GLOBAL::QueueDeferredCommand(
              this,
              a2,
              (struct _VIDMM_DEFERRED_COMMAND *)v17,
              dword_1C0035320 == 0,
              a5);
      v13 = *((unsigned int *)v10 + 7);
      v5 = v11;
      if ( (v13 & 0x20) != 0 && v11 == 259 )
      {
        *((_QWORD *)v10 + 31) = a2;
        v13 = *a5;
        *((_QWORD *)v10 + 34) = *a5;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v16) = *((_DWORD *)v10 + 42);
      Template_pq(v13, &EventVidMmMakeResident, v12, v10, v16);
    }
    if ( *((_QWORD *)this + 5115) )
    {
      if ( a5 )
        v14 = *a5;
      else
        v14 = 0LL;
      VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, v10, v5 == 259, v14);
    }
  }
  return v5;
}
