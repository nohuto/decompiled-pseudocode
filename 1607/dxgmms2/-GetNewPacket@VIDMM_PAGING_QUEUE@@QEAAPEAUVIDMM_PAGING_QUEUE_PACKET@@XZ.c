/*
 * XREFs of ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0045B4C
 * Callers:
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0054610 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

struct VIDMM_PAGING_QUEUE_PACKET *__fastcall VIDMM_PAGING_QUEUE::GetNewPacket(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET *v3; // rdi
  __int64 v4; // rbp
  struct VIDMM_PAGING_QUEUE_PACKET *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct VIDMM_PAGING_QUEUE_PACKET *result; // rax

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 128, 0LL);
  v3 = (VIDMM_PAGING_QUEUE *)((char *)this + 16);
  *(_QWORD *)(v1 + 136) = KeGetCurrentThread();
  v4 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v4 + 1;
  v5 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)v5;
  if ( *((VIDMM_PAGING_QUEUE **)v5 + 1) != (VIDMM_PAGING_QUEUE *)((char *)this + 16)
    || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v6 + 8) != v5 )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v3 = v6;
  *(_QWORD *)(v6 + 8) = v3;
  v7 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v3
    || (result = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(0xA0uLL, 0x38346956u, PagedPool), (v5 = result) != 0LL) )
  {
    memset(v5, 0, 0xA0uLL);
    result = v5;
    *((_QWORD *)v5 + 5) = v4;
  }
  return result;
}
