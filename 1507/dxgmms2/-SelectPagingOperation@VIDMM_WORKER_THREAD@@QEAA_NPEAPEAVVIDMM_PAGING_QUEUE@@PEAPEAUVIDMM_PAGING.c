/*
 * XREFs of ?SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAPEAVVIDMM_DEVICE@@@Z @ 0x1C0035E60
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C0033210 (-SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?SelectReadyQueue@VIDMM_WORKER_THREAD@@AEAAPEAVVIDMM_PAGING_QUEUE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0036070 (-SelectReadyQueue@VIDMM_WORKER_THREAD@@AEAAPEAVVIDMM_PAGING_QUEUE@@PEAU_LIST_ENTRY@@@Z.c)
 */

bool __fastcall VIDMM_WORKER_THREAD::SelectPagingOperation(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_PAGING_QUEUE **a2,
        struct VIDMM_PAGING_QUEUE_PACKET **a3,
        struct VIDMM_DEVICE **a4)
{
  struct VIDMM_PAGING_QUEUE_PACKET *v4; // rsi
  struct VIDMM_DEVICE *v9; // rbp
  VIDMM_WORKER_THREAD *v10; // rcx
  struct VIDMM_PAGING_QUEUE *v11; // rax
  __int64 v12; // r9
  struct VIDMM_PAGING_QUEUE *v13; // rdi
  struct VIDMM_DEVICE *v14; // rax
  VIDMM_WORKER_THREAD *v15; // rcx
  VIDMM_WORKER_THREAD *v16; // rcx
  __int64 v17; // rax
  bool result; // al
  _QWORD *v19; // rax
  __int64 v20; // rdx
  bool v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v21 = 0;
  v9 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 104, 0LL);
  *((_QWORD *)this + 14) = KeGetCurrentThread();
  v11 = VIDMM_WORKER_THREAD::SelectReadyQueue(v10, (struct _LIST_ENTRY *)((char *)this + 72));
  v12 = 0LL;
  v13 = v11;
  if ( v11 )
    goto LABEL_11;
  if ( *((_DWORD *)this + 5) == 1 )
  {
    v14 = VIDMM_GLOBAL::SelectResumeDevice(*(VIDMM_GLOBAL **)this, &v21);
    v12 = 0LL;
    v9 = v14;
    if ( !v14
      || (v15 = (VIDMM_WORKER_THREAD *)*((unsigned int *)v14 + 13),
          LOBYTE(v15) = (unsigned __int8)v15 & 3,
          (_BYTE)v15 != 1) )
    {
      v13 = VIDMM_WORKER_THREAD::SelectReadyQueue(v15, (struct _LIST_ENTRY *)((char *)this + 56));
      if ( v13 )
        goto LABEL_11;
      if ( *((_BYTE *)this + 184) != (_BYTE)v12 )
      {
        v17 = *(_QWORD *)this;
        *((_BYTE *)this + 184) = v12;
        v16 = *(VIDMM_WORKER_THREAD **)(v17 + 4608);
        *((_QWORD *)this + 24) = v16;
      }
      if ( (!v9 || *(_QWORD *)(*(_QWORD *)this + 4608LL) - *((_QWORD *)this + 24) < qword_1C0027380)
        && (v13 = VIDMM_WORKER_THREAD::SelectReadyQueue(v16, (struct _LIST_ENTRY *)((char *)this + 40))) != 0LL
        || (*((_BYTE *)this + 184) = 1, v13) )
      {
LABEL_11:
        v9 = (struct VIDMM_DEVICE *)*((_QWORD *)v13 + 16);
        v19 = (_QWORD *)((char *)v13 + 32);
        v4 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v13 + 4);
        v20 = *(_QWORD *)v4;
        if ( *((struct VIDMM_PAGING_QUEUE **)v4 + 1) != (struct VIDMM_PAGING_QUEUE *)((char *)v13 + 32)
          || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v20 + 8) != v4 )
        {
          __fastfail(3u);
        }
        *v19 = v20;
        *(_QWORD *)(v20 + 8) = v19;
        *(_QWORD *)v4 = v12;
        *((_QWORD *)v4 + 1) = v12;
      }
    }
  }
  *((_QWORD *)this + 14) = v12;
  ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  result = v21;
  *a3 = v4;
  *a4 = v9;
  *a2 = v13;
  return result;
}
