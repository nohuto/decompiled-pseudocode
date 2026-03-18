/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C008FCB8
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00901E0 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C008748C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0087A3C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 a3,
        __int64 a4)
{
  struct VIDMM_PAGING_QUEUE **v6; // rax
  struct VIDMM_PAGING_QUEUE **v7; // rdi
  struct VIDMM_PAGING_QUEUE *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax
  bool v16; // [rsp+50h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v17; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 128, 0LL);
    *((_QWORD *)this + 17) = KeGetCurrentThread();
    if ( *((_DWORD *)a2 + 28) != 1 )
      break;
    v6 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 32);
    v7 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
    v8 = *v7;
    if ( v7[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) || *((struct VIDMM_PAGING_QUEUE ***)v8 + 1) != v7 )
      __fastfail(3u);
    *v6 = v8;
    *((_QWORD *)v8 + 1) = v6;
    *v7 = 0LL;
    v7[1] = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
    KeLeaveCriticalRegion();
    v16 = 0;
    v9 = VIDMM_WORKER_THREAD::SubmitPacket(
           (VIDMM_GLOBAL **)this,
           a2,
           (struct VIDMM_PAGING_QUEUE_PACKET *)v7,
           0LL,
           &v16,
           &v17);
    v14 = v9;
    if ( v9 < 0 || v16 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12, v13);
      v15[3] = 270LL;
      v15[4] = 23LL;
      v15[5] = v14;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    VIDMM_PAGING_QUEUE::ReclaimPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v7);
  }
  *((_QWORD *)this + 17) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
  KeLeaveCriticalRegion();
}
