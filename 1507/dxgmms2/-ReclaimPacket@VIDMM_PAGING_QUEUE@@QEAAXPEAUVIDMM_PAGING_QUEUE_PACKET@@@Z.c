/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C003E20C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00575F8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003E0BC (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  VIDMM_PAGING_QUEUE **v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)a2 + 5);
  memset(a2, 0, 0x98uLL);
  *((_QWORD *)a2 + 5) = v2 + 1;
  v5 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  *(_QWORD *)(v5 + 112) = KeGetCurrentThread();
  v6 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v6;
  if ( *v6 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *v6 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) && *((_DWORD *)this + 26) == 1 )
    VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0);
  v7 = *((_QWORD *)this + 10);
  *(_QWORD *)(v7 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
  KeLeaveCriticalRegion();
}
