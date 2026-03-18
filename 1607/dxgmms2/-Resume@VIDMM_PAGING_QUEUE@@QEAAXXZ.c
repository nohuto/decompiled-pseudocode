/*
 * XREFs of ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045AC8
 * Callers:
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005C0A4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C004561C (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Resume(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 128, 0LL);
  *(_QWORD *)(v1 + 136) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 28) )
    VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, *((_QWORD *)this + 4) != (_QWORD)this + 32, v3, v4);
  v5 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
