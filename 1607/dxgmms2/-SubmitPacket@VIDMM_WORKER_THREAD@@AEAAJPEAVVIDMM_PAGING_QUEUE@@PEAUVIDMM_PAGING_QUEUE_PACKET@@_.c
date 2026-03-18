/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0087A3C
 * Callers:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C008FCB8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     Template_ppx @ 0x1C001E92C (Template_ppx.c)
 *     Template_ppxx @ 0x1C001E9B0 (Template_ppxx.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C0087964 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0087BB8 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        VIDMM_GLOBAL **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        _BOOL8 a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  bool v6; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  v6 = a4;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppx((__int64)this, (__int64)a2, (__int64)a3, a2, a3, *((_QWORD *)a3 + 5));
  if ( *((_BYTE *)a3 + 24) )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
    v14[3] = *((int *)a3 + 12);
    v14[4] = a3;
    v14[5] = *((_QWORD *)a3 + 8);
    v14[6] = *((_QWORD *)a3 + 7);
    v14[7] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v14);
    v15 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            v6,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice
                                                                                 + 2));
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
    v19[3] = *((int *)a3 + 12);
    v19[4] = a3;
    v19[5] = *((unsigned __int8 *)a3 + 25);
    v19[6] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v19);
    *a5 = 0;
    *a6 = 0LL;
    LOBYTE(v20) = *((_BYTE *)a3 + 25);
    v15 = VIDMM_GLOBAL::ProcessSystemCommand(
            (unsigned __int64)*this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            v20,
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppxx(v17, &EventPagingQueueComplete, v18, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v15;
}
