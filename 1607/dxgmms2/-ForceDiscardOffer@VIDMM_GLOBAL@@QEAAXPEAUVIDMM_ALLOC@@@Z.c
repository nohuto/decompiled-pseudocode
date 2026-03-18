/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00891C0
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00890E4 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, DXGFASTMUTEX ****a2)
{
  DXGFASTMUTEX ***v2; // rax
  unsigned __int64 v3; // r15
  int v4; // r12d
  DXGFASTMUTEX **v7; // rbx
  struct _VIDSCH_SYNC_OBJECT **v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v15; // [rsp+C0h] [rbp+40h] BYREF

  v2 = *a2;
  v3 = 0LL;
  v4 = 0;
  v14 = 0LL;
  v7 = *v2;
  v8 = &a2[1][10][21 * (*((_DWORD *)*v2 + 19) & 0x3F)];
  if ( (*v2)[17] )
  {
    if ( *((int *)a2[12] + 2) > 0 )
      VIDMM_GLOBAL::FlushPendingAllocationAccess(this, v7, 0LL, 0);
    memset(v13, 0, sizeof(v13));
    v13[1] = a2[1];
    LODWORD(v13[0]) = 211;
    v13[4] = v7;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)v8,
           (struct _VIDMM_DEFERRED_COMMAND *)v13,
           0,
           &v14);
    v3 = v14;
    v4 = v9;
  }
  else
  {
    DXGFASTMUTEX::Acquire(v7[40]);
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v7[40], v10, v11, v12);
  }
  if ( v4 == 259 )
  {
    v15 = v8[11];
    v14 = v3;
    VIDMM_GLOBAL::WaitForFences(this, &v15, &v14, 1u, 0LL);
  }
}
