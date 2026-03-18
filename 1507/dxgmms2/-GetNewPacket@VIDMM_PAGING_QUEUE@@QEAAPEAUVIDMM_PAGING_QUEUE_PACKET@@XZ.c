/*
 * XREFs of ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C003DEB4
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

VIDMM_PAGING_QUEUE **__fastcall VIDMM_PAGING_QUEUE::GetNewPacket(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  VIDMM_PAGING_QUEUE **v3; // rdi
  VIDMM_PAGING_QUEUE **v4; // rbx
  VIDMM_PAGING_QUEUE *v5; // rax
  __int64 v6; // rcx
  VIDMM_PAGING_QUEUE **v8; // rax

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 104, 0LL);
  v3 = (VIDMM_PAGING_QUEUE **)((char *)this + 16);
  *(_QWORD *)(v1 + 112) = KeGetCurrentThread();
  v4 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 2);
  v5 = *v4;
  if ( v4[1] != (VIDMM_PAGING_QUEUE *)((char *)this + 16) || *((VIDMM_PAGING_QUEUE ***)v5 + 1) != v4 )
    __fastfail(3u);
  *v3 = v5;
  *((_QWORD *)v5 + 1) = v3;
  v6 = *((_QWORD *)this + 10) + 104LL;
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 == v3 )
  {
    v8 = (VIDMM_PAGING_QUEUE **)operator new(0x98uLL, 0x38346956u, PagedPool);
    v4 = v8;
    if ( v8 )
      memset(v8, 0, 0x98uLL);
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
  }
  return v4;
}
