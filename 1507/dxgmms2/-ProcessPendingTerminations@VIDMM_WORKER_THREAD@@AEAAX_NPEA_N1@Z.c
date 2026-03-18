/*
 * XREFs of ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0035FBC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C005785C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0005D8C (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessPendingTerminations(KSPIN_LOCK **this, char a2, bool *a3, bool *a4)
{
  bool *v6; // rdx
  KSPIN_LOCK *v7; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  ADAPTER_RENDER **v11; // rcx
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
    v11 = (ADAPTER_RENDER **)*this;
    v12[2] = NextPendingTermination;
    LODWORD(v12[0]) = 200;
    VIDMM_GLOBAL::ProcessDeferredCommand(v11, (struct _VIDMM_DEFERRED_COMMAND *)v12, &v13, 0, 0LL, 0LL, 0, &v14);
    *a3 = 1;
    if ( !a2 )
      break;
    v7 = *this;
    v6 = a4;
  }
}
