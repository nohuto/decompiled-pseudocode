/*
 * XREFs of ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BD94 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006A894 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0090D74 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C004561C (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::SuspendPagingQueues(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE *v2; // r15
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx

  if ( !*((_BYTE *)this + 49) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
    *((_QWORD *)this + 15) = KeGetCurrentThread();
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
    while ( v2 != (VIDMM_DEVICE *)((char *)this + 96) )
    {
      v3 = (__int64 *)((char *)v2 - 48);
      v2 = *(VIDMM_DEVICE **)v2;
      v4 = v3[10];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 128, 0LL);
      *(_QWORD *)(v4 + 136) = KeGetCurrentThread();
      VIDMM_PAGING_QUEUE::SetStatus(v3, 2LL, v5, v6);
      v7 = v3[10] + 128;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_BYTE *)this + 49) = 1;
    *((_QWORD *)this + 15) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
    KeLeaveCriticalRegion();
  }
}
