/*
 * XREFs of ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00618F4
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *a2,
        int a3)
{
  _OWORD *v6; // rdi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1

  if ( *((_QWORD *)this + 5075) )
  {
    v6 = operator new(0x40uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40616, 0LL);
      *((_QWORD *)this + 5078) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v7 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v7 )
        operator delete(v7);
      v8 = *((_OWORD *)a2 + 1);
      *v6 = *(_OWORD *)a2;
      v9 = *((_OWORD *)a2 + 2);
      v6[1] = v8;
      v10 = *((_OWORD *)a2 + 3);
      v6[2] = v9;
      v6[3] = v10;
      *((_DWORD *)v6 + 14) = a3;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 8;
      *((_QWORD *)this + 5078) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40616, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
