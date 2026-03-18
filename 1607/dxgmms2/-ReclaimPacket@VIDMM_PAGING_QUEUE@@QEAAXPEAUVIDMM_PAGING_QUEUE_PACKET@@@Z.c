/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C008748C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C008FCB8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C004561C (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  VIDMM_PAGING_QUEUE **v7; // rcx
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 128, 0LL);
  *(_QWORD *)(v2 + 136) = KeGetCurrentThread();
  v7 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  if ( *v7 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v7;
  *v7 = a2;
  *((_QWORD *)this + 3) = a2;
  --*((_DWORD *)this + 34);
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) && *((_DWORD *)this + 28) == 1 )
    VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0LL, v5, v6);
  --*(_DWORD *)(*((_QWORD *)this + 18) + 64LL);
  --*(_DWORD *)(*((_QWORD *)this + 10) + 144LL);
  v8 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
