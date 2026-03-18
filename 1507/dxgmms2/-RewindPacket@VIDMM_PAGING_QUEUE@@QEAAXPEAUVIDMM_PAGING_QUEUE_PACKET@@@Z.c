/*
 * XREFs of ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C005B324
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGING_QUEUE::RewindPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 104, 0LL);
  *(_QWORD *)(v2 + 112) = KeGetCurrentThread();
  v5 = *((_QWORD *)this + 4);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = (char *)this + 32;
  if ( *(VIDMM_PAGING_QUEUE **)(v5 + 8) != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = a2;
  *((_QWORD *)this + 4) = a2;
  v6 = *((_QWORD *)this + 10);
  *(_QWORD *)(v6 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
  KeLeaveCriticalRegion();
}
