/*
 * XREFs of ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0079BEC
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C007EDB4 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00116D8 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessPendingTerminations(KSPIN_LOCK **this, char a2, bool *a3, bool *a4)
{
  bool *v6; // rdx
  KSPIN_LOCK *v7; // rcx
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  _QWORD v12[10]; // [rsp+40h] [rbp-68h] BYREF
  bool v13; // [rsp+B0h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v14; // [rsp+C0h] [rbp+18h] BYREF

  *a3 = 0;
  v6 = a4;
  v7 = *this;
  while ( 1 )
  {
    NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(v7, v6);
    if ( !NextPendingTermination )
      break;
    memset(v12, 0, sizeof(v12));
    v10 = (VIDMM_GLOBAL *)*this;
    v12[2] = NextPendingTermination;
    LODWORD(v12[0]) = 200;
    VIDMM_GLOBAL::ProcessDeferredCommand(v10, (struct _VIDMM_DEFERRED_COMMAND *)v12, &v13, 0, 0LL, 0LL, 0, &v14);
    *a3 = 1;
    if ( !a2 )
      break;
    v7 = *this;
    v6 = a4;
  }
}
