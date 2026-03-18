/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00798C8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C007EB50 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003B2A4 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  VIDMM_PAGING_QUEUE **v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 104, 0LL);
  *(_QWORD *)(v2 + 112) = KeGetCurrentThread();
  v5 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v5;
  if ( *v5 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *v5 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) && *((_DWORD *)this + 28) == 1 )
    VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0);
  v6 = *((_QWORD *)this + 10);
  *(_QWORD *)(v6 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
  KeLeaveCriticalRegion();
}
