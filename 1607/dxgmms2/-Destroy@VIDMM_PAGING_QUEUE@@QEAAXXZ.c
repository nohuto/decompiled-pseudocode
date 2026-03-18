/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045770
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C00458A0 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FF08 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AcquirePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C001D048 (-AcquirePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ReleasePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C001D07C (-ReleasePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045578 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(VIDMM_PAGING_QUEUE *this)
{
  VIDMM_DEVICE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  VIDMM_PAGING_QUEUE *v8; // rcx
  VIDMM_PAGING_QUEUE **v9; // rax
  _QWORD *v10; // rax
  __int64 **v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdx

  if ( *((_QWORD *)this + 15) )
    VIDMM_PAGING_QUEUE::Flush(this);
  v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 18);
  if ( v2 )
    VIDMM_DEVICE::RemovePagingQueueList(v2, (struct _LIST_ENTRY *)this + 3);
  VIDMM_WORKER_THREAD::AcquirePacketListLockExclusive(*((VIDMM_WORKER_THREAD **)this + 10));
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5, v6);
    v7[3] = 270LL;
    v7[4] = 50LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *((_DWORD *)this + 28) == 2 )
  {
    v8 = *(VIDMM_PAGING_QUEUE **)this;
    v9 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1);
    if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this || *v9 != this )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  else if ( *(_QWORD *)this || *((_QWORD *)this + 1) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5, v6);
    v10[3] = 270LL;
    v10[4] = 49LL;
    v10[5] = this;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  VIDMM_WORKER_THREAD::ReleasePacketListLockExclusive(*((VIDMM_WORKER_THREAD **)this + 10));
  v11 = (__int64 **)((char *)this + 16);
  while ( 1 )
  {
    v12 = *v11;
    v13 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == (__int64 *)v11 )
      break;
    operator delete(v12);
  }
  operator delete(*((void **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
}
