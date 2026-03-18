/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0039848
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00575F8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     Template_ppx @ 0x1C000FB94 (Template_ppx.c)
 *     Template_ppxx @ 0x1C000FC18 (Template_ppxx.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0058058 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C005B300 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        ADAPTER_RENDER ***this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        bool a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct VIDMM_DEVICE *VidMmDevice; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_ppx((__int64)this, (__int64)a2, (__int64)a3, a2, a3, *((_QWORD *)a3 + 5));
  if ( *((_BYTE *)a3 + 24) )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
    v17[3] = *((int *)a3 + 12);
    v17[4] = a3;
    v17[5] = *((_QWORD *)a3 + 8);
    v17[6] = *((_QWORD *)a3 + 7);
    v17[7] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v17);
    v12 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            a4,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice
                                                                                 + 2));
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
    v10[3] = *((int *)a3 + 12);
    v10[4] = a3;
    v10[5] = *((unsigned __int8 *)a3 + 25);
    v10[6] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v10);
    *a5 = 0;
    *a6 = 0LL;
    v12 = VIDMM_GLOBAL::ProcessSystemCommand(
            (VIDMM_GLOBAL *)*this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_ppxx(v11, &EventPagingQueueComplete, v13, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v12;
}
