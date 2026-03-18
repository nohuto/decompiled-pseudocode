/*
 * XREFs of ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006164C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0061470 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003B2A4 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::ResumePagingQueues(VIDMM_DEVICE *this)
{
  char *v2; // rsi
  char *v3; // r15
  char *v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( *((_BYTE *)this + 49) == 1 )
  {
    v2 = (char *)this + 104;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    v3 = (char *)this + 88;
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v4 = (char *)*((_QWORD *)this + 11);
    *((_BYTE *)this + 49) = 0;
    while ( v4 != v3 )
    {
      v5 = (__int64 *)(v4 - 48);
      v4 = *(char **)v4;
      v6 = v5[10];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6 + 104, 0LL);
      *(_QWORD *)(v6 + 112) = KeGetCurrentThread();
      if ( *((_DWORD *)v5 + 28) )
        VIDMM_PAGING_QUEUE::SetStatus(v5, v5[4] != (_QWORD)(v5 + 4));
      v7 = v5[10];
      *(_QWORD *)(v7 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
