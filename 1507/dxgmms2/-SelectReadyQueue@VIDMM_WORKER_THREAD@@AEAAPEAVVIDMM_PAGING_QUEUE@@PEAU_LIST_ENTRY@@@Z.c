/*
 * XREFs of ?SelectReadyQueue@VIDMM_WORKER_THREAD@@AEAAPEAVVIDMM_PAGING_QUEUE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0036070
 * Callers:
 *     ?SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAPEAVVIDMM_DEVICE@@@Z @ 0x1C0035E60 (-SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall VIDMM_WORKER_THREAD::SelectReadyQueue(VIDMM_WORKER_THREAD *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Flink; // r8
  struct VIDMM_PAGING_QUEUE **Blink; // rcx
  struct _LIST_ENTRY *v5; // rcx

  result = a2->Flink;
  if ( a2->Flink == a2 )
    return 0LL;
  Flink = result->Flink;
  Blink = (struct VIDMM_PAGING_QUEUE **)result->Blink;
  if ( result->Flink->Blink != result || *Blink != (struct VIDMM_PAGING_QUEUE *)result )
    __fastfail(3u);
  *Blink = (struct VIDMM_PAGING_QUEUE *)Flink;
  Flink->Blink = (struct _LIST_ENTRY *)Blink;
  v5 = a2->Blink;
  result->Flink = a2;
  result->Blink = v5;
  if ( v5->Flink != a2 )
    __fastfail(3u);
  v5->Flink = result;
  a2->Blink = result;
  return result;
}
