/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C007EB50
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C007F038 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00798C8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079CA0 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(VIDMM_GLOBAL **this, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v3; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET **v5; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v6; // rdi
  struct VIDMM_PAGING_QUEUE_PACKET **v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  _QWORD *v14; // rax
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = (char *)(this + 13);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 28) == 1 )
  {
    v5 = (struct VIDMM_PAGING_QUEUE_PACKET **)((char *)a2 + 32);
    do
    {
      v6 = *v5;
      v7 = *(struct VIDMM_PAGING_QUEUE_PACKET ***)*v5;
      if ( *((struct VIDMM_PAGING_QUEUE_PACKET ***)*v5 + 1) != v5 || v7[1] != v6 )
        __fastfail(3u);
      *v5 = (struct VIDMM_PAGING_QUEUE_PACKET *)v7;
      v7[1] = (struct VIDMM_PAGING_QUEUE_PACKET *)v5;
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      v15 = 0;
      v8 = VIDMM_WORKER_THREAD::SubmitPacket(this, a2, v6, 0, &v15, &v16);
      v13 = v8;
      if ( v8 < 0 || v15 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
        v14[3] = 270LL;
        v14[4] = 23LL;
        v14[5] = v13;
        v14[6] = 0LL;
        v14[7] = 0LL;
        WdLogEvent5_WdCriticalError(v14);
      }
      VIDMM_PAGING_QUEUE::ReclaimPacket(a2, v6);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v3, 0LL);
      *((_QWORD *)v3 + 1) = KeGetCurrentThread();
    }
    while ( *((_DWORD *)a2 + 28) == 1 );
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
