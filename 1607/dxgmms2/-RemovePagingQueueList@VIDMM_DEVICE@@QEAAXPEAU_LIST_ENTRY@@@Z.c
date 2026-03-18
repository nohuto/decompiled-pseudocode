/*
 * XREFs of ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FF08
 * Callers:
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045770 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::RemovePagingQueueList(VIDMM_DEVICE *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Flink = a2->Flink;
  Blink = a2->Blink;
  if ( a2->Flink->Blink != a2 || Blink->Flink != a2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  a2->Flink = 0LL;
  a2->Blink = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
