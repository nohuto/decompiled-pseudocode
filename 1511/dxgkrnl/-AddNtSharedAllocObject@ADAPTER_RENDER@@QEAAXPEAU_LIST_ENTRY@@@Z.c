/*
 * XREFs of ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001EE8
 * Callers:
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::AddNtSharedAllocObject(ADAPTER_RENDER *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rsi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (struct _LIST_ENTRY *)((char *)this + 232);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Blink = v5->Blink;
  a2->Flink = v5;
  a2->Blink = Blink;
  if ( Blink->Flink != v5 )
    __fastfail(3u);
  Blink->Flink = a2;
  v5->Blink = a2;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
